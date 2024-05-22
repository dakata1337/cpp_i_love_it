#include "folk.h"

Folk::Folk(const char *title, const char *region) : Music(title) {
    this->region = std::string(region);
}

void Folk::print_virtual() {
    Music::print_virtual();
    printf("region=%s\n", region.c_str());
}
