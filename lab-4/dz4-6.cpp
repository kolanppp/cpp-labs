#include <iostream>
int main () {
    
    // Вопрос, достаточно ли барберов или нет и сообщить об этом.
    // 1 час - 1 клиент, смена 8 часов. 
    // В месяце 30 дней.


    int peopleMen; //Кол-во клиентов в месяц.
    std::cout << "Сколько мужчин проживает в городе ";
    std::cin >> peopleMen;

    int allBarber; //Кол-во дней в месяце.
    std::cout << "Сколько работает барберов в городе: ";
    std::cin >> allBarber;

    int monthDay = 30; //Кол-во дней в месяце.


    
    int shiftCustomers = 1 * 8; //Клиентов за смену 1 барбера.
    int diffBarber;
    int minCustomers = peopleMen / monthDay; // Минимальное количество клиентов в день.
    std::cout << "Мин. кол-во в день клиентов в месяц ВСЕГО: " << minCustomers << "\n";

    int minBarber = minCustomers % shiftCustomers;
    if (minBarber!= 0) {
        minCustomers+=minBarber;
        minBarber = minCustomers / shiftCustomers;
        std::cout <<"Минимальное необходимое кол-во специалистов в месяц: " << minBarber << ".\n";
    } else {
        std::cout <<"Минимальное необходимое кол-во барберов в месяц: " << minBarber << ".\n";
    }

    if (minBarber>allBarber) {
        diffBarber = minBarber - allBarber;
        std::cout << "Не хватает " << diffBarber << " барбера-(ов).\n";
    } else if (minBarber<=allBarber)
    {
        std::cout << "Барберов хватает.\n";
    }
    

     
   

    
    

}   