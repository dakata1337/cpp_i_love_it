#pragma once

#include "education.h"

class ScienceShow : public EducationalShow {
  private:
    std::string science_branch;

  public:
    ScienceShow(const char *name, int episode, const char *science_branch);

    virtual void print_all() override;
};
