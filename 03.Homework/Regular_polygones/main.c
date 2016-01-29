#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "perimeter.h"
#include "surface.h"

int main() {
    double area;
    double perimeter;
    double s;
    int n;
    printf("Enter a side size: ");
    scanf("%lf", &s);
    printf("Enter number of sides: ");
    scanf("%d", &n);
    if(n < 3){
        printf("Number of sides cannot be less than 3.");
        exit(1);
    }
    
    area = calculate_area(s, n);
    perimeter = calculate_perimeter(s, n);
    printf("Area: %lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);

    return (EXIT_SUCCESS);
}