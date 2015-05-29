#include <cstdlib>
#include "sortalgotithms.h"
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
using namespace chrono;

void ShowVector (int *v, int size) {
    cout << "[";
    for (register int i = 0; i < size - 1; ++i) {
        cout << v[i] << " ";
    }
    cout << v[size - 1] << "]" << endl;
}

double sort(int *v, int size, int* (*funtion)(int*, const int)) {
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    funtion(v, size);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    return time_span.count();
}

int main() {
    int tam = 1e5; // tam = 10^7
    srand(time(NULL));
    int *v;
    v = (int*) malloc(sizeof(int) * tam);
    if (v == nullptr) {
        cout << "Without memory!" << endl;
        exit(EXIT_FAILURE);
    }

    for (register int i = 0; i < tam; i++)
        v[i] = rand();

    cout << "Sorting... Please Wait!" << endl;
    double duration = sort(v, tam, SortAlgotithms::QuickSort);
    cout << "End... Duration: " << duration << " seconds." << endl;

    free(v);
    return 0;
}

