#ifndef SHAW_BORING_H_
#define SHAW_BORING_H_
namespace shaw {

int* bubblesort(int* arr, int length);
int* mergetwoarray(int* arr1,int arr1_length,int* arr2,int arr2_length);
void quicksort(int* arr, int start, int end);
void maxheapsort(int* arr, int length);
void minheapsort(int* arr, int length);
int find_index(int* arr, int length, int key);
} //namespace shaw
#endif //SHAW_BORING_H_