#pragma once

#include "music.h"

class Rock : public Music {
  protected:
    std::string band;

  public:
    Rock(const char *, const char *);

    virtual void print_virtual() override;
};
