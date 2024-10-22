//
// Created by 25415 on 2024/10/19.
//
#ifndef STACK_IMPL_H
#define STACK_IMPL_H
//1.初始化栈
template<typename T>
void initStack(SqStack<T> &stack) {
    stack.top = -1;
}

//2.判断栈空 空返回-1 否则返回0
template<typename T>
bool isEmpty(SqStack<T> &stack) {
    if (stack.top == -1) return false;
    return true;
}

//3.入栈,栈满返回-1 否则返回0
template<typename T>
bool Push(SqStack<T> &stack, T data) {
    if (stack.top == MAXSIZE - 1) return false;
    stack.data[++stack.top] = data;
    return true;
}

//4.出栈,栈空返回-1 否则返回0
template<typename T>
bool Pop(SqStack<T> &stack, T &data) {
    if (stack.top == -1) return false;
    data = stack.data[stack.top--];
    return true;
}

//5.取栈顶元素
template<typename T>
bool GetTop(SqStack<T> stack, T &data) {
    if (stack.top == -1) return false;
    data = stack.data[stack.top];
    return true;
}
#endif //STACK_IMPL_H
