#pragma once

#include "rock.h"

class SoftRock : public Rock {
  protected:
    int year;

  public:
    SoftRock(const char *, const char *, int);
    virtual void print_virtual() override;
};
