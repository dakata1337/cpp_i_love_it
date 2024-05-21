#pragma once

#include "show.h"

class News : public Show {
  private:
    std::string other_field;

  public:
    News(const char *name, const char *other_field);

    virtual void print_all() override;
};
