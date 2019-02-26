#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include "str.h"
namespace {
using namespace shaw;
class StrTest:public testing::Test {
  protected:
  	Str st;
  	const std::string s = "  myname_is_shaw  ";
    /*
     virtual void SetUp() override{
       execute before each case start;
     }

     virtual void TearDown() override {
       execute after each case start;
     }
     */
};

TEST_F(StrTest,StartswithTestCorrect) {
  EXPECT_TRUE(st.Startswith(s,"my"));
}

TEST_F(StrTest,StartswithTestFalse) {
  EXPECT_FALSE(st.Startswith(s,"myame"));
}


TEST_F(StrTest,EndswithTestTrue) {
  EXPECT_TRUE(st.Endswith(s,"shaw  "));
}

TEST_F(StrTest,EndswithTestFalse) {
  EXPECT_FALSE(st.Endswith(s,"shaw"));
}

TEST_F(StrTest,TrimTest) {
  std::string s2 = st.Trim(s);
  EXPECT_EQ(s2,"myname_is_shaw");
}

TEST_F(StrTest,UpperTest) {
  std::string s1 = "shaw_chen";
  std::string s2 = st.Upper(s1);
  EXPECT_EQ(s2,"SHAW_CHEN");
}

TEST_F(StrTest,ContainsTestCorrect) {
  std::string s2 = "myname";
  int ret = st.Contains(s,s2);
  EXPECT_EQ(ret,2);
}

TEST_F(StrTest,ContainsTestFalse) {
  std::string s2 = "__shaw";
  EXPECT_EQ(st.Contains(s,s2),-1);
}
} // namespace