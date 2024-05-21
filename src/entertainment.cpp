#include "entertainment.h"

EntertainmentShow::EntertainmentShow(
    const char *name, std::optional<std::string> cinematic_universe,
    AgeRestriction age_restriction)
    : Show(name, age_restriction) {
    this->cinematic_universe = cinematic_universe;
}

void EntertainmentShow::print_all() {
    Show::print_all();

    std::cout << "  cinematic universe: ";
    std::cout << cinematic_universe.value_or("Real World") << std::endl;
}
