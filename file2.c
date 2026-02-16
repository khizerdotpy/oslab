#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>


int main(){
	
	int fd;
	char buffer[20];
	fd=open("newfile.txt",O_RDONLY);
	printf("File Descriptor of newfile.txt is %d \n", fd);
	read(fd,buffer,20);
	write(1,buffer,20);
	
	
	

return 0;
}
