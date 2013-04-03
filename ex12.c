#include<stdio.h>

int main (int argc, char *argv[]) {
	
	int i = 0 ;

	if(argc == 1) {
		printf("You have only one argument. Include 2 more ! \n") ;
	} else if (argc>1 && argc <=4) {

			for(i=0;i<argc;i++) {

				printf("This is your arg %d: %s \n", i, argv[i] ) ;
			}
		}
		else {
				printf("There are too many arguments. BITCH ! \n");
		}
	

	return 0;
}
