#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

void die(const char *message) {
	
	if(errno) {
		perror(message) ;
	} else {
		print("Error %s \n", message);
	}
	exit(1) ;
}

int main (int argc, char *argv[]) {
	

	return 0;
}
