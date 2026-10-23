#include <stdio.h>
int main()
{
    double a, d;
    int n, choice;

    // Input the parameters of the progression
    printf("Enter the first term (a): ");
    scanf("%lf", &a);

    printf("Enter the common difference / multiplier (d): ");
    scanf("%lf", &d);
    do
    {
    	printf("Enter the number of terms (n > 0): ");
    	scanf("%d", &n);

    	// Validate the number of terms
    	if (n <= 0) 
    		printf("The number of terms must be greater than 0.\n");
    }while(n<=0);	
    // Ask user to choose between AP and GP
    printf("\nChoose the progression type:\n");
    printf("1. Arithmetic Progression (AP)\n");
    printf("2. Geometric Progression (GP)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("\nThe first %d terms are:\n", n);

    if (choice == 1)
    {
        // Generate Arithmetic Progression: term = a + i * d
        double current_term = a;
        for (int i = 0; i < n; i++)
        {
            printf("%.2lf ", current_term);
            current_term += d;
        }
        printf("\n");
    } 
    else if (choice == 2)
    {
        // Generate Geometric Progression: term = a * (d^i)
        double current_term = a;
        for (int i = 0; i < n; i++)
        {
            printf("%.2lf ", current_term);
            current_term *= d;
        }
        printf("\n");
    } 
    else 
    {
        printf("Invalid choice selected.\n");
    }

    return 0;
}//End of main 
