def partition(lista, a, b):
    pivor = a
    for pos in range(a, b+1):
        if lista[pos] < lista[pivor]:
            lista[pos], lista[pivor] = lista[pivor], lista[pos]
    return pivor


def quick_sort(lista, inicio, fim):
    if inicio < fim:
        pivor = partition(lista, inicio, fim)
        quick_sort(lista, inicio, pivor-1)
        quick_sort(lista, pivor+1, fim)
    return lista

