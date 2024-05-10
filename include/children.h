#pragma once

#include "tvchannel.h"

class ChildrenChannel : public TVChannel {
  public:
    ChildrenChannel(const char *name);
    AgeRestriction is_age_restricted() override;
};

