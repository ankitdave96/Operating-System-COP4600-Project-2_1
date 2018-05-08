#define _POSIX_SOURCE

#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#undef _POSIX_SOURCE


using namespace std;

int main()
{
  int fd=0;
  int ret=0;
  int count=0;

  char buf[2];

  printf("The read code will now begin executing ...... \n\n\n\n\n\n");




  if ((fd = open("textfile.txt", O_RDONLY)) < 0)
  {
    perror("open() error");
    exit(0);
  }

  while((read(fd, buf, sizeof(buf)-1))>0)
  {

    count++;


  }

  char actstr[count];

  printf("\n%d\n",count);

    close(fd);

    if ((fd = open("textfile.txt", O_RDONLY)) < 0)
    {
      perror("open() error");
      exit(0);
    }

    read(fd, actstr, sizeof(actstr)-1);


    printf("%s",actstr);




    

      close(fd);



return 0;
}
