#include <iostream>

#include "children.h"

ChildrensShow::ChildrensShow(const char *name, int some_data) : Show(name) {
    this->some_data = some_data;
}

void ChildrensShow::print_all() {
    Show::print_all();

    std::cout << "  some_data: " << some_data << std::endl;
}
