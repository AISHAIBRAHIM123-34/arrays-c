#include <stdio.h>

int main () {
    int marks [5] = {90, 85, 70, 60, 95};
    for (int i = 0; i < 5; i++) {
        printf("Mark %d = %d\n", i+1, marks [i]);
    }
    return 0;
}