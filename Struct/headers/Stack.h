//
// Created by 25415 on 2024/10/19.
//

#ifndef STACK_H
#define STACK_H

#define MAXSIZE 100

template<typename T>
struct SqStack {
    T data[MAXSIZE]; //栈数据
    int top; //栈顶指针
};

//1.初始化栈
template<typename T>
void initStack(SqStack<T> &stack);

//2.判断栈空 空返回-1 否则返回0
template<typename T>
bool isEmpty(SqStack<T> &stack);

//3.入栈
template<typename T>
bool Push(SqStack<T> &stack, T data);

//4.出栈
template<typename T>
bool Pop(SqStack<T> &stack, T &data);

//5.取栈顶元素
template<typename T>
bool GetTop(SqStack<T> stack, T &data);

#include"../Stack.impl.h"
#endif //STACK_H
