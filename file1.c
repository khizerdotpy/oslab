#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main () {
	
	char buff[20];
	
	read(0,buff,7);
	write(0,buff,7);
	
	printf("\nnew line\n");
return 0;
}
