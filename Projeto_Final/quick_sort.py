def quick_sort(lista, inicio, fim):
    if inicio < fim:
        pivo = partition(lista, inicio, fim)  # partition retorna um inteiro, que será o pivo para as proximas chamadas
        quick_sort(lista, inicio, pivo - 1)
        quick_sort(lista, pivo + 1, fim)

    return lista


def partition(lista, inicio, fim):
    x = lista[inicio]  # Valor inicial da lista
    a = inicio + 1
    b = fim
    while True:
        while lista[b] > x:
            # Percorrendo o vetor a partir do final, procurando o primeiro
            # valor quefor menor que o inicial
            b -= 1
        while lista[a] < x:
            # Percorrendo o vetor a partir da segunga casa,
            # procurando o primeiro valor que for maior que o inicial
            a += 1
        if a <= b:
            # Caso a (inteiro) seja maior que b (inteiro), troco os elementos
            # correspondentes do vetor e inicia-se uma nova iteração
            lista[a], lista[b] = lista[b], lista[a]
        else:
            # Caso contrário, troco o valor inicial pelo valor correspondente
            # a posição b e retorno b. Desse modo, o elemento inicial x estará ordenado
            lista[inicio], lista[b] = lista[b], lista[inicio]
            return b
