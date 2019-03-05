#include <iostream>
#include <string>
#include <glog/logging.h>
#define PREFIX "[module] "
struct person
{
  const char* name;
  short age;
} people[] {
  {"chen",12},
  {"shaw",13},
  {"jack",14}
};
/*
bool test(std::string& real_name, short& c_age) {
  for (auto& p:people) {
  	if (p.name == real_name) {
  	  p.age = c_age;
  	  std::cout<<"change age is : "<<p.age<<std::endl;
  	  return true;
  	}
  }
  return false;
}
*/
int main(int argc, char* argv[])
{
  google::InitGoogleLogging(argv[0]);
  FLAGS_log_dir = "/home/mobvoi/glog";
  LOG(INFO) <<PREFIX << "This is an info  message";
  LOG(WARNING) << PREFIX<< "This is a warning message";
  LOG(ERROR) << PREFIX<< "This is an error message";
  LOG(FATAL) << PREFIX<< "This is a fatal message";
  return 0;
}