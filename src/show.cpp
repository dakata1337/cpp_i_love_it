#include "show.h"

#include <iostream>

Show::Show(const char *name, int age_restriction) {
    this->name = std::string(name);
    this->age_restriction = age_restriction;
}

int Show::get_age_restriction() {
    return this->age_restriction;
}

void Show::print_all() {
    std::cout << name << std::endl;
    if (age_restriction != 0) {
        std::cout << "  age restriction: " << age_restriction << std::endl;
    }
}
