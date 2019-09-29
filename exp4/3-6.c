#include <fcntl.h>
#include <stdio.h>
int main(void)
{
  int fd;
  char *buf = "hello,eelb!!";
  char buf_read[6];
  if ((fd=open("append_txt", O_RDWR | O_APPEND | O_TRUNC)) < 0) {
        perror("open");
    	exit(0);
   }
   else {
   if (write(fd, buf, strlen(buf)) != strlen(buf)) {
   		perror("write first");
   		exit(0);
   }
   if (lseek(fd, 0, SEEK_SET) == -1) {
   		perror("lseek error");
  		exit(0);
   }
   if (read(fd, buf_read, (sizeof(buf_read)-1)) != (sizeof(buf_read)-1)) {
   		perror("read error");
   		exit(0);
   }
   buf_read[5] = '\0';
   printf("%s\n", buf_read);
   if (write(fd, buf, strlen(buf)) != strlen(buf)) {
   		perror("write second");
   		exit(0);
   }
   exit(0);
   }
}
