#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
void main(){

	DIR *d;
	struct dirent *dir;
	d=opendir(".");
	while(dir=readdir(d)){
		printf("%s\n",dir->d_name);
	}

}
