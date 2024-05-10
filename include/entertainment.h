#pragma once

#include "tvchannel.h"

class EntertainmentChannel : public TVChannel {
  protected:
    AgeRestriction age_restriction;

  public:
    EntertainmentChannel(const char *name, AgeRestriction age_restriction);

    AgeRestriction is_age_restricted() override;
};

