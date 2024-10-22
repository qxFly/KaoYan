//
// Created by 25415 on 2024/10/19.
//

#ifndef BITREE_H
#define BITREE_H

//二叉树的存储结构分为顺序存储和链式存储，顺序存储适合存储完全二叉树，这里我们只关注链式存储
typedef struct BTNode {
    int data;
    BTNode *lchild;
    BTNode *rchild; //嵌套定义
} *BiTree, BTNode;

void initBiTree(BiTree &t); //初始化二叉树

void visit(BTNode *b); //访问结点

void preOrder(BTNode *b); //先序遍历

void preOrderNore(BTNode *b); //先序遍历

void inOrder(BTNode *b); //中序遍历

void inOrderNore(BTNode *b); //中序遍历

void postOrder(BTNode *b); //后序遍历

void postOrderNore(BTNode *b); //后序遍历

#endif //BITREE_H
