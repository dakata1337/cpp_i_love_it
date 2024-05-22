#pragma once

#include "show.h"

class News : public Show {
  protected:
    std::string country;

  public:
    News(const char *name, const char *country);

    virtual void print_all() override;
};
