#include <iostream>
using namespace std;

#include "AllStruct.h"

void listTest() {
    SqList<int> list;
    initList(list);
    for (int i = 1; i < 10; i++) {
        ListInsert(list, i, i);
    }
    cout << "É¾³ýÇ°£º" << endl;
    for (int i = 1; i < 10; i++) {
        cout << LocateElem(list, i);
    }
    int e;
    ListDelete(list, 3, e);
    cout << endl << "É¾³ýÎ»ÖÃi = 3ºó£º" << endl;
    for (int i = 1; i < 10; i++) {
        cout << LocateElem(list, i);
    }
}

void stackTest() {
    SqStack<int> stack;
    initStack(stack);
    Push(stack, 1);
    Push(stack, 2);
    Push(stack, 3);
    for (int i = 0; i < 3; i++) {
        int p;
        Pop(stack, p);
        cout << p << endl;
    }
}

void btreeTest() {
    BiTree tree;
    initBiTree(tree);
    inOrder(tree);
}

int main() {
    listTest();
    return 0;
}
