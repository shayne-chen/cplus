#include "boring.h"
#include "gtest/gtest.h"
using namespace shaw;
namespace {
class BoringTest : public testing::Test {
  protected:
    int arr1[7] = {7,5,4,3,2,1,1};
    int arr2[7] = {7,5,4,3,2,1,1};
    int length = 7;
    // void SetUp() override{
     //  execute before each case start;
      // Files f;
    // }
    /*
     virtual void TearDown() override {
       execute after each case start;
     }
     */
};

TEST_F(BoringTest,SortTest) {
  quicksort(arr1, 0, length-1);
  maxheapsort(arr2,length);
  for (int i=0;i<length;++i) {
    EXPECT_EQ(arr1[i], arr2[i]);
  }
}

TEST_F(BoringTest,FindIndexTest) {
  quicksort(arr1,0,length-1);
  EXPECT_EQ(find_index(arr1,length,1),1);
  EXPECT_EQ(find_index(arr1,length,10),-1);
  EXPECT_EQ(find_index(arr1,length,0),-1);
  EXPECT_EQ(find_index(arr1,length,6),-1);
}
} //namespace