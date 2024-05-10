#pragma once

#include "tvchannel.h"

class EducationalChannel : public TVChannel {
  protected:
    AgeRestriction age_restriction;

  public:
    EducationalChannel(const char *name, AgeRestriction age_restriction);
    AgeRestriction is_age_restricted() override;
};
