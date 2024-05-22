#include "music.h"

class Pop : public Music {
  protected:
    std::string language;

  public:
    Pop(const char *, const char *);
    virtual void print_virtual() override;
};
