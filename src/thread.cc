#include <pthread.h>
#include <iostream>
#include <mutex>

#define THREAD_NUMS 5
pthread_mutex_t mutex_;

void* run(void* arg) {
  pthread_mutex_lock(&mutex_);
  pthread_t tid = pthread_self();
  std::cout<<"thread id is : "<<tid<<std::endl;
  pthread_mutex_unlock(&mutex_);
}

int main(int argc, char const *argv[])
{
  pthread_mutex_init(&mutex_, NULL);
  pthread_t threads[THREAD_NUMS];
  for (int i=0;i<THREAD_NUMS;++i) {
    int ret = pthread_create(&threads[i],NULL,&run,NULL);
    if (ret!=0) {
      std::cout<<"create pthread failed..."<<std::endl;
      return -1;
    }
  }
  for (int i=0;i<THREAD_NUMS;++i) {
  	pthread_join(threads[i],NULL);
  }
  pthread_mutex_destroy(&mutex_);
  return 0;
}
