#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int bugs = 100;
	double bug_rate = 1.34;

	printf("You have %d bugs at the rate of %f . So your total bugs are %f \n", bugs, bug_rate, bugs*bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L ;
	printf("The universe has %ld bugs \n", universe_of_defects);

	char null_byte = '\0';

	int care_percentage = bugs * null_byte ;
	printf("Which means you should care : %d%% \n",care_percentage) ;

	return 0;
}