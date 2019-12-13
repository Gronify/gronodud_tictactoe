
#include <stdio.h>


int matrix[3][3] = { {3, 3, 3} , {3, 3, 3} , {3, 3, 3} };
int i, j;
int func() {

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			switch (matrix[i][j]) {
			case 1:
				printf("X\t");
				break;
			case 2:
				printf("O\t");
				break;
			case 3:
				printf(" |\t");
				break;
			}
		}
		printf("\n");
	}
	
}



int main() {
	while (1) {
		
		printf("X turn \n");
		scanf_s("%d", &i);
		scanf_s("%d", &j);
		matrix[i][j] = 1;
		func();

		printf("O turn \n");
		scanf_s("%d", &i);
		scanf_s("%d", &j);
		matrix[i][j] = 2;
		func();

	}

	return 0;
}