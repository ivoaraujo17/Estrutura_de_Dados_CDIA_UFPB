import queue

BRANCO = 0
CINZA = 1
PRETO = 2

class Graph:
    def __init__(self, n):
        self.n = n
        self.M = [[0 for _ in range(n)] for _ in range(n)]
        self.L = [[] for _ in range(n)]
        
        self.pai = [None for _ in range(n)]
        self.d = [-1 for _ in range(n)]
        self.cor = [BRANCO for _ in range(self.n)]

    def num_componentes_conexas(self):
        n_comp = 0
        for p in self.pai:
            if p == None:
                n_comp += 1
        return n_comp

    def bfs(self, source):
        self.cor[source] = CINZA
        self.d[source] = 0
        Q = queue.Queue()
        Q.put(source)
        
        while not Q.empty():
            u = Q.get()
            for v in self.L[u]:
                if self.cor[v] == BRANCO:
                    self.cor[v] = CINZA
                    self.d[v] = self.d[u] + 1
                    self.pai[v] = u
                    Q.put(v)
            self.cor[u] = PRETO
        
        print(self.d)
        print(self.pai)

    def dfs(self):
        for u in range(self.n):
            if self.cor[u] == BRANCO:
                self.dfs_iter(u)
    
    def dfs_iter(self, u):
        S = []
        S.append(u)
        
        while S:
            u = S.pop()
            if self.cor[u] == BRANCO:
                self.cor[u] = CINZA
                for v in self.L[u]:
                    if self.cor[v] == BRANCO:
                        self.pai[v] = u
                        S.append(v)
            else:
                self.cor[u] = PRETO

    def dfs_visit(self, u):
        S = []
        S.append(u)
        
        while S:
            u = S[-1]
            if self.cor[u] == BRANCO:
                self.cor[u] = CINZA
                for v in self.L[u]:
                    if self.cor[v] == BRANCO:
                        self.pai[v] = u
                        S.append(v)
            else:
                self.cor[u] = PRETO
                S.pop()

    def print_grafo(self):
        print("Matriz de adjacências:")
        for i in range(self.n):
            print(self.M[i])
            
        print("\nLista de adjacências:")
        for i in range(self.n):
            print(f"Vértice {i}: {self.L[i]}")
        
        print("\nInformações dos vértices:")
        for i in range(self.n):
            print(f"Vértice {i}: pai={self.pai[i]}, d={self.d[i]}, cor={self.cor[i]}")
