#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://github.com/alura-cursos/maratonaprogramacao/blob/aula4-exc/ogros.cpp
int buscaBin (int ini, int end, int val, int v[]) {
	if (ini == end) return ini;
	
	int meio = (ini + end) / 2;
	
	if (v[meio] <= val) return buscaBin(meio + 1, end, val, v);
	else return buscaBin(ini, meio, val, v);
}

int main () {
	
	FILE *fp;
	fp = freopen("input1.txt", "r", stdin);
	
	if (fp != NULL) {
		int qtd_faixas = 0;
		int qtd_ogros = 0;
		
		char buf[10009];
		fgets(buf, 10009, fp);
		sscanf(buf, "%d %d", &qtd_faixas, &qtd_ogros);
		
		int i = 0;
		int faixas[qtd_faixas - 1];
		int premios[qtd_faixas];
		int forca_ogro[qtd_ogros];
		char *pEnd;
		
		fgets(buf, 10009, fp);
		for (i = 0; i < qtd_faixas - 1; i++) {
			faixas[i] = strtol(buf, &pEnd, 10);
			memcpy(buf, &pEnd[1], strlen(pEnd));
		}
		
		faixas[qtd_faixas - 1] = 2000000000;
		
		pEnd = NULL;
		fgets(buf, 10009, fp);
		for (i = 0; i < qtd_faixas; i++) {
			premios[i] = strtol(buf, &pEnd, 10);
			memcpy(buf, &pEnd[1], strlen(pEnd));
		}
	
		pEnd = NULL;
		fgets(buf, 10009, fp);
		for (i = 0; i < qtd_ogros; i++) {
			forca_ogro[i] = strtol(buf, &pEnd, 10);
			memcpy(buf, &pEnd[1], strlen(pEnd));		
		}
		
		for (i = 0; i < qtd_ogros; i++) {
			int premio_ogro = buscaBin(0, qtd_faixas - 1, forca_ogro[i], faixas);
			printf("%d ", premios[premio_ogro]);
		}		
		printf("\n");
	}
	
	return (0);
}
