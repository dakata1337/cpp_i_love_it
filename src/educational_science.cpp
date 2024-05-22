#include "education_science.h"
#include <iostream>

ScienceShow::ScienceShow(const char *name, int episode, const char *science_branch)
    : EducationalShow(name, 0, episode) {
    this->science_branch = std::string(science_branch);
}

void ScienceShow::print_all() {
    EducationalShow::print_all();

    std::cout << "  science branch: " << science_branch << std::endl;
}
