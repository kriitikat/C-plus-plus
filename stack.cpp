#include <iostream>
#include <stdexcept>

using namespace std;

class Stack
{
public:
    virtual ~Stack() {}
    virtual void push(const int element) = 0;
    virtual int pop() = 0;
    virtual int top() const = 0;
};

class ArrayStack : public Stack
{
private:
    int *data;
    int topIndex;
    int size;

public:
    ArrayStack(int size);
    ~ArrayStack();

    void push(const int element) override;
    int pop() override;
    int top() const override;
};

ArrayStack::ArrayStack(int size)
{
    this->size = size;
    topIndex = -1;
    data = new int[size];
}

ArrayStack::~ArrayStack()
{
    delete[] data;
}

void ArrayStack::push(const int element)
{
    if (topIndex == size - 1)
    {
        throw overflow_error("Stack Overflow! Cannot push more elements.");
    }

    data[++topIndex] = element;
}

int ArrayStack::top() const
{
    if (topIndex == -1)
    {
        throw underflow_error("Stack Underflow! Stack is empty.");
    }

    return data[topIndex];
}

int ArrayStack::pop()
{
    if (topIndex == -1)
    {
        throw underflow_error("Stack Underflow! Cannot pop from empty stack.");
    }

    return data[topIndex--];
}

int main()
{
    Stack *s = new ArrayStack(2);

    try
    {
        s->push(10);
        s->push(20);

        cout << "Top element: " << s->top() << endl;

        cout << "Popped element: " << s->pop() << endl;
        cout << "Popped element: " << s->pop() << endl;

        // This will throw an exception
        cout << "Popped element: " << s->pop() << endl;
    }
    catch (const overflow_error &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch (const underflow_error &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    delete s;
    return 0;
}