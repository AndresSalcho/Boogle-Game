#include "random.h"

int random::a()
{
    srand(time(NULL));

    for (int i = 0; i <= 24; i++) {
        strrnd[i] = 97 + rand() % (122 - 97);
    }

    return 0;
}