#include <iostream>
#include <string>
#include "files.h"
#include "gtest/gtest.h"
using namespace shaw;
namespace {
class FilesTest : public testing::Test {
  protected:
    Files f;
    const std::string filepath = "/home/mobvoi/shaw.sh";
    
    void SetUp() override{
     //  execute before each case start;
      // Files f;
    }
    /*
     virtual void TearDown() override {
       execute after each case start;
     }
     */
};

TEST_F(FilesTest,ExistsTest) {
  EXPECT_TRUE(f.Exists(filepath));
}

TEST_F(FilesTest,ExistsTestFalse) {
  const std::string file_tmp = "/home/mobvoi/chen.sh";
  EXPECT_FALSE(f.Exists(file_tmp));
}

TEST_F(FilesTest,FileSizeTest) {
  EXPECT_EQ(f.Filesize(filepath),179);
}

TEST_F(FilesTest,CopyFileTest) {
  int filesize = f.Filesize(filepath);
  std::vector<char> v_read = f.ReadAllBytes(filepath);
  std::string outpath = "/home/mobvoi/shaw_copy.sh";
  f.WriteBytes(v_read,outpath);
  EXPECT_EQ(f.Filesize(outpath),filesize);
}
} //anonymous namespace