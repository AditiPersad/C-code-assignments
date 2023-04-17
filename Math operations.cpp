
// Aditi Persad - INFO 0104: Assignment 3, part 2

#include <stdio.h>

// Initializing the functions
int addition(int, int,int, int, int );
int subtraction(int, int ,int , int , int );
int division1(int , int ,int , int);
int division2(int , int ,int , int);
int multiplication1(int , int ,int , int);
int multiplication2(int , int ,int , int);



int main (){
	int choice, num1, denom1, num2, denom2, lcm;
	
	//Prompting the user
	// Fraction 1
	printf ("Input values for fraction 1: \nNumerator: ");
	scanf("%d", &num1);
	printf("Denominator: ");
	scanf("%d", &denom1);
	
	// Fraction 2
		printf ("Input values for fraction 2: \nNumerator: ");
	scanf("%d", &num2);
	printf("Denominator: ");
	scanf("%d", &denom2);
	
	// calculating the lcm
	lcm= (denom1 * denom2);
	
	/* NOTE: The values will not be simplified. 
		eg1- if 2/6 is outputted, it will not be simplified to 1/3 as in a calculator.
		eg2- 6/6 will not be simplified to 1 */
	// Printing the options
	printf("\nPlease select the corresponding number to the operation to be performed:\n\t[1] Addition\n\t[2] Subtraction\n\t[3] Division\n\t[4] Multiplication\n\t[5] All\nChoice-");
	scanf("%d", &choice);
	
	//  Case switch for the choices
	switch (choice) {
		case 1:
			printf("\n%d/%d + %d/%d = %d/%d", num1, denom1, num2, denom2, addition(num1, denom1,num2, denom2, lcm ), lcm);
		break;
		
		case 2:
			printf("\n%d/%d - %d/%d = %d/%d", num1, denom1, num2, denom2, subtraction(num1, denom1,num2, denom2, lcm ), lcm);
		break;
		
		case 3:
			printf("\n%d/%d / %d/%d = %d/%d", num1, denom1, num2, denom2, division1(num1, denom1,num2, denom2), division2(num1, denom1,num2, denom2));
		break;
		
		case 4:
			printf("\n%d/%d x %d/%d = %d/%d", num1, denom1, num2, denom2, multiplication1(num1, denom1,num2, denom2), multiplication2(num1, denom1,num2, denom2));
		break;
		
		case 5:
			printf("\n%d/%d + %d/%d = %d/%d", num1, denom1, num2, denom2, addition(num1, denom1,num2, denom2, lcm ), lcm);
			printf("\n%d/%d - %d/%d = %d/%d", num1, denom1, num2, denom2, subtraction(num1, denom1,num2, denom2, lcm ), lcm);
			printf("\n%d/%d / %d/%d = %d/%d", num1, denom1, num2, denom2, division1(num1, denom1,num2, denom2), division2(num1, denom1,num2, denom2));
			printf("\n%d/%d x %d/%d = %d/%d", num1, denom1, num2, denom2, multiplication1(num1, denom1,num2, denom2), multiplication2(num1, denom1,num2, denom2));
		break;
		
		default:
			return 0;
		break;

}
	return 0;
}

// Addition of fractions
int addition(int num1, int denom1,int num2, int denom2, int lcm) {
	
	// Adding the values
	int add= ((lcm/denom1)*num1) + ((lcm/denom2)* num2);
	
	// Outputting the results
	return add;
}

// Subtraction of fractions
int subtraction(int num1, int denom1,int num2, int denom2, int lcm) {
	
	// Subtracting the values
	int sub= ((lcm/denom1)*num1) - ((lcm/denom2)* num2);

	// Outputting the results
	return sub;
}

// Division of fractions- part 1
int division1(int num1, int denom1,int num2, int denom2) {
	
	// Dividing the values via cross multiplication
	int div1= (num1 * denom2);
	
	// Outputting the results
	return div1;
}

// Division of fractions - part 2
int division2(int num1, int denom1,int num2, int denom2) {
	
	// Dividing the values via cross multiplication
	int div2= (num2 * denom1);
	
	// Outputting the results
	return div2;
}

// Multiplication of fractions - Part 1
int multiplication1(int num1, int denom1,int num2, int denom2) {
	
	// Multiplying the values
	int mult= (num1*num2);
	
	// Outputting the results
	return mult;
}
	
// Multiplication of fractions
int multiplication2(int num1, int denom1,int num2, int denom2) {
	
	// Multiplying the values
	int mult1= (denom1* denom2);
	
	// Outputting the results
	return mult1;
}
