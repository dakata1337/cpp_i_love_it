#include "hardrock.h"

HardRock::HardRock(const char *title, const char *band, bool is_album_release)
    : Rock(title, band) {
    this->is_album_release = is_album_release;
}

void HardRock::print_virtual() {
    Rock::print_virtual();
    printf("is_album_release=%s\n", is_album_release ? "Yes" : "No");
}
