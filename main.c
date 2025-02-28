#include <stdio.h>

// funções e procedimentos

int soma (int n1, int n2);
int subtracao (int n1, int n2);
int multiplicacao (int n1, int n2);
float divisao (int n1, int n2);

void mensagem_menu ();


int main () {
	
	char op;
	int numero1, numero2;
	
	
	do {
		
		mensagem_menu();
		printf("$ > "); scanf("%c", &op);
		
		while(getchar() != '\n'); // limpando o buffer do teclado
		
		switch (op) {
			case 'm':
				printf("Multiplos calculos\n");
				break;
			case 'u':
				printf("um calculo\n");
				break;
			default:
				printf("fim!\n");
		}
		
		
		if (op != 'm' && op != 'u')
			break;
	} while (1);

	
	
	return 0;
}



// funções e procedimentos


int soma (int n1, int n2) {
	return n1 + n2;
}


int subtracao (int n1, int n2){
	return n1 - n2;
}


int multiplicacao (int n1, int n2){
	return n1 * n2;
}


float divisao (int n1, int n2){
	return (float) n1 / n2;
}


void mensagem_menu () {
	puts("Bem-vindo ao CalcMaster!");
	putchar('\n');
	puts("M - multiplos calculos\nU - para um calculo");
	putchar('\n');
}