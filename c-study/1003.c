#include<stdio.h>
#include<stdlib.h>

typedef struct {
	
	int age;
	char num[13];
}Number;
int main() {
	Number *people;
	int n;
	scanf("%d", &n);
	people=(Number*)malloc(sizeof(Number) * n);

	for (int i = 0; i < n; i++) {
	scanf("%d", &people[i].age);
	scanf("%s", people[i].num);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", people[i].age);
		printf("%s\n", people[i].num);
	}
}