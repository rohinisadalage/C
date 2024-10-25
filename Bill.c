#include <stdio.h>
int main() {
    int numItems;
    float total = 0.0;
    printf("Enter the number of items: ");
    scanf("%d", &numItems);
    for (int i = 1; i <= numItems; i++) {
        float price;
        int quantity;
        printf("\nEnter price of item %d: ", i);
        scanf("%f", &price);
        printf("Enter quantity of item %d: ", i);
        scanf("%d", &quantity);
        total += price * quantity;
    }
    printf("\nTotal Bill: $%.2f\n", total);
    return 0;
}
