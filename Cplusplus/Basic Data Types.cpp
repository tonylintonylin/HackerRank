#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num1;
    long num2;
    char character;
    float num3;
    double num4;
    
    scanf("%d %ld %c %f %lf", &num1, &num2, &character, &num3, &num4);
    printf("%d \n%ld \n%c \n%.2f \n%.5lf", num1, num2, character, num3, num4);
    
    return 0;
}

/*
Input (stdin)
3 12345678912345 a 334.23 14049.30493

Your Output (stdout)
3 
12345678912345 
a 
334.23 
14049.30493
*/
