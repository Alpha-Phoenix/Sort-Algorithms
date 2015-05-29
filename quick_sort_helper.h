#ifndef QSORTHELPER_H
#define QSORTHELPER_H

int* qsort (int *v, const int beg, const int end) {
    register int i = beg;
    register int j = end;
    register int pivot = v[(i + j) / 2];

    while (i < j) {
        while (v[i] < pivot && i <  end)
            i++;

        while (v[j] > pivot && j > beg)
            j--;

        if (i <= j) {
            int swap = v[i];
            v[i] = v[j];
            v[j] = swap;
            i++;
            j--;
        }
    }

    if (i < end)
        qsort(v, i, end);
    if (j > beg)
        qsort(v, beg, j);

    return v;
}

#endif // QSORTHELPER_H
