#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int age = 10;
	float power = 10.03f ;
	double super_power = 1234.234234234 ;
	char initials = 'R' ;
	char firstname[] = "Kiran" ;
	char lastname[] = "Koduru" ;

	printf ("I am %d years old \n", age);
	printf ("I have %f levels of power\n", power);
	printf ("I am also %f levels super powerful\n", super_power);

	printf ("My full name is %s %c %s \n", firstname, initials, lastname);

	return 0;


}