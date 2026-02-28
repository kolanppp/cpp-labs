#include <iostream>
int main () {
    int x;
    std::cout << "Введите число: ";
    std::cin >> x;
    int remainder = x % 2;
    if (remainder==0) {
        std::cout << "Число " << x << " - четное.\n";
    } else {
        std::cout << "Число " << x << " - нечетное.\n";
    }
}