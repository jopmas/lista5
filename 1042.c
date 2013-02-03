/*
  Introducao a Programacao - VERAO 2013 - IME - USP
  Prof . Neuton de Oliveira Braga Jr
  5 Lista de Exercicios

  URI Online Judge ô€€€ www. urionlinejudge .com. br
  Problema 1042

  Aluno 1: Gabriel Trajber
  Aluno 2: Joao Pedro
  Aluno 3: Cicrano de Tal

  Turma: Manha
*/

#include <stdio.h>

int main(){

  int a, b, c;

	printf(""); /*inserir a b c*/
	scanf("%d %d %d", &a, &b ,&c);
	printf("\n");

	/*verificacao das possibilidades*/
	if(a>b && a>c && b>c){
		printf("%d \n%d \n%d", c, b, a);

	}else if(c>b && c>a && b>a){
		printf("%d \n%d \n%d", a, b, c);
	}else if(a>c && a>b && c>b){
		printf("%d \n%d \n%d", b, c, a);
	}else if(c>a && c>b && a>b){
		printf("%d \n%d \n%d", b, a, c);

	}else if(b>a && b>c && a>c){
		printf("%d \n%d \n%d", c, a, b);

	}else if(b>c && b>a && c>a){
		printf("%d \n%d \n%d", a, c, b);
	}
	printf("\n\n");

	printf("%d \n%d \n%d",a ,b, c);
	return 0;
}
