#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    printf("There are %d arguments\n");

    char* myarray = malloc(3);
    *myarray = 'A';
    *(myarray+1) = 'B';
    *(myarray+2) = 'C';

    for (int i=0; i < 3; i++) {
        printf("%d\n", myarray[i]);
    }
    for (int i=0; i < 3; i++) {
        printf("%c\n", myarray[i]);
    }


    printf("hello canada %c\n", myarray[2]);
    return 0;
}

