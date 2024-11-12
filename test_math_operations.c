// test_math_operations.c
#include <stdio.h>
#include <assert.h>

#include "math_operations.h"

void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, -1) == -2);
    printf("Addition tests passed.\n");
}

// void test_subtract() {
//     assert(subtract(5, 3) == 2);
//     assert(subtract(0, 1) == -1);
//     printf("Subtraction tests passed.\n");
// }

void test_multiply() {
    assert(multiply(2, 3) == 6);
    assert(multiply(-1, -1) == 1);
    printf("Multiplication tests passed.\n");
}

void test_divide() {
    assert(divide(6, 3) == 2);
    assert(divide(5, 2) == 2); // Integer division
    assert(divide(1, 0) == 0); // Division by zero case
    printf("Division tests passed.\n");
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    printf("All tests passed.\n");
    return 0;
}
