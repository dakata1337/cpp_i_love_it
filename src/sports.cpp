#include <iostream>

#include "sports.h"

Sports::Sports(const char *name, const char *sport_type) : Show(name) {
    this->sport_type = std::string(sport_type);
}

void Sports::print_all() {
    Show::print_all();

    std::cout << "  sport type: " << sport_type << std::endl;
}

ESports::ESports(const char *name, std::vector<ESportsTeam> teams,
                 AgeRestriction age_restriction)
    : Sports(name, "eSports") {
    this->age_restriction = age_restriction;
    this->teams = teams;
}

void ESports::print_all() {
    Sports::print_all();

    std::cout << "  teams: " << std::endl;
    for (auto &team : teams) {
        std::cout << "    - " << team.name << " (";

        for (size_t i = 0; i < team.members.size(); i++) {
            std::cout << team.members[i];
            if (i + 1 < team.members.size())
                std::cout << ", ";
        }
        std::cout << ")" << std::endl;
    }
}

RacingSports::RacingSports(const char *name,
                           std::vector<std::string> contestants)
    : Sports(name, "Racing") {
    this->contestants = contestants;
}

void RacingSports::print_all() {
    Sports::print_all();

    std::cout << "  contestants: " << std::endl;
    for (auto &p : contestants) {
        std::cout << "    - " << p << std::endl;
    }
}
