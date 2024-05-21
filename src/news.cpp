#include <iostream>

#include "news.h"

News::News(const char *name, const char *other_field) : Show(name) {
    this->other_field = std::string(other_field);
}

void News::print_all() {
    Show::print_all();

    std::cout << "  other_field: " << other_field << std::endl;
}
