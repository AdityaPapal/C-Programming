#include <stdio.h>
struct laptop
{
    int id;
    char model[50];
    int price;
};
int main()
{
    struct laptop ROG, TUF;
    printf("Enter the First laptop details :-\n");
    printf("Enter the laptop id :");
    scanf("%d", &ROG.id);
    printf("Enter the laptop model :");
    scanf("%s", &ROG.model);
    printf("Enter the laptop price :");
    scanf("%d", &ROG.price);

    printf("\n\nEnter the second laptop details :-\n");
    printf("Enter the laptop id :");
    scanf("%d", &TUF.id);
    printf("Enter the laptop model :");
    scanf("%s", &TUF.model);
    printf("Enter the laptop price :");
    scanf("%d", &TUF.price);

    printf("\nFirst Laptop details:\n");
    printf("Laptop I'd : %d \nLaptop model : %s \n", ROG.id, ROG.model);
    printf("laptop Price : %d\n\n", ROG.price);

    printf("Second Laptop details:\n");
    printf("Laptop I'd : %d \nLaptop model : %s \n", TUF.id, TUF.model);
    printf("laptop Price : %d", TUF.price);

    return 0;
}