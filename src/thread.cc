#include <pthread.h>
#include <iostream>
#include <mutex>

#define THREAD_NUMS 2
pthread_mutex_t mutex_;
int a1 = 0;
int a2 = 0;

void* run(void* arg) {
  pthread_t tid = pthread_self();
  while (a1 < 10) {
    a1++;
    std::cout<<"thread id = "<<tid<<", this is run_1, a1 = "<<a1<<std::endl;
  }
}

void* run_2(void* arg) {
  pthread_t tid = pthread_self();
  while (a2 < 10) {
    a2++;
    std::cout<<"thread id = "<<tid<<", this is run_2, a2 = "<<a2<<std::endl;
  }
}

int main(int argc, char const *argv[])
{
  pthread_mutex_init(&mutex_, NULL);
  pthread_t threads[THREAD_NUMS];
  
  pthread_create(&threads[0],NULL,&run,NULL);
  pthread_create(&threads[1],NULL,&run_2,NULL);
  for (int i=0;i<THREAD_NUMS;i++) {
    pthread_join(threads[i], NULL);
  }
  pthread_mutex_destroy(&mutex_);
  return 0;
}
