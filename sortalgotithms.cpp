#include "sortalgotithms.h"
#include "quick_sort_helper.h"
#include "merge_sort_helper.h"

int* SortAlgotithms::BubbleSort(int *v, const int size) {
    bool stop = true;
	register int i, j;
    for (i = 0; i < size; ++i) {
		stop = true;
        for (j = 0; j < size - i; ++j) {
            if (v[j] > v[j+1]) {
                int swap = v[j];
                v[j] = v[j+1];
                v[j+1] = swap;
                stop = false;
            }
        }
        if (stop)
            break;
    }
    return v;
}

int* SortAlgotithms::SelectionSort(int *v, const int size) {
    for (register int i = 0; i < size; ++i) {
        int indexOfMinor = i;

        for (register int j = i; j < size; ++j)
            if (v[j] < v[indexOfMinor])
                indexOfMinor = j;

        int swap = v[i];
        v[i] = v[indexOfMinor];
        v[indexOfMinor] = swap;
    }
    return v;
}

int* SortAlgotithms::InsertionSort(int *v, const int size) {
    for (register int i = 0; i < size - 1; i++) {
        if (v[i + 1] < v[i]) {
            int j = i;
            while (v[j] > v[j+1]) {
                int swap = v[j+1];
                v[j+1] = v[j];
                v[j] = swap;
                j--;
                if (j < 0) break;
            }

        }
    }
    return v;
}

int* SortAlgotithms::QuickSort(int *v, const int size) {
    return QSortHelper(v, 0, size - 1);
}

int* SortAlgotithms::MergeSort(int *v, const int size) {
    if (size < 2)
        return v;

    int middle = size / 2;
    MergeSort(v, middle);
    MergeSort(v + middle, size - middle);
    merge(v, size);
    return v;
}
