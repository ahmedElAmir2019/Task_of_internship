#include <stdio.h>

int calc(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        int a = calc(n - 3);
        int b = calc(n - 2);
        int c = a + b;
        return c;
    }
}

int main() {
    // advantage is the complexity is less than using recuresion directly such as solving  first method and  storage using is less than second method
    //dis advantage is complexity still huge and consume time in big numbers
    int n = 10; 
    int result = calc(n);
    printf("The result is %d\n", result);
    return 0;
}