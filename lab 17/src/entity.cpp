#include "entity.h"

// Конструктор за замовчуванням
Phone::Phone() : model("Unknown"), price(0.0), screenSize(0.0) {
    std::cout << "Phone default constructor called" << std::endl;
}

// Конструктор з аргументами
Phone::Phone(const std::string& model, float price, float screenSize) 
    : model(model), price(price), screenSize(screenSize) {
    std::cout << "Phone parameterized constructor called" << std::endl;
}

// Конструктор копіювання
Phone::Phone(const Phone& other)
    : model(other.model), price(other.price), screenSize(other.screenSize) {
    std::cout << "Phone copy constructor called" << std::endl;
}

// Деструктор
Phone::~Phone() {
    std::cout << "Phone destructor called" << std::endl;
}

// Гетери
std::string Phone::getModel() const { return model; }
float Phone::getPrice() const { return price; }
float Phone::getScreenSize() const { return screenSize; }

// Сетери
void Phone::setModel(const std::string& newModel) { model = newModel; }
void Phone::setPrice(float newPrice) { price = newPrice; }
void Phone::setScreenSize(float newScreenSize) { screenSize = newScreenSize; }

// Метод виводу об’єкта на екран
void Phone::print() const {
    std::cout << "Model: " << model << ", Price: " << price << ", Screen Size: " << screenSize << std::endl;
}
