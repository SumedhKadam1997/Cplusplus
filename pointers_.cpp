#include <iostream>
using namespace std;

// expre_Lifetime_of_Objects_Allocated_with_new.cpp
// C2541 expected
int main()
{
    // Use new operator to allocate an array of 20 characters.
    char *AnArray = new char[20];

    for( int i = 0; i < 20; ++i )
    {
        // On the first iteration of the loop, allocate
        //  another array of 20 characters.
        // if( i == 0 )
        
            char *AnotherArray = new char[20];
            delete [] AnotherArray;
        
    }

     // Error: pointer out of scope.
    delete [] AnArray;      // OK: pointer still in scope.
}