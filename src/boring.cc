#include "boring.h"
// #include <iostream>
namespace shaw {

int* bubblesort(int* arr, int length) {
  if (length <= 1) {
    return arr;
  }
  for (int i=0;i<length-1;++i) {
    for (int j=i+1;j<length;++j) {
      if (*(arr+i)>*(arr+j)) {
        int temp = *(arr+i);
        *(arr+i) = *(arr+j);
        *(arr+j) = temp;
      }
    }
  }
  return arr;
}

int* mergetwoarray(int* arr1,int arr1_length,int* arr2,int arr2_length) {
  if (arr2_length == 0) {return arr1;}
  if (arr1_length == 0) {return arr2;}
  int* arr3 = new int(arr1_length+arr2_length);
  arr1 = bubblesort(arr1, arr1_length);
  arr2 = bubblesort(arr2, arr2_length);
  int index1=0, index2=0, index=0;
  while (index1<arr1_length && index2<arr2_length) {
    if (arr1[index1]<arr2[index2]) {
      *(arr3+index) = arr1[index1];
      index1++;
      index++;
    } else {
      *(arr3+index) = arr2[index2];
      index2++;
      index++;
    }
  }
  if (index1 == arr1_length) {
  	for (;index2<arr2_length;index2++) {
  	  *(arr3+index) = arr2[index2];
  	  index++;
  	}
  } else {
  	for (;index1<arr1_length;index1++) {
  	  *(arr3+index) = arr1[index1];
  	  index++;
  	}
  }
  return arr3;
}

} //namespace shaw