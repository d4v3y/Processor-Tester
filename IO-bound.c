#include <stdio.h>
#include <time.h>

int main() {

    int i;
    int totalT;
    FILE *fptr;
    char str[] = "I am writing to the file!\n";

    fptr = fopen("randomText.txt", "w");
    
    time_t secs = 300;
    time_t startT = time(NULL);

    printf("The function has started.\n");

    while ((totalT = time(NULL) - startT) < secs) {
        for (i = 0; str[i] != '\0'; i++) {
            fputc(str[i], fptr);
        }
    }

    printf("The function has stopped.\n");

    fclose(fptr);

    return 0;
}