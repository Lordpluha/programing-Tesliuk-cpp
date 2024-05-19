#include "entity.h"

Phone::Phone(const std::string& model, int price) : model(model), price(price) {}

std::string Phone::toString() const {
    std::stringstream ss;
    ss << "Model: " << model << ", Price: " << price;
    return ss.str();
}

Phone Phone::fromString(const std::string& data) {
    std::stringstream ss(data);
    std::string model;
    int price;
    ss >> model >> price;
    return Phone(model, price);
}
