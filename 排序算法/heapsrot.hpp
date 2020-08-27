#pragma once
#include<iostream>
#include<vector>

void DownAdjust(std::vector<int> &a, int parentindex, int length) {
	int temp = a[parentindex];
	int child_index = parentindex * 2 + 1;
	while (child_index < length){
		if ((child_index + 1 < length) && (a[child_index] > a[child_index + 1])){
			child_index++;
		}
		if (temp > a[child_index]){
			a[parentindex] = a[child_index];
			parentindex = child_index;
			child_index = parentindex * 2 + 1;
		}
		else {
			break;
		}
	}
	a[parentindex] = temp;
}

void HeapSort(std::vector<int> &a) {
	int length = a.size();
	for (int i = length / 2; i >= 0; --i) {
		DownAdjust(a, i, a.size());
	}
	for (int i = 1; i < length; ++i) {
		std::swap(a[0], a[length - i]);
		DownAdjust(a, 0, length - i);
	}
	reverse(a.begin(), a.end());
}
