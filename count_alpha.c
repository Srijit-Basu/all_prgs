#include <stdio.h>

// Function prototypes
int countAlphabets(const char str[]);
int countDigits(const char str[]);
int countSpaces(const char str[]);
int countSpecialChars(const char str[]);

int main()
{
    char str[100];
    int choice;

    printf("Enter the string: ");
    // Reads the entire line including spaces until Enter is pressed
    scanf("%[^\n]", str); 

    do
    {
        // Displaying the menu
        printf("\n--- MENU ---");
        printf("\n1. Count Alphabets");
        printf("\n2. Count Digits");
        printf("\n3. Count Spaces");
        printf("\n4. Count Special Characters");
        printf("\n5. Exit");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        // Routing choices to specific user-defined functions
        switch (choice)
        {
            case 1:
                printf("Total Alphabets: %d\n", countAlphabets(str));
                break;
            case 2:
                printf("Total Digits: %d\n", countDigits(str));
                break;
            case 3:
                printf("Total Spaces: %d\n", countSpaces(str));
                break;
            case 4:
                printf("Total Special Characters: %d\n", countSpecialChars(str));
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option (1-5).\n");
        }
    } while (choice != 5);

    return 0;
}

// --- User-Defined Functions ---

// Function to count lower and upper case alphabets
int countAlphabets(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    return count;
}

// Function to count numerical digits
int countDigits(const char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
    }
    return count;
}

// Function to count spaces
int countSpaces(const char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

// Function to count special characters using the Subtraction Method
int countSpecialChars(const char str[])
{
    int totalLength = 0;
    
    // 1. Find the total length of the string
    while (str[totalLength] != '\0')
    {
        totalLength++;
    }
    
    // 2. Subtract the alphabet, digit, and space counts from the total length
    int specialCount = totalLength - (countAlphabets(str) + countDigits(str) + countSpaces(str));
    
    return specialCount;
}

