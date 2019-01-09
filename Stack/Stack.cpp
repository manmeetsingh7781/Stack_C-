#include "Stack.h"

Stack::Stack(int list_size) : size(list_size)
{

    for (int x = 0; x < size; x++) {

        // every element setting to 0 as a place holder
        list[x] = 0;
    }
}



bool Stack::isFull() const {
    return index == size;
}

bool Stack::push(int value) const
{
        if (!isFull()) {
            list[index] = value;
            index++;
            return true;
        }

     // un-comment this if you are working with data structures.
     cout << "\nArray Limit has been exceeded\n";
    return false;
}

int Stack::pop() const {
    int popped = list[index-1];
    list[index-1] = 0;
    index--;
    return popped;

}

Stack::~Stack()
{
    // Removing list after process is done
    delete[] list;

}

int main() {

    // Setting the size of the array
    Stack stack(1);

    // Creating a pointer for accurate lists
    Stack *st = &stack;

    // Adding value into the list
    st->push(10);

    // Removing the last value into the list
    st->pop();


    return 0;
}