//
// Created by 25415 on 2024/10/22.
//

#ifndef SQLIST_IMPL_H
#define SQLIST_IMPL_H
/**
 *  1 2 3 4 5   i为逻辑位置从 1 开始，
 *  0 1 2 3 4   数组位置为 i - 1
 */

//1. 初始化
template<typename T>
void initList(SqList<T> &list) {
    list.length = 0;
}

//2. 插入
template<typename T>
bool ListInsert(SqList<T> &list, int i, T e) {
    if (i < 1 || i > list.length + 1) return false;
    if (list.length >= MAXSIZE) return false;
    for (int j = list.length; j >= i; j--) {
        list.data[j] = list.data[j - 1];
    }
    list.data[i - 1] = e;
    ++list.length;
    return true;
}

//3. 删除
template<typename T>
bool ListDelete(SqList<T> &list, int i, T &e) {
    if (i < 1 || i > list.length) return false;
    e = list.data[i - 1];
    for (int j = i; j < list.length; j++) {
        list.data[j - 1] = list.data[j];
    }
    --list.length;
    return true;
}

//4. 按位查找
template<typename T>
int LocateElem(SqList<T> list, T e) {
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] == e) return i + 1;
    }
    return 0;
}

#endif // SQLIST_IMPL_H
