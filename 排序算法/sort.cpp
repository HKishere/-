#include <iostream>
#include <vector>
#include "bubblesort.hpp"
#include "quicksort.hpp"
#include "heapsrot.hpp"

std::vector<int> source = { 1,9,3,5,2,7,8,0 };

void PrintArray(std::vector<int> a) {
	for (int i = 0; i < a.size(); ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

}


int main() {

	std::cout << "Ã°ÅÝÅÅÐò:";
	BubbleSort(source);
	PrintArray(source);

	std::cout << "¿ìËÙÅÅÐò:";
	QuickSort(source, 0, source.size() - 1);
	PrintArray(source);

	std::cout << "¶ÑÅÅÐò:¡¡";
	HeapSort(source);
	PrintArray(source);

	getchar();
	return 0;
}