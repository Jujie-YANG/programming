#include <pthread.h>
pthread_mutex_t count_mutex;
int count;
void increment_count()
{
    pthread_mutex_lock(&count_mutex);
    count = count + 1;
    pthread_mutex_unlock(&count_mutex);
}
