#define _POSIX_SOURCE

#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "read_file.h"
#include <stdlib.h>

#undef _POSIX_SOURCE


using namespace std;


char *actstr;

char *read_file(const char *filename){


  int fd=0;
  int ret=0;
  int count=0;

  char buf[2];

  //printf("The read code will now begin executing ...... \n\n\n\n\n\n");




  if ((fd = open(filename, O_RDONLY)) < 0)
  {
    perror("open() error");
  }

  while((read(fd, buf, sizeof(buf)-1))>0)
  {

    count++;


  }

actstr=(char*)malloc(sizeof(char)*count+2);

  printf("\n\n");

    close(fd);

    if ((fd = open(filename, O_RDONLY)) < 0)
    {
      perror("open() error");
    }

    read(fd, actstr, (sizeof(char)*count));


    //printf("%s",actstr);






      close(fd);

      return actstr;






}
