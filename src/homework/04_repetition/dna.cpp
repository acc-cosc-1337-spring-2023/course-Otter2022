//add include statements
#include "dna.h"

//add function(s) code here
int factorial(int num) {
    int solution = 1;
    for (int i = num; i >= 1; i--) {
        solution = solution * i;
    }
    return solution;
}

int gcd(int num1, int num2) {
    int temp;
    while (num1 != num2) {
        if (num1 < num2) {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        if (num1 > num2) {
            num1 -= num2;
        }
    }
    return num1;
}