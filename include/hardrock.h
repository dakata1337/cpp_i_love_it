#pragma once

#include "rock.h"

class HardRock : public Rock {
  protected:
    bool is_album_release;

  public:
    HardRock(const char *, const char *, bool);
    virtual void print_virtual() override;
};
