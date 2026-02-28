#include <iostream>
int main () {
    
    int numOne;
    int numTwo;
    
    std::cout << "Введите первое число: ";
    std::cin >> numOne;
    
    std::cout << "Введите второе число: ";
    std::cin >> numTwo;

    std::cout << "-------Проверяем-------\n";

    if (numOne < numTwo) {
        std::cout << "Наименьшее число: " << numOne << ".\n";
    }  else if (numOne > numTwo) {
        std::cout << "Наименьшее число: " << numTwo << ".\n";
    } else {
        std::cout << "Числа равны!\n";
    }
}