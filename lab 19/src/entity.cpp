#include "entity.h"

// Конструктори
Entity::Entity() : id(0), name("") {}
Entity::Entity(int id, const string& name) : id(id), name(name) {}

// Конструктор копіювання
Entity::Entity(const Entity& other) : id(other.id), name(other.name) {}

// Оператор присвоювання
Entity& Entity::operator=(const Entity& other) {
    if (this == &other) return *this;
    id = other.id;
    name = other.name;
    return *this;
}

// Оператори порівняння
bool Entity::operator==(const Entity& other) const {
    return id == other.id && name == other.name;
}

bool Entity::operator!=(const Entity& other) const {
    return !(*this == other);
}

// Оператори введення/виведення
ostream& operator<<(ostream& os, const Entity& entity) {
    os << "ID: " << entity.id << ", Name: " << entity.name;
    return os;
}

istream& operator>>(istream& is, Entity& entity) {
    is >> entity.id >> entity.name;
    return is;
}
