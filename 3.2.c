#include <stdio.h>
#include <stddef.h>
#include <pthread.h>

void *helper(void *arg)
{
    int *num = (int *)arg;
    *num = 2;
    return NULL;
}

int main()
{
    int i = 0;
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, &i);
    pthread_join(thread, NULL); 
    printf("%d\n", i);
    return 0;
}