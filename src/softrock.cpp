#include "softrock.h"

SoftRock::SoftRock(const char *title, const char *band, int year)
    : Rock(title, band) {
    this->year = year;
}

void SoftRock::print_virtual() {
    Rock::print_virtual();
    printf("year=%d\n", year);
}
