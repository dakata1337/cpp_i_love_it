#include <iostream>

#include "sports.h"

Sports::Sports(const char *name, const char *sport_type) : Show(name) {
    this->sport_type = std::string(sport_type);
}

void Sports::print_all() {
    Show::print_all();

    std::cout << "  sport type: " << sport_type << std::endl;
}
