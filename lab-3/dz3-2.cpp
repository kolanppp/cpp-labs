#include <iostream>
int main() {
    int a = 42;
    int b = 153;
    int c = b;


    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";


    b=a;
    a=c;
        
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

}