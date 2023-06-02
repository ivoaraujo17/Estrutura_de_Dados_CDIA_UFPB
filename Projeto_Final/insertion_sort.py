def insertion_sort(array):
    tam = len(array)
    for pos_pivor in range(1, tam):
        min = array[pos_pivor]
        j = pos_pivor
        while j > 0 and array[j-1] > min:
            array[j] = array[j-1]
            j -= 1
        array[j] = min
    return array
