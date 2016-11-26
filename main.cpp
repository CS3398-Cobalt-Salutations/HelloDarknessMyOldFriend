//#include <libintl.h>
//#include <locale.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//    int count = 1;
//    setlocale( LC_ALL, "" );
//    bindtextdomain( "hello", "/usr/share/locale" );
//    textdomain( "hello" );
//    printf( gettext( "Hello, world!\n" ) );
//    printf( ngettext( "Orangutan has %d banana.\n", "Orangutan has %d bananas.\n", count ), count );
//    printf( gettext( "Try Weblate at <http://demo.weblate.org/>!\n" ) );
//    printf( "%s\n", gettext( "Thank you for using Weblate." ) );
//    exit(0);
//}


#include <iostream>
#include <cppunit\CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

int main()
{
    // Get the top-level suite from the registry
    CppUnit::Test *suite = CppUnit::TestFactoryRegistry::getRegistry().makeTest();

    // Add the test suite to the list of tests to be run
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(suite);

    // Change the default output to the format of a compiler error output
    runner.setOutputter(new CppUnit::CompilerOutputter(&runner.result(), std::cerr));

    // Run the tests
    bool testsSuccessful = runner.run();

    // Return error code 1 if at least one of the tests failed
    return testsSuccessful ? 0 : 1;
}