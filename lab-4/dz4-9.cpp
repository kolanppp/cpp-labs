#include <iostream>
int main () {

    int remainder; //Остаток 
    int income ; //Доход 
    
    std::cout << "Введите сумму доходов: ";
    std::cin >> income;


    int hihgTax;
    int averageTax;
    int lowTax;

    
    if (income >= 50000) {
        remainder = income - 50000;                          // Работа с остатком.
        hihgTax = remainder / 100 * 30;                     //Процент налога.
        std::cout << "налог 30%: " << hihgTax << "\n";      //Налог. 
        income -= remainder;                                //Сброс дохода, который вводили.
    }

    if (income <= 50000 && income >= 10000) {
        remainder = income - 10000;
        averageTax = remainder / 100 * 20;
        std::cout << "налог 20%: " << averageTax << "\n";
        income -= remainder;
    } 

    if (income <= 10000 && income >= 0) {
        remainder = income - 0;
        lowTax = remainder / 100 * 13;
        std::cout << "налог 13%: " << lowTax << "\n";
    } 

    int incomeAll = hihgTax + averageTax + lowTax;
    std::cout << "Налог по прогрессивной шкале составляет: " << incomeAll << "\n";
}