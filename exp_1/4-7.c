#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	fddes = open(des,flags,0644);
	if(fddes<0)
	{
		exit(1);
	}
	while()
	{
		z=write(fddes,buf,nbytes);
		if(z<0)
		{
			perror("write file error");
		}
	}
	close(fdsrc);
	close(fdsrc);



}
