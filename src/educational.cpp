#include "educational.h"

EducationalChannel::EducationalChannel(const char *name,
                                       AgeRestriction age_restriction)
    : TVChannel(name) {
    this->age_restriction = age_restriction;
}
AgeRestriction EducationalChannel::is_age_restricted() {
    return this->age_restriction;
}
