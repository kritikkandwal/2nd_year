#include<iostream>
using namespace std;

struct stack{
    int capacity;
    int *arr;
    int top;
    stack(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        this->top=-1;
    }
};

void push(int data){
    if(this->top==this->capacity)
}