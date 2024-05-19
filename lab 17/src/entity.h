#pragma once

#include <iostream>
#include <string>

class Phone {
private:
    std::string model;
    float price;
    float screenSize;

public:
    // Конструктор за замовчуванням
    Phone();

    // Конструктор з аргументами
    Phone(const std::string& model, float price, float screenSize);

    // Конструктор копіювання
    Phone(const Phone& other);

    // Деструктор
    ~Phone();

    // Гетери
    std::string getModel() const;
    float getPrice() const;
    float getScreenSize() const;

    // Сетери
    void setModel(const std::string& newModel);
    void setPrice(float newPrice);
    void setScreenSize(float newScreenSize);

    // Метод виводу об’єкта на екран
    void print() const;
};
