#include "music.h"

Music::Music(const char *title) {
    this->title = std::string(title);
}

void Music::print_virtual() {
    printf("=====[%s]=====\n", title.c_str());
}
