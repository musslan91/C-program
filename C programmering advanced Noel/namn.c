#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	void insertionSort(char name[][], int, int);
	int n, j;
	char name[8][15]={"Taylor, Victor","Duncan, Denise",
			"Ramdhan, Kamal","Singh, Krishna","Ali, Michael",
			"Sawh, Anisa","Khan,Carol","Owen, David"};
				n=8;
				insertionSort(name, 0, n-1);
				printf("\nThe sorted names are\n\n");
				for(j=0;j<n;j++) printf("%s\n", name[j]);

}//end main