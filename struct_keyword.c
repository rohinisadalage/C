#include <stdio.h>
struct Person {
    char name[50];
    int age;
    float height;
};
int main() {
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 6.0;
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f feet\n", person1.height);
    return 0;
}
