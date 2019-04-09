#include <pthread.h>
#include <iostream>
#include <mutex>

#define THREAD_NUMS 5
std::mutex mtx;

void* run(void* arg) {
  mtx.lock();
  pthread_t tid = pthread_self();
  std::cout<<"thread id is : "<<tid<<std::endl;
  mtx.unlock();
}

int main(int argc, char const *argv[])
{
  pthread_t threads[THREAD_NUMS];
  for (int i=0;i<THREAD_NUMS;++i) {
    int ret = pthread_create(&threads[i],NULL,&run,NULL);
    if (ret!=0) {
      std::cout<<"create pthread failed..."<<std::endl;
      return -1;
    }
    // pthread_join(threads[i],NULL);
  }
  for (int i=0;i<THREAD_NUMS;++i) {
  	pthread_join(threads[i],NULL);
  }
  return 0;
}