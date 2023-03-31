#include <iostream>
// —умма от 5 до 15
main() {
	int i = 5;
	int res = 0;
	
	while(i<=15) {
		res+=i;
		i++;
	}
	printf("%i", res);
}
