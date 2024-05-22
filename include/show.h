#pragma once

#include <string>

class Show {
  protected:
    std::string name;
    int age_restriction;

  public:
    Show(const char *name, int age_restriction = 0);
    int get_age_restriction();
    virtual void print_all();
};
