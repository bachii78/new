#include "array.h"

void showMass(int* ar, int size){
	for(int i = 0; i < size; i++){
		std::cout << ar[i] << '\t';
	}
	std::cout << std::endl;

}

void setRandom(int* ar, int size){
	srand(time(nullptr));
    	for(int i = 0; i < size; i++){
        	ar[i] = rand() % 100;
    }

}

int findMin(int* ar, int size){
	int min = ar[0];
	for(int i = 0; i < size; i++){
		if(ar[i] < min){
			min = ar[i];
		}
	}

	return min;
}

int findMax(int* ar, int size){
	int max = ar[0];
	for(int i = 0; i < size; i++){
		if(ar[i] > max){
			max = ar[i];
		}
	}

	return max;
}
