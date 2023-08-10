#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
void *myThreadFunc()
{
	sleep(1);
	printf("thread...");
	return NULL;
}
int main(){
	pthread_t thread_id;
	printf("Before Thread \n");
	clock_t t1=clock();
	pthread_create(&thread_id,NULL,myThreadFunc,NULL);
	pthread_join(thread_id,NULL);
	printf("After Thread \n ");
	printf("the time taken is...%g",t1);
	exit(0);
}