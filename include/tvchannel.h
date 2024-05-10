#pragma once

#include <optional>
#include <string>

typedef std::optional<int> AgeRestriction;

class TVChannel {
  protected:
    std::string name;

  public:
    TVChannel(const char *name);
    std::string getChannelName();

    virtual std::optional<int> is_age_restricted() = 0;
};

