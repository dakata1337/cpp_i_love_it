#pragma once

#include <string>

class Music {
  protected:
    std::string title;

  public:
    Music(const char *);
    virtual void print_virtual();
};
