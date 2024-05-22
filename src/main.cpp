#include <cstdio>

#include "classical.h"
#include "folk.h"
#include "hardrock.h"
#include "linkedlist.h"
#include "pop.h"
#include "softrock.h"

int main() {
    LinkedList<Music *> music;

    music.push_back(new Music("Pesen"));
    music.push_back(new Classical("Imperial March", "Vienna Philharmonic"));
    music.push_back(new Pop("Mothership", "English"));
    music.push_back(new Folk("Излел е Дельо хайдутин", "Rodopa"));
    music.push_back(new SoftRock("Heart of Gold", "Neil Young", 1972));
    music.push_back(new HardRock("Back in black", "AC/DC", true));

    auto ptr = music.begin();
    while (ptr) {
        ptr->data->print_virtual();
        ptr = ptr->next;
    }
    return 0;
}
