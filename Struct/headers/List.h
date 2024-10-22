//
// Created by 25415 on 2024/10/20.
//

#ifndef LIST_H
#define LIST_H
#define MAXSIZE 100

typedef struct SqList {
    int data[MAXSIZE];
    int length;
} SqList;

/**
 * 初始化顺序表
 * @param l
 */
void initList(SqList &l);

/**
 * 在指定位置插入元素 p为下标 e为元素，-1为错误，0为成功
 * @param l
 * @param p
 * @param e
 * @return
 */
int insertList(SqList &l, int p, int e);

/**
 * 查找元素 e, 返回下标，-1为错误，0为成功
 * @param l
 * @param e
 * @return
 */
int findElem(SqList l, int e);

/**
 * 删除下标为p的元素， e为返回值，-1为错误，0为成功
 * @param l
 * @param p
 * @param e
 * @return
 */
int deleteListElem(SqList &l, int p, int &e);
#endif //LIST_H
