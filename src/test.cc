#include <iostream>
// #include <thread>
#include <pthread.h>

struct person
{
  std::string name;
  int order;
} myself {
  "shaw",
  12
};
static const int thread_nums = 5;

// void print(int i) {
//   std::cout<<"Hello: "<<i<<std::endl;
// }

void *print(void* arg) {
  // int i = *(int *)arg;
  person* per = (person*)arg;
  std::string nam = per->name;
  std::cout<<"name : "<<nam<<std::endl;
}

int main(int argc, char const *argv[])
{
  // std::thread t[thread_nums];
  // for (int i=0;i<thread_nums;++i) {
  // 	t[i] = std::thread(print,i);
  // }
  // std::cout << "Launched from the main\n";
  // for (int i=0;i<thread_nums;++i) {
  // 	t[i].join();
  // }

  // pthread_t t[thread_nums];
  // for (int i=0;i<thread_nums;++i) {
  //   pthread_create(&t[i], NULL, print, &myself);
  //   pthread_join(t[i],NULL);
  // }
  return 0;
}