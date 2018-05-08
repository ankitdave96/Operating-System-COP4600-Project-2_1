#define _POSIX_SOURCE

#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "read_file.h"

#undef _POSIX_SOURCE


using namespace std;




int main()
{


char filename[20];
printf("\nEnter file name\n");
scanf("%s",&filename);



printf("%s\n", read_file(filename));


return 0;








}
