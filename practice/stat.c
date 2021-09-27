#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
void main(){

	struct stat buff;
	stat("./fork.c",&buff);
	printf("%ld",buff.st_size);

}
