#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>


int main(){
	
	int fd,fd2;
	char buffer[20];
	fd=open("newfile.txt",O_RDONLY);
	printf("File Descriptor of newfile.txt is %d \n", fd);
	
	fd2=open("targetfile.txt",O_WRONLY|O_CREAT,7777);
	printf("File Descriptor of targetfile.txt is %d \n", fd2);
	
	write(fd2,buffer,20);
	
	
	

return 0;
}
