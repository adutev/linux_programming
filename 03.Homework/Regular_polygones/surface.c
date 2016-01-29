#include <math.h>
#include "surface.h"

double calculate_area(double s, int n){
    double area = 0.25*((n*s*s))/tan((M_PI/n));
    return area;    
}