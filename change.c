#include <stdio.h>

int main () {
    int money;

    printf("Please enter the amount of money you wish to withdraw:");
    scanf("%d", &money);
    printf("You received %d hundred(s)\n", money / 100);
    printf("You received %d fifty(s)\n", (money % 100) / 50);
    printf("You received %d twenty(s)\n", (money % 50) / 20);
    printf("You received %d ten(s)\n", (money % 20) / 10);
    printf("You received %d five(s)\n", (money % 10) / 5);
    printf("You received %d one(s)\n", (money % 5));
    return 0;
}