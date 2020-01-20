Curso de Maratona de programação: Algoritmos para sua primeira competição
---------
<img src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" data-canonical-src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" width="250" height="250" />

https://cursos.alura.com.br/course/maratona-de-programacao

## Temas abordados
* Começando o treinamento
* Ordenação
* Recursão
* Busca binária
* Introdução à Programação dinâmica


## Ogros

https://olimpiada.ic.unicamp.br/pratique/p2/2008/f1/ogros/

Ogros marcianos, como todos sabem, são extremamente fortes. Numa feira de circo marciano, ogros são chamados para bater um martelo num aparelho que mede sua força. O ogro ganha um determinado prêmio dependendo da faixa de força que alcançou (por exemplo, se a força alcançada foi entre 0 e 5, ganha 10 pontos. Se for entre 6 e 10, ganha 30). São possíveis *N* premiações, para *N* faixas de força alcançadas.

Você deve escrever um programa que recebe quais são as faixas de forças e suas respectivas premiações. Em seguida, o programa recebe a força alcançada por M ogros, e deve calcular quanto cada ogro recebeu de premiação.


**Entrada**

A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado). A primeira linha contém dois inteiros N e M (2 ≤ N ≤ 10.000, 1 ≤ M ≤ 10.000), representando respectivamente o número de faixas de premiações e o número de ogros cuja força foi medida.

A segunda linha de um caso de teste contem N - 1 inteiros Ai (Ai-1 < Ai < Ai+1, 1 ≤ Ai ≤ 1.000.000.000). A primeira faixa de premiação é dada por forças menores que A1. A i-ésima faixa de premiação é composta das forças que são maiores ou iguais a Ai-1 e menores que Ai . A n-ésima pontuação é composta das forças maiores ou iguais a AN-1.

A terceira linha contem N inteiros Fi (1 ≤ Fi ≤ 1.000.000.000, Fi-1 < Fi < Fi+1) em ordem crescente, representando a premiação de cada faixa de premiação, nesta ordem.

A quarta e última linha de um caso de teste contêm M inteiros Oi (1 ≤ Oi ≤ 1.000.000.000), um para cada ogro, representando qual força cada ogro alcançou.


**Saída**

Seu programa deve imprimir, na saída padrão, uma única linha, contendo M inteiros, um para cada ogro, na ordem dada pela entrada, representando qual premiação cada ogro recebeu pela sua força alcançada.


**Exemplos**

```
Entrada:
3 4
3 5
1 4 7
2 3 9 4

Saída:
1 4 7 4

Entrada:
2 10
4
5 200
1 3 4 5 5 6 2 1 3 4

Saída:
5 5 200 200 200 200 5 5 5 200

Entrada:
10 1
1 2 3 4 5 6 7 8 9
1 10 100 101 102 103 104 105 106 200
5

Saída:
103
````
