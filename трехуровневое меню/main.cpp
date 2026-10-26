#include "menu_items.hpp"

#include <iostream>

int main() {
    const MenuItem* current = &MAIN;

    while (current != nullptr) {
        current = current->func(current);
    }

    std::cout << "Пока!\n";
    return 0;
}