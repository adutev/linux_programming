#include <stdio.h>
#include <stdio.h>

int main(){
	unsigned long long n1 = 1;
	unsigned long long n2 = 1;
	unsigned long long n3 = 2;
	unsigned long long max_fibonacci_number = 0;

	while(1) {
		max_fibonacci_number = n3;
		n3 = n1 + n2;

		if(n3 < n1) {
			printf("End...\n");
			break;
		} else {
			n1 = n2;
			n2 = n3;
		}
	}

	printf("Max Fibbonaci: %llu\n", max_fibonacci_number);

	return 0;
}
