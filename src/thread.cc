#include <pthread.h>
#include <iostream>
#include <mutex>

static const int thread_nums = 5;
std::mutex mtx;

void* run(void* arg) {
  mtx.lock();
  pthread_t tid = pthread_self();
  std::cout<<"thread id is : "<<tid<<std::endl;
  mtx.unlock();
}

int main(int argc, char const *argv[])
{
  pthread_t threads[thread_nums];
  for (int i=0;i<thread_nums;++i) {
    int ret = pthread_create(&threads[i],NULL,&run,NULL);
    if (ret!=0) {
      std::cout<<"create pthread failed..."<<std::endl;
      return -1;
    }
    // pthread_join(threads[i],NULL);
  }
  for (int i=0;i<thread_nums;++i) {
  	pthread_join(threads[i],NULL);
  }
  return 0;
}