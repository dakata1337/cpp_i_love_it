#pragma once

#include "education.h"

class HistoryShow : public EducationalShow {
  private:
    std::string topic;

  public:
    HistoryShow(const char *name, int episode, const char *topic);

    virtual void print_all() override;
};
