#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleTitle(L"FizzBuzz Problem Solved");
    for ( int i = 1 ; i <= 100 ; i++ ) {
        if ( i % 3 == 0 ) { cout << "Fizz\n"; }
        if ( i % 5 == 0 ) { cout << "Buzz\n"; }
        if ( i % 3 == 0 && i % 5 == 0 ){ cout << "FizzBuzz\n"; }
        if ( i % 3 != 0 && i % 5 != 0 ) { cout << i << endl; }
    }
    return 0;
}
