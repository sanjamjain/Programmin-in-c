#include <stdio.h>

int main()
{
    int num_count; // Using a more descriptive variable name
    printf("Enter the amount of numbers you want to enter: ");
    scanf("%d", &num_count);


    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    int i;
    int current_number;

    for (i = 0; i < num_count; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &current_number);

        if (current_number > 0)
        {
            positive_count++;
        }
        else if (current_number < 0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
    }

    printf("\nResults:\n");
    printf("Positives: %d\n", positive_count);
    printf("Negatives: %d\n", negative_count);
    printf("Zeros: %d\n", zero_count);

    return 0;
}
