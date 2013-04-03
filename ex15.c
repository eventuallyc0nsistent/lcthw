// Using pointers

#include<stdio.h>

int main (int argc, char *argv[]) {
	
	// create arrays
	int age[] = {10,11,20,39,49};
	char *names[] = {"Ram","Sam","Pan","Kieth"} ;

	// get size of arrays
	int count = sizeof(age) / sizeof(int);
	int i = 0 ;

	for (i=0; i < count; i ++) {

		printf("%s is %d years old. \n", names[i], age[i]) ;

	}

	int *curr_age = age ;
	char **curr_name = names ;

	//using *(*pointers + i )
	for (i=0; i < count ; i++) {
		printf("%s is %d years old again. \n", *(curr_name+i) , *(curr_age+i) ) ;
	}


	//using pointers the normal way 
	for (i=0; i< count ; i ++) {
		printf("%s is %d years old now. \n" ,  curr_name[i], curr_age[i]) ;
	}

	return 0;
}
 