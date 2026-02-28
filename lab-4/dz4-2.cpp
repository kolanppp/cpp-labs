#include <iostream>
int main () {
    
    int numOne;
    std::cout << "Введите первое число: ";
    std::cin >> numOne;

    int numTwo;
    std::cout << "Введите второе число: ";
    std::cin >> numTwo;

    int numTree = numOne + numTwo;

    int amount;
    std::cout << "Введите их сумму: ";
    std::cin >> amount;    

    std::cout << "--------Проверяем--------\n";

    if (amount == numTree) {
        std::cout << "Верно!\n";
    } else  {
        std::cout << "Ошибка! Верный результат: " << numTree << " .\n";
    }
}