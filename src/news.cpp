#include <iostream>

#include "news.h"

News::News(const char *name, const char *country) : Show(name) {
    this->country = std::string(country);
}

void News::print_all() {
    Show::print_all();

    std::cout << "  country: " << country << std::endl;
}
