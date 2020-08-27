#pragma once
#include <vector>
std::vector<int> BubbleSort(std::vector<int> &a) {
	for (int i = 0; i < a.size() - 1; ++i) {
		for (int j = 0; j < a.size() - i - 1; j++) {
			int temp;
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return a;
}
