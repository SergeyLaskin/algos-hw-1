#include "menu_functions.hpp"

#include <iostream>
#include <limits>


const MenuItem* name1(const MenuItem* current) {
    std::cout << "Андрей Иванов сын Рублёв\n";
    return current->parent;
}

const MenuItem* name2(const MenuItem* current) {
    std::cout << "Василий Дмитриевич Поленов\n";
    return current->parent;
}

const MenuItem* name3(const MenuItem* current) {
    std::cout << "Иван Константинович Айвазовский\n";
    return current->parent;
}

const MenuItem* nothing1(const MenuItem* current) {
    std::cout << "Здесь пока ничего нет\n";
    return current->parent;
}

const MenuItem* show_menu(const MenuItem* current) {
    std::cout << "\n=== Меню ===\n";

    for (int i = 1; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << "\n";
    }
    std::cout << current->children[0]->title << "\n";
    std::cout << "Выберите пункт: ";
    int choice = 0;
    if (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Нужно число\n";
        return current;
    }

    if (choice < 0 || choice >= current->children_count) {
        std::cout << "Нет такого пункта\n";
        return current;
    }

    return current->children[choice];
}


const MenuItem* go_back(const MenuItem* current) {
    if (current->parent != nullptr && current->parent->parent != nullptr) {
        return current->parent->parent;
    }
    if (current->parent != nullptr) {
        return current->parent;
    }
    return current;
}

const MenuItem* exit_menu(const MenuItem*) {
    return nullptr;
}