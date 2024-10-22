//
// Created by 25415 on 2024/10/22.
//

#ifndef SQLIST_H
#define SQLIST_H

//静态数组
template<typename T>
struct SqList {
    T data[MAXSIZE];
    int length;
};

//1. 初始化
template<typename T>
void initList(SqList<T> &list);

//2. 插入
template<typename T>
bool ListInsert(SqList<T> &list, int i, T e);

//3. 删除
template<typename T>
bool ListDelete(SqList<T> &list, int i, T &e);

//4. 按值查找
template<typename T>
int LocateElem(SqList<T> list, T e);


#include "../SqList.impl.h"

#endif //SQLIST_H
