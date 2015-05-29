#ifndef MERGESORTHELPER_H
#define MERGESORTHELPER_H

#include <cstdlib>
#include <memory.h>

void merge(int *v, int size) {

    int middle = size / 2; // 7 8 (1) 2 3    middle = 2
	                       //      ^
    int v1Size = middle;   // v1Size = 2
    int v2Size = size - v1Size; // v2Size = 3

    int *v2 = v + middle; // 7 8 1 2 3  v2 aponta para 1 = v[2]
						  //     ^

	//								             		   v v v
	// Nesse ponto temos "2" vetores  7 8 <- v(original)   1 2 3 <- v2
	//              				  ^ ^

    int *temp = new int[size];
    if (temp == nullptr)
        exit(EXIT_FAILURE);

    register int i = 0, j = 0, k = 0;

    while (i < v1Size && j < v2Size) {
        if (v[i] <= v2[j])
            temp[k] = v[i++];
        else
            temp[k] = v2[j++];
        k++;
    }

    if (i == v1Size) {
        while (j < v2Size)
            temp[k++] = v2[j++];
    } else {
        while (i < v1Size)
            temp[k++] = v[i++];
    }

    for (register int i = 0; i < size; i++)
        v[i] = temp[i];

    delete [] temp;
}

#endif // MERGESORTHELPER_H
