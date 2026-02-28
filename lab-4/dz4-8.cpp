#include <iostream>
int main () {
    
    int max;
    int min;

    int salaryFirst;
    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> salaryFirst;

    int salarySecond;
    std::cout << "Введите зарплату второго сотрудника: ";
    std::cin >> salarySecond;

    int salaryThird;
    std::cout << "Введите зарплату третьего сотрудника: ";
    std::cin >> salaryThird;

    std::cout << "---------Считаем---------\n";


    if (salaryFirst >= salarySecond && salaryFirst >= salaryThird) {
        std::cout << "Самая высокая зарплата в отделе: " << salaryFirst << " руб.\n";
        max = salaryFirst;
    } else if (salarySecond >= salaryFirst && salarySecond >= salaryThird) {
        std::cout << "Самая высокая зарплата в отделе: " << salarySecond << " руб.\n";
        max = salarySecond;
    } else if (salaryThird >= salaryFirst && salaryThird >= salarySecond) {
        std::cout << "Самая высокая зарплата в отделе: " << salaryThird << " руб.\n";
        max = salaryThird;
    } else {}


    if (salaryFirst <= salarySecond && salaryFirst <= salaryThird) {
        min = salaryFirst;
    } else if (salarySecond <= salaryFirst && salarySecond <= salaryThird) {
        min = salarySecond;
    } else if (salaryThird <= salaryFirst && salaryThird <= salarySecond) {
        std::cout << salaryThird;
    } else {}

    int salaryAverage = (salaryFirst + salarySecond + salaryThird) / 3; 
    std::cout << "Средняя зарплата в отделе: " << salaryAverage << " руб.\n";


    int salaryDiff = max - min;
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << salaryDiff << ".\n";
    
}