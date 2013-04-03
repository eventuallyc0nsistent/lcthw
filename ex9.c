#include<stdio.h>

int main (int argc, char *argv[]) {
	
	int numbers[4] = {0} ;
	char name[4] = {'a'} ;

	// Printing numbers 
	printf("These are all the numbers : %d , %d , %d , %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);


	//Printing name array 
	printf ("These are the names : %c, %c, %c, %c \n", name[0], name[1], name[2], name[3]) ;

	//Enter numbers 
	numbers[0] = 1 ;
	numbers[1] = 2 ;
	numbers[2] = 3 ;
	numbers[3] = 4 ;

	//Enter name
	name[0] = 'a' ;
	name[1] = 'b' ;
	name[2] = 'c' ;
	name[3] = '\0' ;

	printf("These are all the numbers : %d , %d , %d , %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf ("These are the names : %c, %c, %c, %c \n", name[0], name[1], name[2], name[3]) ;

	//Another way of adding array
	char *another_name =  "Kiran Koduru";

	printf ("These are the names : %c, %c, %c, %c \n", another_name[0], another_name[1], another_name[2], another_name[3]) ;

	return 0;


}