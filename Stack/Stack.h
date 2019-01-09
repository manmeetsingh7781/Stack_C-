//
// Created by manme on 1/9/2019.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

// Static because we are using all over the C++ files
static int index = 0;

class Stack
{

public:

    // Blue print of What our class is going to have
    Stack(int list_size);

    // De-constructor
    ~Stack();

    // Add value into the list
    bool push(int value) const;

    // checking the quantity if the list if full or not
    bool isFull() const;

    // removing last element from the list
    int pop() const;


public:

    // The size of our list
    int const size;

    // Declaring list in the Heap
    int *list = new int[size];
};

