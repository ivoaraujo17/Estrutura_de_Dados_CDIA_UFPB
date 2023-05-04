from implementacao_grafo import Grafo

def load_from(fileName):
    f = open(fileName, 'r')
    n = int(f.readline())
    
    g = Grafo(n)
    
    l = 0
    for line in f:
        line.strip()
        numeros = line.split("\t")
        #print(numeros)
        c = 0
        for _id in range(g.vertices):
            g.adicionar_aresta(c, l)
            c += 1
        l += 1
    return g



gr = load_from("grafo/pcv10.txt")
gr.bfs(1, 8)
gr.dfs(1, 8)
gr.print_info()


