//
// Created by 25415 on 2024/10/19.
//

#include "BiTree.h"
#include "Stack.h"
#include <iostream>
using namespace std;

void initBiTree(BiTree &t) {
    int data;
    cout<<"请输入二叉树结点值，0表示空结点：";
    cin >> data;
    if (data == 0) {
        t = nullptr;
    } else {
        t = new BTNode();
        t->data = data;
        initBiTree(t->lchild);
        initBiTree(t->rchild);
    }
}

void visit(BTNode *b) {
    cout << b->data;
}

void preOrder(BTNode *b) {
    if (b != nullptr) {
        visit(b);
        preOrder(b->lchild);
        preOrder(b->rchild);
    }
}

void preOrderNore(BTNode *b) {
    SqStack<BTNode *> stack;
    initStack(stack);
    BTNode *p = b;
    while (p != nullptr || !isEmpty(stack)) {
        if (p) {
            visit(p);
            Push(stack, p);
        } else {
            Pop(stack, p);
            p = p->rchild;
        }
    }
}

void inOrder(BTNode *b) {
    if (b != nullptr) {
        inOrder(b->lchild);
        visit(b);
        inOrder(b->rchild);
    }
}

void inOrderNore(BTNode *b) {
    SqStack<BTNode *> stack;
    initStack(stack);
    BTNode *p = b;
    while (p != nullptr || !isEmpty(stack)) {
        if (p) {
            Push(stack, p);
        } else {
            visit(p);
            Pop(stack, p);
            p = p->rchild;
        }
    }
}

void postOrder(BTNode *b) {
    if (b != nullptr) {
        inOrder(b->lchild);
        inOrder(b->rchild);
        visit(b);
    }
}

void postOrderNore(BTNode *b) {
}
