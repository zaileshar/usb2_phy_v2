#include <iostream>

class Hw_driver {
public:
    void printStatus() {
        std::cout << "Hw_driver initialized." << std::endl;
    }
};
// Fixed identified race condition
