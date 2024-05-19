#include <iostream>
#include "entity.h"
#include "list.h"
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;

int main() {
    // Створення об'єктів Entity
    Entity e1(1, "Entity1");
    Entity e2(2, "Entity2");

    // Демонстрація операторів порівняння
    if (e1 != e2) {
        cout << "e1 не дорівнює e2" << endl;
    } else {
        cout << "e1 дорівнює e2" << endl;
    }

    // Присвоєння об'єктів
    Entity e3 = e1;
    cout << "Після присвоювання e3 = e1: " << endl;
    cout << e3 << endl;

    // Введення та виведення Entity з консолі
    cout << "Введіть новий об'єкт Entity (ID і ім'я): ";
    Entity e4;
    cin >> e4;
    cout << "Введений об'єкт: " << e4 << endl;

    // Створення списку List
    List list;
    list << e1 << e2 << e3 << e4;

    // Демонстрація оператора індексування
    cout << "Перший елемент списку: " << list[0] << endl;

    // Введення та виведення списку List
    cout << "Список об'єктів:" << endl;
    cout << list;

    // Збереження списку у файл
    ofstream ofs("list.txt");
    if (ofs.is_open()) {
        ofs << list;
        ofs.close();
        cout << "Список збережено у файл list.txt" << endl;
    } else {
        cout << "Не вдалося відкрити файл для запису" << endl;
    }

    // Зчитування списку з файлу
    List listFromFile;
    ifstream ifs("list.txt");
    if (ifs.is_open()) {
        ifs >> listFromFile;
        ifs.close();
        cout << "Список зчитано з файлу list.txt:" << endl;
        cout << listFromFile;
    } else {
        cout << "Не вдалося відкрити файл для читання" << endl;
    }

    return 0;
}
