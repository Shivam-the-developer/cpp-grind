#include <iostream>

int main(){
    std::cout << "Enter a number: ";
    
    int x{};
    std::cin >> x;

    std::cout << "Double of the numeber is: " << x*2 << '\n';
    std::cout << "Triple of the numeber is: " << x*3 << '\n';
    return 0;
}