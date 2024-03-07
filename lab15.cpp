#include <stdio.h>

double f(double x);
double RootOfFunction(double xl, double xr, double epsilon);

int main() {
    double root;
    root = RootOfFunction(-1, 10, 0.1);
    printf("Root = %.1f", root);
    return 0;
}

double f(double x) {
    return 2 * x - 5;
}

double RootOfFunction(double xl, double xr, double epsilon) {
    double xm; 
    do {
        xm = (xl + xr) / 2;
        printf("%.1f %.1f %.1f\n", xl, xm, xr); 

        double f_xm = f(xm);

        if (f_xm == 0 || (xr - xl) / 2 < epsilon) {
            break; 
        }
        if (f_xm * f(xl) < 0) {
            xr = xm;
        } else {
            xl = xm;
        }
    } while (1);

    return xm;
}

