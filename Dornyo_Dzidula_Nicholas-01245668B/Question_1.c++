#include <iostream>
using namespace std;

/**
 * Program to solve a system of two linear equations using Cramer's Rule
 * Given equations in the form:
 * x1*x + y1*y = z1
 * x2*x + y2*y = z2
*/


int main() {
    // Coefficients for the equations
    // Equation 1: 2x + 6y = 14
    // Equation 2: 5x - 2y = 1
    int x1 = 2, x2 = 5;
    int y1 = 6, y2 = -2;
    int z1 = 14, z2 = 1;

    // Calculate determinants using Cramer's Rule
    int det_main = (x1 * y2) - (x2 * y1);
    int det_x = (z1 * y2) - (z2 * y1);
    int det_y = (x1 * z2) - (x2 * z1);

    // Calculate values of x and y
    float x = static_cast<float>(det_x) / det_main;
    float y = static_cast<float>(det_y) / det_main;

    // Output the results
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    return 0;
}
