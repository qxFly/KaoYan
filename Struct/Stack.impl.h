//
// Created by 25415 on 2024/10/19.
//
#ifndef STACK_IMPL_H
#define STACK_IMPL_H
//1.初始化栈
template<typename T>
void initStack(SqStack<T>  &stack) {
    stack.top = -1;
}

//2.判断栈空 空返回-1 否则返回0
template<typename T>
int isEmpty(SqStack<T>  &stack) {
    if (stack.top == -1) {
        return -1;
    }
    return 0;
}

//3.入栈,栈满返回-1 否则返回0
template<typename T>
int push(SqStack<T> &stack, T data) {
    if (stack.top == MAXSIZE - 1) return -1;
    stack.data[++stack.top] = data;
    return 0;
}

//4.出栈,栈空返回-1 否则返回0
template<typename T>
int pop(SqStack<T> &stack, T &data) {
    if (stack.top == -1) return -1;
    data = stack.data[stack.top--];
    return 0;
}
#endif //STACK_IMPL_H