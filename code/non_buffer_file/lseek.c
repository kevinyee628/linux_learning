#include "ourhdr.h"

int main(void)
{	
	int fd;
	if((fd = creat("file.hole", FILE_MODE)) < 0)
		perror("create error");
	if(write(fd, buf1, 10) != 10)
		perror("buf1 write error");
	if(lseek(fd, 40, SEEK_SET) == -1)
		perror("lseek error");
	if(write(fd, buf2, 10) != 10)
		perror("buf2 write error");
	exit(0);
}
