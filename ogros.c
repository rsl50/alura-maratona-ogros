#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscaBin (int ini, int end, int val, int v[]) {
	if (ini == end) return ini;
	
	/*if (ini < end) {
		if (v[ini] == val) return ini;
		else return -1;	
	}*/
	
	int meio = (ini + end) / 2;
	
	if (v[meio] <= val) return buscaBin(meio + 1, end, val, v);
	//else if (v[meio] == val) return buscaBin(ini, meio, val, v);
	//else return buscaBin(ini, meio - 1, val, v);
	else return buscaBin(ini, meio, val, v);
}

int main () {
	
	FILE *fp;
	fp = freopen("input2.txt", "r", stdin);
	
	if (fp != NULL) {
		int qtd_faixas = 0;
		int qtd_ogros = 0;
		
		int buf[12];
		fgets(buf, 12, fp);
		printf("%s\n", buf);
		sscanf(buf, "%d %d", &qtd_faixas, &qtd_ogros);
		printf("qtd faixas %d - qtd ogros %d\n", qtd_faixas, qtd_ogros);
		
		int i = 0;
		int faixas[qtd_faixas - 1];
		int premios[qtd_faixas];
		int forca_ogro[qtd_ogros];
		char *pEnd;
		
		fgets(buf, 12, fp);
		printf("%s\n", buf);
		for (i = 0; i < qtd_faixas - 1; i++) {
			faixas[i] = strtol(buf, &pEnd, 10);
			memcpy(buf, &pEnd[1], strlen(pEnd));
			printf("%d ", faixas[i]);
		}
		printf("\n");
		
		pEnd = NULL;
		fgets(buf, 12, fp);
		printf("%s\n", buf);
		for (i = 0; i < qtd_faixas; i++) {
			premios[i] = strtol(buf, &pEnd, 10);
			memcpy(buf, &pEnd[1], strlen(pEnd));	
			printf("%d ", premios[i]);		
		}
		printf("\n");
	
		pEnd = NULL;
		fgets(buf, 12, fp);
		printf("-%s\n", buf);
		for (i = 0; i < qtd_ogros; i++) {
			forca_ogro[i] = strtol(buf, &pEnd, 10);
			memcpy(buf, &pEnd[1], strlen(pEnd));
			printf("%d ", forca_ogro[i]);				
		}
		printf("\n");
		
		for (i = 0; i < qtd_ogros; i++) {
			int premio_ogro = buscaBin(0, qtd_ogros, forca_ogro[i], faixas);
			printf("%d ", premios[premio_ogro]);
		}
		
		printf("\n");
		
		//int rog1 = buscaBin(0, qtd_ogros, forca_ogro[0], faixas);
		//printf("premio %d\n", premios[rog1]);
	}
	
	return (0);
}
