// Compilar gcc -std=c99 -Wall ppp.c qqq.c -o xxx

#include "lista.c"

int main(){
	
	Graph H;
	vertex v, w, A, V;

	printf("Qtd de Vertices: ");
	scanf("%d", &V);
	H = GRAPHinit(V);
	
	printf("Qtd de Arcos: ");
	scanf("%d", &A);
	for (int i = 0; i < A; i++){
		printf("Insira o Arco %d (v-w): ", i+1 );
		scanf("%d-%d", &v, &w);
		GRAPHinsertArc(H, v, w);
	}

	GRAPHshow(H);

	return 0;
}