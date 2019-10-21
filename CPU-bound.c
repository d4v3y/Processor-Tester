#include <stdio.h>
#include <time.h>

int main() {

    int totalT;
    long increment = 0;
    time_t secs = 300;
    time_t startT = time(NULL);

    printf("The fuction has started.\n");

    while ((totalT = time(NULL) - startT) < secs){
        increment++;
    }

    printf("The function has stopped.\n");

    return 0;
}
