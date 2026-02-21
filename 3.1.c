#include <stdio.h>
#include <stddef.h>
#include <pthread.h>

void *helper(void *arg)
{
    printf("HELPER\n");
    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, NULL);
    pthread_join(thread, NULL); // added this to ensure helper is printed one time before main exits
    printf("MAIN\n");
    return 0;
}