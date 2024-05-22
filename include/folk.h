#pragma once

#include "music.h"

class Folk : public Music {
  protected:
    std::string region;

  public:
    Folk(const char *, const char *);
    virtual void print_virtual() override;
};
