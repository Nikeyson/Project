class stack {
public:
    stack(int elems = 100);
    ~stack();
    void push(int val);
    int pop();
    bool empty();
private:
    int* body;
    int size;
    int ptr;
};
