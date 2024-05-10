#pragma once

#include "tvchannel.h"

class SportsChannel : public TVChannel {
  public:
    SportsChannel(const char *name);
    AgeRestriction is_age_restricted() override;
};
