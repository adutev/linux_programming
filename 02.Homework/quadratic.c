#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double find_determinant(double, double, double);

int main() {
    char *line = calloc(32, sizeof(char));
    char ch;
    int i = 0;
    
    while((ch = fgetc(stdin)) != '\n')
    {
        line[i++] = ch;
    }
    line[i] = '\0';

    int len = strlen(line) / sizeof (char);

    char *end_ptr;
    double a = strtol(line, &end_ptr, 10);
    double b = strtol(end_ptr + 1, &end_ptr, 10);
    double c = strtol(end_ptr + 1, &end_ptr, 10);

    double d = find_determinant(a, b, c);
    double root1, root2;
    if(a == 0) {
        printf("a cannot be 0!");
    } else if(d < 0) {
        printf("D < 0, no real square roots.");
    } else if(d == 0) {
        root1 = -b/2*a;
        printf("root1 = root2 = %f", root1);
    } else {
        root1 = (-b + sqrt(d))/2*a;
        root2 = (-b - sqrt(d))/2*a;
        printf("root1 = %.2f\nroot2 = %.2f", root1, root2);
    }

    return 0;
}

double find_determinant(double a, double b, double c) {
    double result;
    result = b * b - 4 * a*c;

    return result;
}

