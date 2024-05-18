#include <iostream>
#include "list.h"

using std::cout;
using std::cin;
using std::string;

int main() {
    List phoneList;

    // Приклад використання
    phoneList.addPhone(Phone("iPhone", 999));
    phoneList.addPhone(Phone("Samsung", 799));

    string fileName = "phones.txt";
    phoneList.writeToFile(fileName);

    List newList;
    newList.readFromFile(fileName);

    for (const auto& phone : newList) {
        cout << phone.toString() << std::endl;
    }

    return 0;
}
