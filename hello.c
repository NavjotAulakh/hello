#include <stdio.h>
#include <stdlib.h>
 char* my_function() {
     char* myarray[3];
     
     myarray[0] = 'A';
     myarray[1] = 'B';
     myarray[2] = 'C';
     return myarray;
 }


int main(int argc, char **argv) {
    printf("There are %d arguments\n");

    char* myarray = my_function;

    for (int i=0; i < 3; i++) {
        printf("%d\n", myarray[i]);
    }
    for (int i=0; i < 3; i++) {
        printf("%c\n", myarray[i]);
    }


    printf("hello canada %c\n", myarray[2]);
    return 0;
}

