#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <sstream>

class Phone {
public:
    Phone(const std::string& model, int price);
    std::string toString() const;
    static Phone fromString(const std::string& data);

private:
    std::string model;
    int price;
};

#endif // ENTITY_H
