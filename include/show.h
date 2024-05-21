#pragma once

#include <optional>
#include <string>

typedef std::optional<int> AgeRestriction;

template <typename T> std::string pretty_optional(std::optional<T> opt) {
    if (opt.has_value()) {
        auto val = std::to_string(opt.value());
        return "Some(" + val + ")";
    }
    return "None";
}

class Show {
  protected:
    std::string name;
    AgeRestriction age_restriction;

  public:
    Show(const char *name, AgeRestriction age_restriction = {});
    AgeRestriction has_age_restriction();
    virtual void print_all();
};
