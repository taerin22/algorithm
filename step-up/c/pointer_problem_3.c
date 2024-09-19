#include<stdio.h>

int* find(int arr[5]) {
	int minIdx = 0;
	for (int j = 1; j < 5; j++) {
		minIdx = (arr[minIdx] > arr[j]) ? j : minIdx;
	}
	return arr + minIdx;
}

int main() {
	issssssnt arr[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", arr+i);
	}

	find(arr);
	
	printf("%d", *find(arr));
}