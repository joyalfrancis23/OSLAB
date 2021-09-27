#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>

int main(){

    int fd;
    char rbuff[22];
    char wbuff[22]=" Hai Hello World";
    fd=open("newfile.txt",O_RDWR);
    if(fd!=-1){
        printf("newfile.txt opened for read/write access\n");
        write(fd,wbuff,strlen(wbuff));
        lseek(fd,01,0);
        if(read(fd,rbuff,strlen(wbuff))==strlen(wbuff)){
            printf("%s was written to newfile.txt\n",rbuff);
        }else{
            printf("***Error reading newfile.txt***");
            close(fd);
        }
    }else{
        printf("***newfile.txt already exits***\n");
    }


}