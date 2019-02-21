#ifndef SHAW_FILES_H_
#define SHAW_FILES_H_
#include <string>
#include <map>
namespace shaw {

class File {
  public:
    static bool Exists(const std::string& filename);
    static int Filesize(const std::string& filepath);
    static bool Delete(const std::string& filepath);
    static std::map<std::string,std::string> ReadLine(const std::string& filepath);
};
} //namespace shaw
#endif //SHAW_FILES_H_
