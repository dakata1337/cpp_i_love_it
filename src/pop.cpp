#include "pop.h"

Pop::Pop(const char *title, const char *language) : Music(title) {
    this->language = std::string(language);
}

void Pop::print_virtual() {
    Music::print_virtual();
    printf("language=%s\n", language.c_str());
}
