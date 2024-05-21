#include "show.h"

#include <iostream>

Show::Show(const char *name, AgeRestriction age_restriction) {
    this->name = std::string(name);
    this->age_restriction = age_restriction;
}

AgeRestriction Show::has_age_restriction() {
    return this->age_restriction;
}

void Show::print_all() {
    std::cout << "\x1b[1;4m" << name << "\x1b[0m" << std::endl;
    std::cout << "  age restriction: " << pretty_optional(has_age_restriction())
              << std::endl;
}
