#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;
using std::istream;

class Entity {
private:
    int id;
    string name;

public:
    // Конструктори
    Entity();
    Entity(int id, const string& name);
    
    // Конструктор копіювання
    Entity(const Entity& other);

    // Оператор присвоювання
    Entity& operator=(const Entity& other);

    // Оператори порівняння
    bool operator==(const Entity& other) const;
    bool operator!=(const Entity& other) const;

    // Оператори введення/виведення
    friend ostream& operator<<(ostream& os, const Entity& entity);
    friend istream& operator>>(istream& is, Entity& entity);
};

#endif // ENTITY_H
