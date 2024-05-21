#include <iostream>

#include "education.h"

EducationalShow::EducationalShow(const char *name,
                                 AgeRestriction age_restriction,
                                 int internal_value)
    : Show(name, age_restriction) {
    this->internal_value = internal_value;
}

void EducationalShow::print_all() {
    Show::print_all();

    std::cout << "  internal value: " << internal_value << std::endl;
}
