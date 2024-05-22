#include <iostream>
#include "entertainment.h"

EntertainmentShow::EntertainmentShow(const char *name, std::string studio,
                                     int age_restriction)
    : Show(name, age_restriction) {
    this->studio = studio;
}

void EntertainmentShow::print_all() {
    Show::print_all();

    std::string text;
    if (this->studio.empty())
        text = "unknown";
    std::cout << "  studio: " << text << std::endl;
}
