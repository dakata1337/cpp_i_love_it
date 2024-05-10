#include "entertainment.h"

EntertainmentChannel::EntertainmentChannel(const char *name,
                                           AgeRestriction age_restriction)
    : TVChannel(name) {
    this->age_restriction = age_restriction;
}

AgeRestriction EntertainmentChannel::is_age_restricted() {
    return this->age_restriction;
}
