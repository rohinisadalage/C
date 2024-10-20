#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *data;
    int rows;
    int cols;
} Array;
Array create_array(int rows, int cols) {
    Array arr;
    arr.data = (int *)malloc(rows * cols * sizeof(int));
    arr.rows = rows;
    arr.cols = cols;
    return arr;
}
void fill_array(Array arr, int values[]) {
    for (int i = 0; i < arr.rows * arr.cols; i++) {
        arr.data[i] = values[i];
    }
}
void print_array(Array arr) {
    for (int i = 0; i < arr.rows; i++) {
        for (int j = 0; j < arr.cols; j++) {
            printf("%d ", arr.data[i * arr.cols + j]);
        }
        printf("\n");
    }
}
Array add_arrays(Array arr1, Array arr2) {
    if (arr1.rows != arr2.rows || arr1.cols != arr2.cols) {
        printf("Arrays must have the same dimensions for addition.\n");
        exit(1);
    }
