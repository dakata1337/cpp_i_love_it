#include "education_history.h"
#include <iostream>

HistoryShow::HistoryShow(const char *name, int episode, const char *topic)
    : EducationalShow(name, 0, episode) {
    this->topic = std::string(topic);
}

void HistoryShow::print_all() {
    EducationalShow::print_all();

    std::cout << "  topic: " << topic << std::endl;
}
