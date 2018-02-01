/* Question 4
** Group 5
** Navjot Aulakh
** Create a program that does the following: Loops from 1 to 10 (NOT 0 - 9),
** Checks if the number is even or odd, Prints the number and the word "even" or "odd"
** based on whether the number is even or odd
** Jan 29, 2018
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    
    //For loop that loops from 1 to 10 and checks if the number is even or odd
    for(i=1; i <= 10; i++){

        if (i % 2 == 1)
            printf("Integer %i is Odd\n", i);
        else 
            printf("Integer %i is Even\n", i);
    }

    printf("\n"); 

    return 0; 
}