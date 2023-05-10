#include <stdio.h>

int calc(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return calc(n - 3) + calc(n - 2);
    }
}

int main() {
    // advantage is t is less than second method
    //disadvantage is complexity is huge and consume time in big numbers
    int n = 10;  
    int result = calc(n);
    printf("The output is %d\n", result);
    return 0;
}