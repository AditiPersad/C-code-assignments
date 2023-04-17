
// Aditi Persad - INFO 0104 Assignment 2, part 1

#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b, c, m;
	float ans0, ans1, ans2, working, bsq, sqroot;
	
	// looping the program

	do {
	
		
	// prompting the user to input values 
	printf("\nPlease input values for the following:\n");
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	printf("c:");
	scanf("%d", &c);
	
	// solving the equation 
	
	
	// The coefficient must not be 0
	if (a == 0){
		printf("Error. A cannot be equal to 0\n");
		return 0;
	}
	
	// Equation part 1: calculating b squared
	bsq= (b*b);
	
	
	// Equation part 2
	working=(bsq - 4*(a*c));

	// if the working is equal to zero
	if (working == 0) {
		ans0=((-b)/(2*a));
		printf("The answer is %.2f\n", ans0);
	}
	
	// The working must be positive for a solution to be found.
	else if(working > 0){
		sqroot=(sqrt(working));
		printf("sqrt (%.2f)\n\n", working);
		ans1= ((-b + sqroot)/(2*a));
		ans2= ((-b - sqroot)/(2*a));
		printf("(-%d + %.2f/(2*%d)\n Answer 1 = %.2f\n\n", b, sqroot, a, ans1);
		printf("(-%d - %.2f/(2*%d)\n Answer 2 = %.2f\n\n", b, sqroot, a, ans2);
		
	} 
	else {
		printf("\nNo solution available\n\n");
	}
	
	// looping question
	printf("Would you like to do another equation? \n Enter '1' for yes or '2' for no \n");
	scanf("%d", &m);
	
	// Not continuing loop
	if (m == 2) {
		return 0;
	} 
	
	// Invalid choice entered
	else if ((m != 1) && (m != 2)) {
		printf ("Invalid number entered.");
		return main();
	}
	
}  while (m == 1 );

	return 0;
}



	
	
