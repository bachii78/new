#include "array.h"
#include "sort.h"

void TestBubble(int* ar, int size){
	std::cout << "Сортировка пузырком" << std::endl;
	setRandom(ar, size);
	showMass(ar, size);
	std::cout << '\n';
	bubbleSort(ar, size);
	showMass(ar, size);
	std::cout << '\n';
	std::cout << "Минимум в массиве: " << findMin(ar, size) << std::endl;
	std::cout << "Максимум в массиве: " << findMax(ar, size) << std::endl;
} 

void TestCount(int* ar, int size){
	std::cout << "Сортировка подсчетом" << std::endl;
	setRandom(ar, size);
	showMass(ar, size);
	std::cout << '\n';
	countSort(ar, size);
	showMass(ar, size);
	std::cout << '\n';
	std::cout << "Минимум в массиве: " << findMin(ar, size) << std::endl;
	std::cout << "Максимум в массиве: " << findMax(ar, size) << std::endl; 
}

void TestSelection(int* ar, int size){
	std::cout << "Сортировка выбором" << std::endl;
	setRandom(ar, size);
	showMass(ar, size);
	std::cout << '\n';
	SelectionSort(ar, size);
	showMass(ar, size);
	std::cout << '\n';
	std::cout << "Минимум в массиве: " << findMin(ar, size) << std::endl;
	std::cout << "Максимум в массиве: " << findMax(ar, size) << std::endl;
}

int main(){
	int ar[10];
	TestBubble(ar, 10);
	TestCount(ar, 10);
	TestSelection(ar, 10);
}
