#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	int size = 0;
	int w;
	int max = 0;
	int min = 1000;
	scanf("%d", &size);
	scanf("%d", &w);
	int** mas;
	mas = (int**)malloc(sizeof(int*) * size);
	int size1 = size;
	int i = 0;
	int j = 0;
	int s = 0;
	
	
	while (size1 > i) {
		j = 0;
		mas[i] = (int*)malloc(sizeof(int) * w);
		while (w > j) {
			mas[i][j] = rand() % 1000;
			if (max < mas[i][j]) {
				max = mas[i][j];
			}
			if (min > mas[i][j]) {
				min = mas[i][j];
			}
			s += mas[i][j];
			printf("%d\t", mas[i][j]);
			j++;
		}
		printf("| %d", s);
		s = 0;
		printf("\n");

		i++;
	}



	printf("%d\t%d\n", max, min);
	max = max - min;
	printf("%d", max);
}