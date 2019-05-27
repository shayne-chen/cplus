#ifndef SHAW_STR_H_
#define SHAW_STR_H_
#include <string>
#include <vector>
#include <map>
namespace shaw {
class Str {
  public:
    static std::vector<std::string> Split(const std::string& s, const std::string& key);
    static bool Startswith(const std::string& s, const std::string& start);
    static bool Endswith(const std::string& s, const std::string& end);
    static std::string Trim(const std::string& s);
    static std::vector<int> Find(const std::string& s, const char& key);
    static std::string Upper(std::string& src);
    static std::string Lower(std::string& src);
    static bool LegalStr(const std::string& s);
    static bool LegalStrFlex(const std::string& s);
    static int Index(const std::string& s, const char& c);
    static int Contains(const std::string& s, const std::string& substr);
    static bool Sameletter(const std::string& s1, const std::string& s2);
    static std::string reverse(std::string s);
    static std::string swap(std::string& s, const char& key1, const char& key2);
};
} //namespace shaw
#endif // SHAW_STR_H_