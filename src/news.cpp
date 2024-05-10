#include "news.h"

NewsChannel::NewsChannel(const char *name) : TVChannel(name) {
}
AgeRestriction NewsChannel::is_age_restricted() {
    return {};
}

DomesticNewsChannel::DomesticNewsChannel(const char *name) : NewsChannel(name) {
}
AgeRestriction DomesticNewsChannel::is_age_restricted() {
    return {};
}

InternationalNewsChannel::InternationalNewsChannel(const char *name) : NewsChannel(name) {
}
AgeRestriction InternationalNewsChannel::is_age_restricted() {
    return {};
}
