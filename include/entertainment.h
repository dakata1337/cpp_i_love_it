#pragma once
#include "show.h"

class EntertainmentShow : public Show {
  protected:
    std::string studio;

  public:
    EntertainmentShow(const char *name, std::string studio, int age_restriction);

    virtual void print_all() override;
};
