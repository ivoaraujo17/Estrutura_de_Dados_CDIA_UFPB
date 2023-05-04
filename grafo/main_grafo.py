# -*- coding: utf-8 -*-
# -*- coding: utf-8 -*-
from implementacao_grafo import Graph

def load_from(fileName):
    f = open(fileName, 'r')
    n = int(f.readline())
    
    g = Graph(n)
    
    l = 0
    for line in f:
        line.strip()
        numeros = line.split("\t")
        #print(numeros)
        c = 0
        for no in range(g.n):
            i = numeros[no]
            g.M[l][c] = int(i)
            if(g.M[l][c] > 0):
                g.L[l].append(c)
            
            c += 1
        l += 1
    return g

gr = load_from("grafo/pcv4.txt")
gr.dfs()
gr.print_grafo()
gr.bfs(1)
gr.print_grafo()
print("Numero de Componentes Conexas: " + str(gr.num_componentes_conexas()))
