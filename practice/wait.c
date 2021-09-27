#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
void main(){

	pid_t pid;
	pid=fork();
	int status;
	if(pid==0){
		sleep(10);
		printf("This is Child Process\n");
		exit(7);
	}else{
		printf("This is Parent Process\n");
		wait(&status);
		printf("The Exit code is %d\n",WEXITSTATUS(status));
	}

}
