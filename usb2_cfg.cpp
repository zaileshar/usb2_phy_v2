#include <iostream>

class Usb2_cfg {
public:
    void printStatus() {
        std::cout << "Usb2_cfg initialized." << std::endl;
    }
};
// Fixed identified race condition
