#include <stdio.h>
#include <stdlib.h>     /* abs */

void update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    *b = abs (*a - *b); // difference
    *a = sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
