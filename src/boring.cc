#include "boring.h"
#include <iostream>
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

void quicksort(int* arr, int start, int end) {
  if (start>end) {return;}
  int i = start, j = end, key = arr[start];
  while (i<j) {
    if (arr[i] == arr[j]) {
      j--;
    }
  	while (i<j && arr[j]>key) {
  	  j--;
  	}
  	int temp = arr[j];

    while (i<j && arr[i]<key) {
  	  i++;
    }
    arr[j] = arr[i];
    arr[i] = temp;
  }
  arr[i] = key;
  quicksort(arr,start,i-1);
  quicksort(arr,i+1,end);
}

void maxheapsort(int* arr, int length) {
  for (int leng=length;leng>0;leng--) {
    for (int node_index=leng/2-1;node_index>=0;node_index--) {
      int left = 2*node_index+1;
      int right = 2*node_index+2;
      if (left<leng && arr[left]>arr[node_index]) {
        int temp1 = arr[left];
        arr[left] = arr[node_index];
        arr[node_index] = temp1;
      }
      if (right<leng && arr[right]>arr[node_index]) {
        int temp2 = arr[right];
        arr[right] = arr[node_index];
        arr[node_index] = temp2;
      }
    }
    int temp3 = arr[leng-1];
    arr[leng-1] = arr[0];
    arr[0] = temp3;
  }
  for (int i=0;i<length;++i) {
    std::cout<<arr[i]<<std::endl;
  }
}

} //namespace shaw