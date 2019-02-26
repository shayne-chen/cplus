#include <pthread.h>
#include <iostream>
static const int thread_nums = 5;

void* run(void* arg) {
  pthread_t tid = pthread_self();
  std::cout<<"thread id is : "<<tid<<std::endl; 
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