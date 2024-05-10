#include <iostream>
#include <vector>

#include "children.h"
#include "educational.h"
#include "entertainment.h"
#include "news.h"
#include "sports.h"

template <typename T> std::string pretty_optional(std::optional<T> opt) {
    if (opt.has_value()) {
        auto val = std::to_string(opt.value());
        return "Some(\x1b[32m" + val + "\x1b[0m)";
    }
    return "None";
}

int main() {
    std::vector<TVChannel *> channels;
    channels.push_back(new EntertainmentChannel("Generic Comedy Channel",
                                                std::make_optional(18)));
    channels.push_back(new ChildrenChannel("CN"));
    channels.push_back(new SportsChannel("Generic Sports Channel"));
    channels.push_back(new DomesticNewsChannel("bTV"));
    channels.push_back(new InternationalNewsChannel("CNN"));
    channels.push_back(new InternationalNewsChannel("RT"));
    channels.push_back(
        new EducationalChannel("National Geographic", std::make_optional(12)));

    for (auto &ch : channels) {
        printf("\x1b[1;4m%s\x1b[0m:\n", ch->getChannelName().c_str());

        std::cout << "  age restriction: "
                  << pretty_optional(ch->is_age_restricted()) << std::endl;
    }

    return 0;
}
