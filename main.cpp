#include <iostream>
using namespace std;

#include "AllStruct.h"

void listTest() {
    SqList list;
    initList(list);
    for (int i = 0; i < 10; i++) {
        insertList(list, i, i);
    }
    cout << "List: ";
    for (int i = 0; i < list.length; i++) {
        int k = findElem(list, i);
        if (k == -1) continue;
        cout << k;
    }
    cout << endl;
    int e;
    deleteListElem(list, 2, e);
    cout << "删除下标2的元素后，List: ";
    for (int i = 0; i < 10; i++) {
        int k = findElem(list, i);
        cout << k << " ";
    }
}

void stackTest() {
    SqStack<int> stack{};
    initStack(stack);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    for (int i = 0; i < 3; i++) {
        int p;
        pop(stack, p);
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
