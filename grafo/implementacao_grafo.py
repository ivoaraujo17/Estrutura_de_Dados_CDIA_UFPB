import numpy as np
#import pandas as pd
class Grafo:
    def __init__(self, num_vertices):
        self.vertices = num_vertices
        self.grafo = np.zeros((num_vertices, num_vertices))
        
    def reset(self):
        self.visitados = [False] * self.vertices
        self.pilha = []
        self.caminho = []

    def print_info(self):
        for i in self.grafo:
            for j in i:
                print(j, end=' ')
            print()
    
    def adicionar_aresta(self, u, v, peso=1):
        self.grafo[u-1][v-1] = peso
        self.grafo[v-1][u-1] = peso

    def bfs(self, vertice_inicial, vertice_final):
        self.reset()
        self.caminho.append(vertice_inicial)
        self.visitados[vertice_inicial-1] = True
        self.pilha.append(vertice_inicial-1)
        while len(self.pilha) > 0:
            for i in range(self.vertices):
                if self.grafo[self.pilha[0]][i] > 0 and not self.visitados[i]:
                    self.caminho.append(i+1)
                    self.visitados[i] = True
                    self.pilha.append(i)
            self.pilha.pop(0)
        if not self.visitados[vertice_final-1]:
            print('Não há caminho entre os vértices')
        else:
            print(self.caminho)

    def dfs(self, vertice_inicial, vertice_final):
        self.reset()
        self.caminho.append(vertice_inicial)
        self.visitados[vertice_inicial-1] = True
        self.pilha.append(vertice_inicial-1)
        while len(self.pilha) > 0:
            for i in range(self.vertices):
                if self.grafo[self.pilha[-1]][i] > 0 and not self.visitados[i]:
                    self.caminho.append(i+1)
                    self.visitados[i] = True
                    self.pilha.append(i)
                    break
                elif i == self.vertices-1:
                    self.pilha.pop()
            if self.pilha[-1] == vertice_final-1:
                break
        if not self.visitados[vertice_final-1]:
            print('Não há caminho entre os vértices')
        else:
            print(self.caminho)
