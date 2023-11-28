#include <stdio.h>

int main() {

    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    int numbers[15];
    int number, numberOfNumbers;

    printf("\n");
    printf("Please enter number of numbers: ");
    scanf("%d", &numberOfNumbers);
    printf("\n");

    if(numberOfNumbers < 1 || numberOfNumbers > 15) {
        printf("The entered number (%d) is invalid\n", numberOfNumbers);
        return 0;
    }

    for (int i = 1; i <= numberOfNumbers; i++) {
        printf("Please enter the %d number: ", i);
        scanf("%d", &number);
        numbers[i-1] = number;
    }

    int min = numbers[0], max = numbers[0];
    for (int n = 1; n < numberOfNumbers; ++n) {
        if (numbers[n] > max) {
            max = numbers[n];
        } else if (numbers[n] < min) {
            min = numbers[n];
        }
    }

    printf("\n");
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}


