#pragma once

#include <iostream>

#include "show.h"

class EntertainmentShow : public Show {
  protected:
    std::optional<std::string> cinematic_universe;

  public:
    EntertainmentShow(const char *name,
                      std::optional<std::string> cinematic_universe,
                      AgeRestriction age_restriction);

    virtual void print_all() override;
};
