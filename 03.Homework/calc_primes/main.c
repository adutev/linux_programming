#include <stdio.h>
#include <sys/time.h>

int check_prime(long n, long* largest);

int main() {
    struct timeval start, end;
    gettimeofday(&start, NULL);
    gettimeofday(&end, NULL);
    long curr_number = 3;
    long largest_prime = 3;

    while ((((end.tv_sec - start.tv_sec)*1000000L + end.tv_usec) - start.tv_usec) <= 1800000) {
        curr_number += 2;
        check_prime(curr_number, &largest_prime);
        
        gettimeofday(&end, NULL);
    }
    printf("Largest prime, calculated for 1.8 seconds is: %ld\n", largest_prime);
    return 0;
}

int check_prime(long n, long* largest) {
    int i;
    for (i = 3; i < n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    *largest = n;
    return 1;
}