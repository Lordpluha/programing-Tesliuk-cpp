#include "list.h"
#include <iostream>

int main() {
    List phoneList;

    Phone phone1("ModelA", 300.0, 5.5);
    Phone phone2("ModelB", 250.0, 5.5);
    Phone phone3("ModelC", 400.0, 6.0);

    phoneList.addPhone(phone1);
    phoneList.addPhone(phone2);
    phoneList.addPhone(phone3);

    std::cout << "All phones:" << std::endl;
    phoneList.print();

    std::cout << "Cheapest phone with 5.5 inch screen:" << std::endl;
    try {
        const Phone& cheapestPhone = phoneList.findCheapestPhone(5.5);
        cheapestPhone.print();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
