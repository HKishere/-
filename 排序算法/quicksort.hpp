#pragma once
#include <vector>

int GetMark(std::vector<int> &a, int start_index, int end_index) {
	int mark = start_index;
	for (int i = start_index; i <= end_index; ++i) {
		if (a[i] < a[mark]){
			mark++;
			int temp;
			std::swap(a[i], a[mark]);
		}
	}
	return mark;
}

void QuickSort(std::vector<int> &a, int start_index, int end_index) {
	if (start_index >= end_index){
		return ;
	}
	else {
		int mark_index = GetMark(a, start_index, end_index);
		QuickSort(a, 0, mark_index - 1);
		QuickSort(a, mark_index + 1, end_index);
	}
}

