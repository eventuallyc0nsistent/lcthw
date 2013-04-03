#include <stdio.h>

int main (int argc, char *argv[]) {
	
	int areas[] = { 10 , 20 , 30 ,  40} ;
	char name[] = { "Tom"} ;
	char fullname[] = { 'T' , 'o' , 'm' , 'R' , 'i' , 'd' , 'd' , 'l' , 'e' , '\0'} ;

	printf("The size of int : %ld \n", sizeof(int) );
	printf("The size of areas (int []) : %ld \n" , sizeof(areas) );
	printf("The number of ints in areas : %ld \n", sizeof(areas) / sizeof(int)); 

	printf("The size of char : %ld \n", sizeof(char)) ;
	printf("The size of name(char[]) : %ld \n", sizeof(name));
	printf("The number of chars : %ld \n", sizeof(name) / sizeof(char)) ;

	printf("The size of fullname : %ld \n", sizeof(fullname)) ;
	printf("The number of chars : %ld \n", sizeof(fullname)/ sizeof(char));

	printf("name : \" %s \" and fullname : \" %s \" \n", name , fullname) ;

	return 0;

}