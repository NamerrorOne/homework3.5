#include <iostream>


main() {
	//Hello task
	int i = 1;
	while(i<=9) {
		printf("(%i) hello \n", i);
		i++;
	}
	printf("\n");
	//number task
	int j = 0;
	printf("All numbers\n");
	while(j<=15) {
	
		printf("%i\n", j);
		j++;
	}
	//no odd
	int k = 0;
	printf("Only ne4etnie numbers\n");
	while(k<=15) {
		if(k%2!=0) {
			printf("%i\n", k);
		}
		k++;
	}
}


