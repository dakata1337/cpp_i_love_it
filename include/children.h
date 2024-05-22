#pragma once

#include "show.h"

class ChildrensShow : public Show {
  protected:
    int some_data;

  public:
    ChildrensShow(const char *name, int some_data);

    virtual void print_all() override;
};

