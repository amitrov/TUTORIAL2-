#include <stdio.h>

int main(void)
{
    int dogs, cats, total_pets;

    // Ask the user for the number of dogs
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);

    // Ask the user for the number of cats
    printf("How many cats do you have?\n");
    scanf("%d", &cats);

    // Calculate total pets
    total_pets = dogs + cats;

    // Report the number of dogs, cats, and total pets
    printf("So you have %d dog(s) and %d cat(s)!\n", dogs, cats);
    printf("In total, you have %d pet(s)!\n", total_pets);

    return 0;
}
