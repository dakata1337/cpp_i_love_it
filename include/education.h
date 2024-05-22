#pragma once

#include "show.h"

class EducationalShow : public Show {
  protected:
    int episode;

  public:
    EducationalShow(const char *name, int age_restriction, int episode);

    virtual void print_all() override;
};
