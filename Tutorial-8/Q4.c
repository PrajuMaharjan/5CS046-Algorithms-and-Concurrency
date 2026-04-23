// 4.	Write a multithreaded program using pthreads where a single thread is created from the main function. The thread should print a simple message such as “Hello from the child thread”. Ensure that the main function waits for the thread to complete before terminating the program.

#include <stdio.h>
#include <pthread.h>

void *Hello(void *args){
	printf("Hello from Child!\n");
	return NULL;
}

int main(){
	pthread_t tid;
	pthread_create(&tid,NULL,Hello,NULL);
	pthread_join(tid,NULL);
	
	printf("Thread Complete!");
	printf("\n");
	return 0;
}
