#ifndef SORTALGOTITHMS_H
#define SORTALGOTITHMS_H


class SortAlgotithms
{
public:
    /*!
    *   \brief BubbleSort - Este algoritmo ordena um vetor de inteiros de forma crescente.
    *   Os elementos são comparados aos pares indo de 0 até n-1 (loop interno).
    *   São feitas n-1 comparações para cada iteração do loop mais externo.
    *
    *   Complexidades de tempo:
    *       Pior caso: O(n²)
    *       Caso médio: O(n²)
    *       Melhor caso: O(n)
    *
    *   Complexidade de espaço:
    *       Pior caso: O(1)
    *
    *   Estabilidade:
    *       Estável
    *
    *   Exemplo:
    *   3 2 1 -> Vetor original
    *
    *   (3) 2  1 -> For externo (0)
    *      (2) 3  1  -> For interno (0) -> Troca 1
    *       2 (1) 3  -> For interno (1) -> Troca 2
    *
    *    2 (1) 3 -> For externo (1)
    *      (1) 2  3   -> For interno (0) -> Troca 3
    *       1 (2) 3   -> For interno (1)
    *
    *   1 2 3 -> Vetor final
    *
    *   Obs: os elementos em parenteses são os quais os índices i e j estão referenciando
    */
    static int* BubbleSort (int *v, const int size);

    /*!
    *   \brief SelectionSort - Este algoritmo ordena um vetor de inteiros de forma crescente.
    *   Os elementos são inseridos em suas respectivas posições no vetor.
    *   A cada iteração do loop interno o menor elemento do restante do vetor é selecionado (SELECTION sort).
    *   Esse elemento irá para aposição i do vetor, em que i é o índice atual do for externo
    *
    *   Complexidades de tempo:
    *       Pior caso: O(n²)
    *       Caso médio: O(n²)
    *       Melhor caso: O(n²)
    *
    *   Complexidade de espaço:
    *       Pior caso: O(1)
    *
    *   Estabilidade:
    *       Instável
    *
    *   Exemplo:
    *   3 2 1 -> Vetor original
    *
    *   (3) 2  1 -> For externo (0)
    *      (3) 2  1  -> For interno (0)
    *       3 (2) 1  -> For interno (1)
    *       3  2 (1) -> For interno (2)
    *       3 (1) 2  -> For externo (0) -> Troca 1
    *      (1) 3  2  -> For externo (0) -> Troca 2
    *
    *   1 (3) 2 -> For externo (1)
    *      1 (3) 2  -> For interno (0)
    *      1  3 (2) -> For interno (1)
    *      1 (2) 3  -> For externo (1) -> Troca 1
    *
    *   1  2 (3) -> For externo (2)
    *       1  2 (3) -> For interno (0)
    *
    *   1 2 3 -> Vetor final
    */
    static int* SelectionSort (int *v, const int size);

    /*!
    *   \brief InsertionSort - Este algoritmo ordena um vetor de inteiros de forma crescente.
    *   O loop mais externo verifica se os elementos anteriores ao seu índice (de 0...i inclusive) estão ordenados.
    *   Se estiverem ele avança o índice e nenhuma troca é feita.
    *   Caso contrário ele pega o elemento seguinte (o que está desordenado) e vai retrocedendo-o até que o seu anterior seja menor ou igual a ele
    *   O processo anterior assemelha-se ao do bubble sort, porém com as comparações sendo feitas para trás
    *
    *   Complexidades de tempo:
    *       Pior caso: O(n²)
    *       Caso médio: O(n²)
    *       Melhor caso: O(n)
    *
    *   Complexidade de espaço:
    *       Pior caso: O(1)
    *
    *   Estabilidade:
    *       Estável
    *
    *   Exemplo:
    *   3 2 1 -> Vetor original
    *
    *   (3) 2  1 -> For externo (0)
    *      (2) 3  1 -> While (0) -> Troca 1
    *
    *   2 (3) 1  -> For externo (1)
    *      2 (1) 3 -> While (0) -> Troca 2
    *     (1) 2  3 -> While (1) -> Troca 3
    *
    *   1 2 3 -> Vetor final
    */
    static int* InsertionSort (int *v, const int size);

    /*!
    *   \brief QuickSort - Este algoritmo ordena um vetor de inteiros de forma crescente.
    *   O vetor é "quebrado" ao meio sucessivamente até se tornar indivisível
    *
    *   Paradigma: Dividir para conquistar
    *
    *   Complexidades de tempo:
    *       Pior caso: O(n²)
    *       Caso médio: O(n²)
    *       Melhor caso: O(n)
    *
    *   Complexidade de espaço:
    *       Pior caso: O(1)
    *
    *   Estabilidade:
    *       Estável
    *
    *   Exemplo:
    *   3 2 1 -> Vetor original
    *
    *   (3) 2  1 -> For externo (0)
    *      (2) 3  1 -> While (0) -> Troca 1
    *
    *   2 (3) 1  -> For externo (1)
    *      2 (1) 3 -> While (0) -> Troca 2
    *     (1) 2  3 -> While (1) -> Troca 3
    *
    *   1 2 3 -> Vetor final
    */
    static int* QuickSort (int *v, const int size);

    static int* MergeSort (int *v, const int size);

    SortAlgotithms(){}
    ~SortAlgotithms(){}
};

#endif // SORTALGOTITHMS_H
