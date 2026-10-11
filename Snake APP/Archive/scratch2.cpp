#include <iostream>

int main(){
    // add /n by std::cout << variable << "/n";

    // intialize and assing variable
    // preffered modern method
    int width {5};
    std::cout << width;

    // copy-intialization (taken from C)
    int length = 5;
    std::cout << length;

    int height ( 5 );
    std::cout << height;

    int time {}; // value-initialization / zero-initialization to value 0

    int a = 5, b = 6;          // copy-initialization
    int c ( 7 ), d ( 8 );      // direct-initialization
    int e { 9 }, f { 10 };     // direct-list-initialization
    int i {}, j {};            // value-initialization

    // will not get unused variable warning
    [[maybe_unused]] double pi { 3.14159 }; 
    return 0;
}
// Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
