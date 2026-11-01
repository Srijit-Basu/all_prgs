#include <stdio.h>

// Function to print a single digit's name
void printDigitWord(int digit) {
    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

int main()
{
    long long number;
    long long reversed = 0;
    int originalDigitCount = 0;
    int reversedDigitCount = 0;

    printf("Enter ant integer number:");
    scanf("%lld",&number);
    
    printf("In words: ");

    // Handle Negative Numbers
    if (number < 0) {
        printf("Minus ");
        number = -number; // Convert to positive for processing
    }

    // Handle Zero directly
    if (number == 0) {
        printf("Zero\n");
        return 0;
    }

    // Reverse the number and count total digits
    long long temp = number;
    while (temp > 0) {
        reversed = (reversed * 10)+ (temp % 10);
        temp /= 10;
        originalDigitCount++;
    }

    // Process the reversed number digit by digit
    temp = reversed;
    while (temp > 0) {
        printDigitWord(temp % 10);
        temp /= 10;
        reversedDigitCount++;
    }

    // Print "Zero" for any trailing zeros lost during reversal (e.g., 4300)
    while (originalDigitCount > reversedDigitCount) {
        printDigitWord(0);
        reversedDigitCount++;
    }

    printf("\n");
    return 0;
}

