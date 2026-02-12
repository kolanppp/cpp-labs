#include <iostream>
int main() {
    int startHeight = 100;    //Стартовая высота 
    int growthHeight = 50;    //Прирост за день 
    int decreaseHeight = 30;  //Уменьшение за ночь 
    int  total;
    std::cout << "Рост бамбука при посадке его рано утром равен : " << startHeight << " см.\n";
    std::cout << "Рост бамбука за день равен: " << growthHeight << " см.\n";
    std::cout << "Гусеницы съедают за ночь по " << decreaseHeight << " см.\n";
    total = ((growthHeight - decreaseHeight)*2) + (growthHeight / 2) + startHeight;
    std::cout << "Рост бамбука к середине третьего дня будет равен: " << total << " см.\n";  
}