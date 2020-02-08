#include "stack.h"
#include <stdio.h>
#include <assert.h>

stack::stack(int elems) {
    size = elems;
    body = new int[size];
    ptr = 0;
}

void stack::push(int val) {
    assert(ptr < size);
    body[ptr++] = val;
}

int stack::pop() {
    assert(ptr > 0);
    return body[--ptr];
}

bool stack::empty() {
    return ptr == 0;
}

stack::~stack() {
    delete[] body;
}