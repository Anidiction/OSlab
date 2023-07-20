#include <stdio.h>

int main() {
	int a = 1;
	int b = 0;
	float c = 0.0;
	while(a > 0) {
		printf("enter a number : ");
		scanf("%d", &a);
		if(a > 0) {
			b += a;
			c++;
		}
	}
	printf("summation = %d\naverage = %0.2f",b,(b/c));
	return 0;
	
}
