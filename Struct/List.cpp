//
// Created by 25415 on 2024/10/20.
//

#include "List.h"

void initList(SqList &l) {
    l.length = 0;
}

int insertList(SqList &l, int p, int e) {
    if (l.length == MAXSIZE || p < 0)
        return -1;
    for (int i = l.length; i > p; i--) {
        l.data[i] = l.data[i - 1];
    }
    l.data[p] = e;
    l.length++;
    return 0;
}

int findElem(SqList l, int e) {
    for (int i = 0; i < l.length; i++) {
        if (l.data[i] == e)
            return i;
    }
    return -1;
}

int deleteListElem(SqList &l, int p, int &e) {
    if (p < 0 || p >= l.length) return -1;
    e = l.data[p];
    for (int i = p; i < l.length; i++) {
        l.data[i] = l.data[i + 1];
    }
    l.length--;
    return 0;
}
