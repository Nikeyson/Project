#include <stdio.h>
#include "stack.h"

int main() {
    stack* x = new stack();
    for (int i = 0; i < 10; i++) {
        stack* y;
        x->push(i);
    }
    while (!x->empty()) {
        int y = x->pop();
        printf("%d\n", y);
    }
    delete x;
}