#include <stdio.h>
#include <time.h>

int main() {

    int totalT;
    long increment = 0;
    time_t secs = 60;
    time_t startT = time(NULL);

    printf("The fuction has started.\n");

    while ((totalT = time(NULL) - startT) < secs){
        increment++;
    }

    printf("The function has stopped.\n");
    // printf("The function took %d seconds and ", totalT);
    // printf("iterated %ld times.\n", increment);

    return 0;
}