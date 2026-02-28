#include <iostream>
int main () {
     
    int a;
    std::cout << "Введите первое число: ";
    std::cin >> a;

    int b;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "------Проверяем------\n";

    int c = a % b;

    if (c==0) {
        std::cout << "Да, " << a << " делится на " << b << " без остатка!\n";
    } else {
        std::cout << "Нет, " << a << " не делится на " << b << " без остатка!\n";
    }

}