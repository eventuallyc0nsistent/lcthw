#include <stdio.h>

int main (int argc, char *argv[]) {
	
	int i = 0;

	for (i = 1; i < argc ; i++) {

		printf("%d is %s \n", i , argv[i]) ; 

	}

		// create array of states
		char *states[] = {

			"New York",
			"Philadelphia",
			"California",
			"Arizona"

		} ;

		int num_states = 4 ;

		for ( i = 0 ; i < num_states ; i++ ) {

			printf("State %d : %s \n", i , states[i]) ;

		}

		return 0;

	}