#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

struct Person {
	char *name ;
	int age ;
	int height ;
	int weight ;
} ;

struct Person *Person_create(char *name,int age,int height, int weight) {

	struct Person *who = malloc(sizeof(struct Person)) ;
	assert(who!= NULL ) ;

	who->name   = strdup(name) ;
	who->age    = age ;
	who->height	= height ;
	who->weight = weight ;

	return who;

} 

void Person_destroy(struct Person *who) {

	assert(who!= NULL) ;
	free(who->name); //memory needs to be free . First free name cause of strdup
	free(who);		// Now free struct completely from malloc

}

void Person_print(struct Person *who) {

	printf(" Name  	: %s \n", who->name) ;
	printf(" Age 	: %d \n", who->age) ;
	printf(" Height	: %d \n", who->height)  ;
	printf(" Weight	: %d \n \n", who->weight)	;
}


int main (int argc, char *argv[]) {
	
	//create new struct
	struct Person *joe = Person_create ( "Joe",	32 , 50 , 100 ) ;
	struct Person *frank = Person_create("Frank", 20 , 55, 120) ;

	printf("The memory location of Joe : %p \n" , joe) ;
	Person_print(joe) ;

	printf("The memory location of Frank : %p \n" , frank) ;
	Person_print(frank) ;


	Person_destroy(joe) ; 
	Person_destroy(frank) ;

	return 0;
}
