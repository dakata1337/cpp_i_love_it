#include "children.h"
#include "education.h"
#include "entertainment.h"
#include "news.h"
#include "show.h"
#include "sports.h"

int main() {
    std::vector<Show *> shows;
    shows.push_back(
        new EntertainmentShow("Deadpool", "Marvel", std::make_optional(18)));

    shows.push_back(new News("bTV", "information about the show"));

    // clang-format off
    shows.push_back(new ESports("CS2 Major", {
           ESportsTeam("USA", {"Joe", "Biden", "OBAMNA", "SOOODAAA", "OrangeMan"}),
           ESportsTeam("Russia", {"Putler", "Gorbachov", "Stallin", "Lennin", "Worker #453"}),
        }, 
        std::make_optional(18)
    ));
    // clang-format on

    shows.push_back(new RacingSports("F1", {"Biden", "Trump"}));

    shows.push_back(new ChildrensShow("NameHere", 666));

    shows.push_back(new EducationalShow("The Education Channel", {}, 333));

    for (auto &x : shows) {
        x->print_all();
    }
    return 0;
}
