/* Question 5
** Group 5
** Navjot Aulakh
** Create a program that does the following: 
** Has a function called euclid_dist that takes two sets of vectors containing
** x and y that are integers and returns a double. euclid_dist(x1, y1, x2, y2)
** The function computes the euclidean distance between the two vectors containing 
** x and y coordinates, you will need to lookup the documentation in math.h 
** to calculate the euclidean distance. The function returns the result of the 
** calculation. The program then has a loop which does the following
** Loops 10 times. Each time generates a random number between 0 and 100 for
** each x and y variable for the two vectors. Calls the euclid_dist function and 
** gets the results. Prints the two vectors and the euclidean distance to the console
** Jan 29, 2018
*/
#include <stdio.h>
#include <math.h>

struct VectorSet {
	int x;
	int y;
};

float euclid_dist(struct VectorSet vec1, struct VectorSet vec2) {
	return sqrt(((vec1.x - vec2.x)*(vec1.x - vec2.x)) + ((vec1.y - vec2.y)*(vec1.y - vec2.y)));
}

int main(void) {
	struct VectorSet vec1;
	struct VectorSet vec2;
	double euclidDistance;
	vec1.x = 0; 
    vec1.y = 0;
	vec2.x = 0;
    vec2.y = 0;

	printf("Enter the first vector in the following format 'x, y'\n");
	scanf("%i, %i", &vec1.x, &vec1.y);
	printf("Enter the second vector in the following format 'x, y'\n");
	scanf("%i, %i", &vec2.x, &vec2.y);

	euclidDistance = euclid_dist(vec1, vec2);
	printf("The euclidean distance between the vector sets (%d, %d) and (%d, %d) is %f.\n",
    vec1.x, vec1.y, vec2.x, vec2.y, euclidDistance);
}
