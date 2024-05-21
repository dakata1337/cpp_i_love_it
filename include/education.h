#pragma once

#include "show.h"

class EducationalShow : public Show {
  private:
    int internal_value;

  public:
    EducationalShow(const char *name, AgeRestriction age_restriction,
                    int internal_value);

    virtual void print_all() override;
};
