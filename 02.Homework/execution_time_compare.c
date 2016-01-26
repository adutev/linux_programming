#include <stdio.h>
#include <time.h>

#define REPETITIONS 10000000
#define SIZE 5000

int main() {
    clock_t begin, end;
    double time_spent;

    //    malloc time
    begin = clock();

    int i;
    for (i = 0; i < REPETITIONS; i++) {
        char* mallptr;
        mallptr = (char*) malloc(SIZE * sizeof (char));
        free(mallptr);
    }

    end = clock();
    time_spent = (double) (end - begin);
    printf("Malloc: %.lf\n", time_spent);

    //    calloc time
    begin = clock();

    for (i = 0; i < REPETITIONS; i++) {
        char* callptr;
        callptr = (char*) calloc(SIZE, sizeof (char));
        free(callptr);
    }

    end = clock();
    time_spent = (double) (end - begin);
    printf("Calloc: %.lf\n", time_spent);


    //    reallock time
    begin = clock();

    for (i = 0; i < REPETITIONS; i++) {
        char* realptr = (char*) malloc(SIZE * sizeof (char));
        realptr = (char*) realloc(realptr, SIZE * sizeof (char));
        free(realptr);
    }

    end = clock();
    time_spent = (double) (end - begin);
    printf("Realloc: %.lf\n", time_spent);

    return 0;
}
