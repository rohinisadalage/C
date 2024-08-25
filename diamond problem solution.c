#include <stdio.h>
struct Base {
    int base_data;
};
struct Derived1 {
    struct Base base;  
    int derived1_data;
};
struct Derived2 {
    struct Base base;  
    int derived2_data;
};
struct Derived3 {
    struct Derived1 derived1;
    struct Derived2 derived2;
    int derived3_data;
};
int main() {
    struct Derived3 d3;
    d3.derived1.base.base_data = 10;
    d3.derived1.derived1_data = 20;
    d3.derived2.base.base_data = 30;
    d3.derived2.derived2_data = 40;
    d3.derived3_data = 50;
    printf("Derived1 Base Data: %d\n", d3.derived1.base.base_data);
    printf("Derived2 Base Data: %d\n", d3.derived2.base.base_data);
    printf("Derived1 Data: %d\n", d3.derived1.derived1_data);
    printf("Derived2 Data: %d\n", d3.derived2.derived2_data);
    printf("Derived3 Data: %d\n", d3.derived3_data);
    return 0;
}
