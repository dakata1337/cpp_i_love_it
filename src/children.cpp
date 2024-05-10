#include "children.h"

ChildrenChannel::ChildrenChannel(const char *name) : TVChannel(name) {
}
AgeRestriction ChildrenChannel::is_age_restricted() {
    return {};
}
