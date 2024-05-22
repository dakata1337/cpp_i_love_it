#include <iostream>

#include "education.h"

EducationalShow::EducationalShow(const char *name, int age_restriction,
                                 int episode)
    : Show(name, age_restriction) {
    this->episode = episode;
}

void EducationalShow::print_all() {
    Show::print_all();
    std::cout << "  episode: " << episode << std::endl;
}
