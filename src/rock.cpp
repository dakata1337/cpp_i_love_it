#include "rock.h"

Rock::Rock(const char *title, const char *band) : Music(title) {
    this->band = std::string(band);
}

void Rock::print_virtual() {
    Music::print_virtual();
    printf("band=%s\n", band.c_str());
}
