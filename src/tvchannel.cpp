#include "tvchannel.h"

TVChannel::TVChannel(const char *name) {
    this->name = std::string(name);
}
std::string TVChannel::getChannelName() {
    return name;
}
