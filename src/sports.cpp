#include "sports.h"

SportsChannel::SportsChannel(const char *name) : TVChannel(name) {
}
AgeRestriction SportsChannel::is_age_restricted() {
    return {};
}
