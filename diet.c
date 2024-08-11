#include <stdio.h>
#include <string.h>
#define MAX_ITEMS 100
typedef struct {
    char name[50];
    int calories;
    float protein;
    float carbs;
    float fats;
} FoodItem;
void addFoodItem(FoodItem items[], int *count);
void displayTotal(FoodItem items[], int count);
int main() {
    FoodItem items[MAX_ITEMS];
    int count = 0;
    int choice;

    do {
        printf("\nDaily Diet Tracker\n");
        printf("1. Add Food Item\n");
        printf("2. Display Total Nutritional Intake\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addFoodItem(items, &count);
                break;
            case 2:
                displayTotal(items, count);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
void addFoodItem(FoodItem items[], int *count) {
    if (*count < MAX_ITEMS) {
        printf("Enter food name: ");
        scanf("%s", items[*count].name);
        printf("Enter calories: ");
        scanf("%d", &items[*count].calories);
        printf("Enter protein (g): ");
        scanf("%f", &items[*count].protein);
        printf("Enter carbs (g): ");
        scanf("%f", &items[*count].carbs);
        printf("Enter fats (g): ");
        scanf("%f", &items[*count].fats);
        (*count)++;
    } else {
        printf("Maximum item limit reached!\n");
    }
}
void displayTotal(FoodItem items[], int count) {
    int totalCalories = 0;
    float totalProtein = 0.0f, totalCarbs = 0.0f, totalFats = 0.0f;
    for (int i = 0; i < count; i++) {
        totalCalories += items[i].calories;
        totalProtein += items[i].protein;
        totalCarbs += items[i].carbs;
        totalFats += items[i].fats;
    }
    printf("\nTotal Nutritional Intake for the Day:\n");
    printf("Calories: %d kcal\n", totalCalories);
    printf("Protein: %.2f g\n", totalProtein);
    printf("Carbs: %.2f g\n", totalCarbs);
    printf("Fats: %.2f g\n", totalFats);
}
