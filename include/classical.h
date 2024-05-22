#pragma once

#include "music.h"

class Classical : public Music {
  protected:
    std::string orchestra;

  public:
    Classical(const char *, const char *);
    virtual void print_virtual() override;
};
