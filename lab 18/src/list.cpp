#include "list.h"
#include <fstream>

void List::readFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        phones.clear();
        std::string line;
        while (std::getline(inFile, line)) {
            phones.push_back(Phone::fromString(line));
        }
        inFile.close();
    }
}

void List::writeToFile(const std::string& fileName) const {
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        for (const auto& phone : phones) {
            outFile << phone.toString() << std::endl;
        }
        outFile.close();
    }
}

void List::addPhone(const Phone& phone) {
    phones.push_back(phone);
}
