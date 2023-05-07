
BRANCO = 0
CINZA = 1
PRETO = 2

class graph:
    def __init__(self, qtd_nos) -> None:
        self.qtd_nos = qtd_nos
        # matriz com a distancia entre todos os nós
        self.matriz = [[0 for linha in range(qtd_nos)] for coluna in range(qtd_nos)]
        # lista onde cada posicao representa um nó, e que terá uma
        # lista de quais nos ele está conectado
        self.l_adjacencias = [[] for no in range(qtd_nos)]
        # lista com os pais de cada nó
        self.l_pais = [None for no in range(qtd_nos)]
        # lista de cor atual de cada nó
        self.l_cor = [BRANCO for no in range(qtd_nos)]
    
    def num_componentes_conexas(self):
        n_comp = 0
        for no in self.l_pais:
            if no == None:
                n_comp += 1
        return n_comp

    def visitar(self):
        for no in range(self.qtd_nos):
            if self.l_cor[no] == BRANCO:
                self.tratar_no(no)
    
    def tratar_no(self, no):
        print(f"\nTratando no: {no}, setando cor cinza")
        self.l_cor[no] = CINZA
        print(f"Lista de vizinhos: {self.l_adjacencias[no]}\n")
        for vizinho in self.l_adjacencias[no]:
            if self.l_cor[vizinho] == BRANCO:
                self.l_pais[vizinho] = no
                print(self.l_pais[vizinho])
                self.tratar_no(vizinho)
        print(f"\nFinalizando o tratamento do no: {no}")
        self.l_cor[no] = PRETO


def load_from(fileName):
    f = open(fileName, 'r')
    n = int(f.readline())
    
    g = graph(n)
    
    l = 0
    for line in f:
        line.strip()
        numeros = line.split("\t")
        #print(numeros)
        c = 0
        for no in range(g.qtd_nos):
            i = numeros[no]
            g.matriz[l][c] = int(i)
            if(g.matriz[l][c] > 0):
                g.l_adjacencias[l].append(c)
            
            c += 1
        l += 1
    return g

gr = load_from("grafo/pcv4.txt")
gr.visitar()
print(f"\nPais: {gr.l_pais}")
print(f"\nCores: {gr.l_cor}")