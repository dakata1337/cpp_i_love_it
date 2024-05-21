#pragma once

#include <vector>

#include "show.h"

class Sports : public Show {
    std::string sport_type;

  public:
    Sports(const char *name, const char *sport_type);

    virtual void print_all() override;
};

// ================================================== //
class ESportsTeam {
  public:
    std::string name;
    std::vector<std::string> members;

    ESportsTeam(const char *name, std::vector<std::string> members) {
        this->name = std::string(name);
        this->members = members;
    }
};

class ESports : public Sports {
  protected:
    std::vector<ESportsTeam> teams;

  public:
    ESports(const char *name, std::vector<ESportsTeam> teams,
            AgeRestriction age_restriction = {});

    virtual void print_all() override;
};

// ================================================== //
class RacingSports : public Sports {
  protected:
    std::vector<std::string> contestants;

  public:
    RacingSports(const char *name, std::vector<std::string> contestants);

    virtual void print_all() override;
};
