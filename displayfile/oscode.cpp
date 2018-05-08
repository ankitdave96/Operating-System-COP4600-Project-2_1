#include "oscode.h"
#include <string.h>
#include <stdio.h>
#include <dirent.h>
//#include "read_file.h"

#include <unistd.h>

#define _POSIX_SOURCE

#include <iostream>
#include <fcntl.h>







#undef _POSIX_SOURCE




using namespace std;


//JNIEXPORT jstring JNICALL Java_oscode_readfile
JNIEXPORT jstring JNICALL Java_com_example_ankitdave_ostextfilereader_MainActivity_readfile
   (JNIEnv *env, jobject obj, jstring string) {




     const char *str = env->GetStringUTFChars(string, 0);
     char filename[128];
     strcpy(filename, str);
     env->ReleaseStringUTFChars(string, str);




     int fd=0;
     int ret=0;
     int count=0;

     char buf[2];

     //printf("The read code will now begin executing ...... \n\n\n\n\n\n");




     if ((fd = open(filename, O_RDONLY)) < 0)
     {
       //perror("open() error");
         char errstr []= "File not found/This app does not have permission to access the file";
         //char cwd[1024];
         //errstr="No file";
         //getcwd(cwd, sizeof(cwd));

//         DIR *d;
//         struct dirent *dir;
//         d = opendir("/dev");
//         if (d) {
//             while ((dir = readdir(d)) != NULL) {
//                 //printf("%s\n", dir->d_name);
//                 strcpy(cwd,dir->d_name);
//                 //strcpy(cwd,dir->d_name);
//             }
//             closedir(d);
//         }
         return env->NewStringUTF(strdup(errstr));
       _exit(0);
     }

     while((read(fd, buf, sizeof(buf)-1))>0)
     {

       count++;


     }

     char actstr[count+1];

     //printf("\n%d\n",count);

       close(fd);

       if ((fd = open(filename, O_RDONLY)) < 0)
       {
         //perror("open() error");
         _exit(0);
       }

       read(fd, actstr, sizeof(actstr)-1);


       //printf("%s",actstr);






         close(fd);






         //const char *str = env->GetStringUTFChars(string, 0);


         return env->NewStringUTF(strdup(actstr));








 }

int main(){


  return 0;
}
