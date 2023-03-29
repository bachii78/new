#include "sort.h"


void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;

}

void SelectionSort(int* arr, int size){
    for (int i = 0; i < size - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if (min_index != i){
            swap(arr[i], arr[min_index]);
        }
    }
}

void countSort(int* ar, int size){
	int countAr[1000];
	for(int i = 0; i < 1000; i++){
		countAr[i] = 0;
	}
	for (int i = 0; i < size; i++){
 		countAr[ar[i]]++;
	}
	int index = 0;
	for(int i = 0; i < 1000; i++){
		if(countAr[i] != 0){
			int j = countAr[i];
			for(j,index; j > 0; index++, j--){
				ar[index] = i;
			}
		}
	}

}

void bubbleSort(int* ar, int size){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(ar[j] > ar[i]){
				swap(ar[i], ar[j]);
			}
		}
	}
}
