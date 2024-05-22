#include "children.h"
#include "education.h"
#include "education_history.h"
#include "education_science.h"
#include "entertainment.h"
#include "linkedlist.h"
#include "news.h"
#include "show.h"
#include "sports.h"

int main() {
    LinkedList<Show *> shows;
    shows.push_back(new News("StaraTV", "Bulgaria"));
    shows.push_back(new ChildrensShow("NameHere", 666));
    shows.push_back(new Sports("World Cup", "Football"));
    shows.push_back(new EducationalShow("The Education Channel", {}, 333));
    shows.push_back(new HistoryShow("Disecting WW2", 3, "WW2"));
    shows.push_back(new ScienceShow("Myth Busters", 52, "Physics"));
    shows.push_back(new EntertainmentShow("Gru & Minions", "Warner Brothers", 12));

    int i = 1;
    for (auto x = shows.begin(); x; x = x->get_next()) {
        printf("%d. ", i++);
        x->get_data()->print_all();
        printf("\n");
    }
    return 0;
}
