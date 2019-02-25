#include <iostream>
#include <fstream>
#include <unistd.h>
#include <sys/stat.h>
#include <string>
#include <stdio.h>
#include <map>
#include <vector>
#include "files.h"
#include "str.h"

namespace shaw {
  bool Files::Exists(const std::string& filename) {
    return access(filename.c_str(),F_OK) == 0;
  }

  int Files::Filesize(const std::string& filepath) {
    struct stat info;
    stat(filepath.c_str(), &info);
    return info.st_size;
  }

  bool Files::Delete(const std::string& filepath) {
    return remove(filepath.c_str()) == 0;
  }

  std::map<std::string,std::string> Files::ReadLine(const std::string& filepath) {
    std::vector<std::string> line_vec;
    std::map<std::string,std::string> line_map;
    if (!Exists(filepath)) {
      std::cout<<"file not exists"<<std::endl;
    }
    std::ifstream file;
    file.open(filepath);
    std::string line;
    while(getline(file,line))
    {
      if(line.empty()) {continue;}
      line = shaw::Str::Trim(line);
      line_vec = shaw::Str::Split(line,"=");
      line_map[line_vec[0]] = line_vec[1];
    }
    file.close();
    return line_map;
  }

  std::vector<char> Files::ReadAllBytes(const std::string& filepath) {
    std::ifstream ifs(filepath.c_str(), std::ios::binary|std::ios::ate);
    std::ifstream::pos_type pos = ifs.tellg();
    std::vector<char> result(pos);
    ifs.seekg(0, std::ios::beg);
    ifs.read(&result[0], pos);
    return result;
  }

  bool Files::WriteBytes(std::vector<char>& vec_file, std::string& outfilepath) {
    std::ofstream outfile;
    outfile.open(outfilepath.c_str(),std::ios::out | std::ios::binary | std::ios::trunc);
    if (!outfile.is_open()) {
      std::cout<<"open outfile failed."<<std::endl;
      return false;
    }
    outfile.write(&vec_file[0], vec_file.size()*sizeof(vec_file[0]));
    outfile.close();
    return true;
  }
} //namespace shaw
