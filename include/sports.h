#pragma once

#include "show.h"

class Sports : public Show {
  protected:
    std::string sport_type;

  public:
    Sports(const char *name, const char *sport_type);

    virtual void print_all() override;
};
