#include<stdio.h>
#include<unistd.h>
void main(){

	pid_t pid;
	pid=fork();
	int test=5;
	if(pid==0){
		test=test+1;
		printf("Value of test is %d\n",test);
		printf("I am Child process man!!\n");
		printf("PID of the child process is %d\n",getpid());
	}else{
		test=test+7;
		printf("Value of test is %d\n",test);
		printf("I am Parent Process dude!!\n");
		printf("PID of the parent process is %d\n",getpid());
	}

}
