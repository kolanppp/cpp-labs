#include <iostream>
int main () {

    int levelChar;

    int pointChar;
    std::cout << "Введите число очков опыта: ";
    std::cin >> pointChar;
    std::cout << "------Считаем------\n";

    if (pointChar>=0 && pointChar<=1000) {
        std::cout << "Уровень персонажа: 1.\n";
    } else if (pointChar>=1001 && pointChar<=2500) {
        std::cout << "Уровень персонажа: 2.\n";
    } else if (pointChar>=2501 && pointChar<=5000) {
        std::cout << "Уровень персонажа: 3.\n";
    } else {
        std::cout << "Неизвестный уроень.\n";
    }
    
}