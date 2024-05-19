#include "list.h"

// Оператор індексування
Entity& List::operator[](size_t index) {
    return entities.at(index);
}

const Entity& List::operator[](size_t index) const {
    return entities.at(index);
}

// Додавання елемента до списку
List& List::operator<<(const Entity& entity) {
    entities.push_back(entity);
    return *this;
}

// Оператори введення/виведення
ostream& operator<<(ostream& os, const List& list) {
    for (const auto& entity : list.entities) {
        os << entity << std::endl;
    }
    return os;
}

istream& operator>>(istream& is, List& list) {
    Entity entity;
    while (is >> entity) {
        list.entities.push_back(entity);
    }
    return is;
}

// Оператори введення/виведення для файлів
ofstream& operator<<(ofstream& ofs, const List& list) {
    for (const auto& entity : list.entities) {
        ofs << entity << std::endl;
    }
    return ofs;
}

ifstream& operator>>(ifstream& ifs, List& list) {
    Entity entity;
    while (ifs >> entity) {
        list.entities.push_back(entity);
    }
    return ifs;
}
