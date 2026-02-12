#include <iostream>
int main() {
    std::cout <<"Эта прорамма позволит псчитать, сколько пассажиров в маршрутке\n";
    int come;
    int leave;
    int now;
    std::string streetProg = "'Улица программистов'.";
    std::string streetAlg = "'Улица алгоритмов'.";
    std::string streetLog = "'Улица логарифмов'.";
    std::string streetOpi = "'Улица оптимистов'.";

    // 1 остановка 

    std::cout << "Прибываем на остановку " << streetProg << " В салоне пассажиров: ";
    std::cin >> now;
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leave; 
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> come;
    now = now - leave + come;
    std::cout << "Отправляемся с остановки " << streetProg << " В салоне пассажиров: " << now << "\n"; 
    std::cout << "------------------Едем------------------\n";

    // 2 остановка 

    std::cout << "Прибываем на остановку " << streetAlg << " В салоне пассажиров: " << now << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leave; 
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> come;
    now = now - leave + come;
    std::cout << "Отправляемся с остановки " << streetAlg << " В салоне пассажиров: " << now << "\n"; 
    std::cout << "------------------Едем------------------\n"; 
     
    // 3 остановка 

    std::cout << "Прибываем на остановку " << streetLog << " В салоне пассажиров: " << now << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leave; 
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> come;
    now = now - leave + come;
    std::cout << "Отправляемся с остановки " << streetLog << " В салоне пассажиров: " << now << "\n"; 
    std::cout << "------------------Едем------------------\n"; 
     
    // 4 остановка 

    std::cout << "Прибываем на остановку " << streetOpi << " В салоне пассажиров: " << now << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leave; 
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> come;
    now = now - leave + come;
    std::cout << "Отправляемся с остановки " << streetOpi << " В салоне пассажиров: " << now << "\n"; 
    std::cout << "------------------Едем------------------\n";  

    int ticket = 20;
    int profit = ticket * now;
    int salaryDriver = profit / 4;
    int salaryFuel = profit / 5;
    int tax = profit / 5;
    int salaryCar = profit / 5;
    int total = profit + salaryDriver + salaryFuel + tax + salaryCar;


    std::cout << "Всего заработали: " << profit << " руб.\n";
    std::cout << "Зарплата водителя: " << salaryDriver << " руб.\n";
    std::cout << "Расходы на топливо: " << salaryFuel << " руб.\n";
    std::cout << "Налоги: " << tax << "руб.\n";
    std::cout << "Расход на ремонт машины: " << salaryCar << " руб.\n";
    std::cout << "Итого доход: " << total  << " руб.\n";
}