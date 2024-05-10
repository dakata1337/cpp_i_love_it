#pragma once

#include "tvchannel.h"

class NewsChannel : public TVChannel {
  public:
    NewsChannel(const char *name);
    AgeRestriction is_age_restricted() override;
};

class DomesticNewsChannel : public NewsChannel {
  public:
    DomesticNewsChannel(const char *name);
    AgeRestriction is_age_restricted() override;
};

class InternationalNewsChannel : public NewsChannel {
  public:
    InternationalNewsChannel(const char *name);
    AgeRestriction is_age_restricted() override;
};
