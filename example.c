#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void *myThreadFunc()
{
	sleep(1);
	printf("without thread...");
	return NULL;
}
int main(){
	clock_t t1=clock();
	myThreadFunc();
	printf("the time taken is...%g",t1);
	exit(0);
}