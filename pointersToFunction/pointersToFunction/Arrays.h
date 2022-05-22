#pragma once

typedef int (*action)(int item);

int print(int item);

int multi2(int item);

void scanArray(int* arr, int n, action act);

typedef int (*ptrCmp)(void* x, void* y);

int cmpStr(void* str1, void* str2);

int cmpByY(void* p1, void* p2);

void bubbleSort(void* arr, int len, int size, ptrCmp cmp);