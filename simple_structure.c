#include <stdio.h>
struct SimpleStructure {
    int data;
};

int main() {
    struct SimpleStructure data;
    data.data = 42;
    printf("Data: %d\n", data.data);
    return 0;
}
