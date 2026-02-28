#include <iostream>
int main () {
    int menu;
    std::cout << "Введите день недели (от 1 до 7): ";
    std::cin >> menu;

    if (menu==4) {
        std::cout << "Меню сегодня (четверг):\n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат 'Цезарь' с креветками \n";
        std::cout << "Куриная ножка с пюре\n";
        std::cout << "Морс\n";
    } else if (menu==2) {
        std::cout << "Меню сегодня (вторник):\n";
        std::cout << "Харчо\n";
        std::cout << "Салат 'Оливье'\n";
        std::cout << "Баварские колбаски с капустой\n";
        std::cout << "Морс\n";
    } else {

    }
    
}