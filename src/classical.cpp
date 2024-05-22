#include "classical.h"

Classical::Classical(const char *title, const char *orchestra) : Music(title) {
    this->orchestra = std::string(orchestra);
}

void Classical::print_virtual() {
    Music::print_virtual();
    printf("orchestra=%s\n", orchestra.c_str());
}
