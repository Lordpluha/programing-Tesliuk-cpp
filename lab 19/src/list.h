#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include <vector>
#include <iostream>
#include <fstream>

using std::vector;
using std::ostream;
using std::istream;
using std::ofstream;
using std::ifstream;

class List {
private:
    vector<Entity> entities;

public:
    // Оператор індексування
    Entity& operator[](size_t index);
    const Entity& operator[](size_t index) const;

    // Додавання елемента до списку
    List& operator<<(const Entity& entity);

    // Оператори введення/виведення
    friend ostream& operator<<(ostream& os, const List& list);
    friend istream& operator>>(istream& is, List& list);
    
    // Оператори введення/виведення для файлів
    friend ofstream& operator<<(ofstream& ofs, const List& list);
    friend ifstream& operator>>(ifstream& ifs, List& list);
};

#endif // LIST_H
