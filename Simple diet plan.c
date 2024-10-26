#include <stdio.h>

int main() {
    int goal;
    int dietType;

    printf("Welcome to the Simple Diet Plan!\n");
    printf("Choose your goal:\n");
    printf("1. Lose Weight\n");
    printf("2. Maintain Weight\n");
    printf("3. Gain Weight\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &goal);

    printf("\nSelect your diet type:\n");
    printf("1. Vegetarian\n");
    printf("2. Non-Vegetarian\n");
    printf("3. Vegan\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &dietType);

    printf("\nYour diet plan:\n");
    if (goal == 1) {
        if (dietType == 1) {
            printf("- Breakfast: Oatmeal with fruits\n");
            printf("- Lunch: Mixed vegetable salad with chickpeas\n");
            printf("- Dinner: Grilled vegetables with quinoa\n");
        } else if (dietType == 2) {
            printf("- Breakfast: Scrambled eggs with avocado\n");
            printf("- Lunch: Grilled chicken salad\n");
            printf("- Dinner: Salmon with steamed vegetables\n");
        } else if (dietType == 3) {
            printf("- Breakfast: Smoothie with almond milk, banana, and spinach\n");
            printf("- Lunch: Quinoa salad with mixed greens\n");
            printf("- Dinner: Lentil soup with vegetables\n");
        }
    } else if (goal == 2) {
        if (dietType == 1) {
            printf("- Breakfast: Greek yogurt with granola and berries\n");
            printf("- Lunch: Brown rice with mixed vegetables and tofu\n");
            printf("- Dinner: Whole-wheat pasta with vegetables\n");
        } else if (dietType == 2) {
            printf("- Breakfast: Omelet with spinach and tomatoes\n");
            printf("- Lunch: Grilled chicken with sweet potatoes\n");
            printf("- Dinner: Beef stir-fry with bell peppers and broccoli\n");
        } else if (dietType == 3) {
            printf("- Breakfast: Chia pudding with almond milk and berries\n");
            printf("- Lunch: Brown rice with chickpeas and vegetables\n");
            printf("- Dinner: Vegetable stir-fry with tofu\n");
        }
    } else if (goal == 3) {
        if (dietType == 1) {
            printf("- Breakfast: Smoothie with oats, milk, and fruits\n");
            printf("- Lunch: Whole-wheat pasta with beans and vegetables\n");
            printf("- Dinner: Baked potato with cottage cheese and salad\n");
        } else if (dietType == 2) {
            printf("- Breakfast: Peanut butter toast with bananas\n");
            printf("- Lunch: Chicken sandwich with whole-grain bread\n");
            printf("- Dinner: Steak with mashed potatoes and greens\n");
        } else if (dietType == 3) {
            printf("- Breakfast: Smoothie with almond milk, oats, and banana\n");
            printf("- Lunch: Lentil stew with brown rice\n");
            printf("- Dinner: Chickpea curry with quinoa\n");
        }
    } else {
        printf("Invalid input. Please restart the program and select a valid option.\n");
    }

    printf("\nRemember to drink water and exercise regularly!\n");

    return 0;
}
