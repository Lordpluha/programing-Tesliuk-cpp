#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include <vector>
#include <string>
#include <iterator>

class List {
public:
    void readFromFile(const std::string& fileName);
    void writeToFile(const std::string& fileName) const;
    void addPhone(const Phone& phone);

    // Добавляємо методи для ітерації
    std::vector<Phone>::iterator begin() { return phones.begin(); }
    std::vector<Phone>::iterator end() { return phones.end(); }
    std::vector<Phone>::const_iterator begin() const { return phones.begin(); }
    std::vector<Phone>::const_iterator end() const { return phones.end(); }

private:
    std::vector<Phone> phones;
};

#endif // LIST_H
