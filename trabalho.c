#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Perguntas
	char *pergunta[5][5];
	char pergunta1[] = "1) Faça um programa C para ler dois valores e imprimir a soma dos mesmos.";
	char pergunta2[] = "2) Faça um programa C para ler dois valores e imprimir a multiplicação dos mesmos.";
	char pergunta3[] = "3) Faça um programa C para ler três valores e imprimir a soma dos mesmos.";
	char pergunta4[] = "4) Faça um programa C para ler um valor em quilogramas (Kg) e imprimir o equivalente em gramas (g).";
	char pergunta5[] = "5) Faça um programa C para ler um valor e imprimir o quadrado deste número.";
	char pergunta6[] = "1) Faça um programa C para entrar com uma distância (Km), o tempo de viagem(Horas) e dizer se a velocidade média foi superior ao limite (80 Km/h) ou não.";
	char pergunta7[] = "2) Faça um programa C para ler a temperatura de uma pessoa e exibir a mensagem ESTÁ COM FEBRE ou ESTÁ NORMAL. Considere o valor base como 36.5.";
	char pergunta8[] = "3) Faça um programa C para entrar com um número e dizer se o mesmo é par ou ímpar.";
	char pergunta9[] = "4) Faça um programa C para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).";
	char pergunta10[] = "5) Faça um programa C para ler dois valores e imprimir “EM ORDEM” caso o primeiro seja menor que o segundo e “FORA DE ORDEM” no caso contrário.\n";
	char pergunta11[] = "1) Faça um programa C que dados três valores X, Y, Z, verifique se eles podem ser os comprimentos dos lados de um\n"
	                        "triângulo; se forem, escrever uma mensagem informando se é um triângulo equilátero, isósceles ou escaleno.\n"
                            "Dicas: O comprimento de um lado do triângulo é sempre menor do que a soma dos outros dois.\n"
                            "Eqüilátero: Todos lados iguais\n"
                            "Isósceles: Dois lados iguais\n"
                            "Escaleno: Todos os lados diferentes\n";
	char pergunta12[] = "2) Uma empresa vai pagar um bônus de fim-de-ano aos seus funcionários. Faça um programa C\n"
                             "para ler o salário de um funcionário (em reais) e seu tempo de trabalho na empresa (em anos), e\n"
                             "depois imprimir este salário com um bônus, de acordo com os critérios abaixo:\n"
                             "Para salários até R$500,00 inclusive - bônus de 15%\n"
                             "Para salários entre R$500,00 e R$1000,00 inclusive - bônus de 12%\n"
                             "Para salários acima de R$1000,00 - bônus de 5%\n"
                             "Todos os funcionários com pelo menos 3 anos de casa também ganham um bônus extra de 10%\n"
                             "sobre o salário-base.\n"
                             "Ex: R$1000,00 e 4 anos de casa: bônus de R$120,00 (12%) mais R$100,00 (10%) =&gt;&gt; Total:\n"
                             "R$1220,00\n";
	char pergunta13[] = "3) Escreva um programa C para ler as coordenadas (X,Y) de um ponto no plano cartesiano e\n"
                         "escrever o quadrante ao qual o ponto pertence. Caso o ponto não pertença a nenhum quadrante,\n"
                         "escrever se ele está sobre o eixo X, eixo Y ou na origem. Considere que o usuário poderá informar\n"
                         "qualquer valor real para as coordenadas\n";
	char pergunta14[] = "4) Escreva um programa C que leia a idade de 2 homens e 2 mulheres (considere que a idade dos\n"
                            "homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades\n"
                            "do homem mais velho com a mulher mais nova.\n";
	char pergunta15[] = "5) Para participar da categoria OURO do 1 º Campeonato Mundial de Bolinha de Gude o jogador\n"
                            "deve pesar entre 70 Kg (inclusive) e 80 Kg (inclusive) e medir de 1,75 m (inclusive) a 1,90 m\n"
                            "(inclusive). Escreva um programa C para ler a altura e o peso de um jogador e determine se o\n"
                            "jogador está apto a participar do campeonato, escrevendo uma das seguintes mensagens\n"
                            "conforme cada situação:\n";
	char pergunta16[] = "1) Faça um programa C para imprimir os dez primeiros números inteiros positivos. (1, 2, 3, 4, ... ,\n"
                        "10)\n";
	char pergunta17[] = "2) Faça um programa C para imprimir os quadrados de 1 à 5.";
	char pergunta18[] = "3) Faça um programa C para imprimir a soma dos dez primeiros números inteiros positivos. (1 + 2\n"
                        "+ 3 + ... + 10)";
	char pergunta19[] = "4) Faça um programa C para exibir a soma dos números divisíveis por 7 entre 2 e 300\n.";
	char pergunta20[] = "5) Faça um programa C para ler 30 números inteiros e imprimir a soma dos números que são\n"
                        "ímpares.\n";
	char pergunta21[] = "1 – Faça um programa que leia 2 vetores de 10 elementos e os imprima na tela, um de cada vez.";
	char pergunta22[] = "2 -  Leia uma sequência de 10 números e imprima na ordem inversa à da leitura. OBS: Lembre-se de começar\n"
	                    "o laço de repetição pela última posição do vetor.\n";
	char pergunta23[] = "3 – Leia um vetor de n números inteiros (o usuário precisa digitar o valor de n), imprima o vetor na ordem inversa.";
	char pergunta24[] = "4 - Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor,\n"
	                    "ou seja, um vetor para IDADE e um vetor para ALTURA. Imprima a idade e a altura de cada pessoa.\n";
	char pergunta25[] = "5 - Faça um programa que leia 2 vetores de números reais de 5 elementos, some todos os seus elementos e mostre em um\n"
	                    "vetor resultante, denominado VETOR SOMA.\n";
	pergunta[0][0] = pergunta1;
	pergunta[0][1] = pergunta2;
	pergunta[0][2] = pergunta3;
	pergunta[0][3] = pergunta4;
	pergunta[0][4] = pergunta5;
	pergunta[1][0] = pergunta6;
	pergunta[1][1] = pergunta7;
	pergunta[1][2] = pergunta8;
	pergunta[1][3] = pergunta9;
	pergunta[1][4] = pergunta10;
	pergunta[2][0] = pergunta11;
	pergunta[2][1] = pergunta12;
	pergunta[2][2] = pergunta13;
	pergunta[2][3] = pergunta14;
	pergunta[2][4] = pergunta15;
	pergunta[3][0] = pergunta16;
	pergunta[3][1] = pergunta17;
	pergunta[3][2] = pergunta18;
	pergunta[3][3] = pergunta19;
	pergunta[3][4] = pergunta20;
	pergunta[4][0] = pergunta21;
	pergunta[4][1] = pergunta22;
	pergunta[4][2] = pergunta22;
	pergunta[4][3] = pergunta22;
	pergunta[4][4] = pergunta22;
	
//Respostas
    char *resposta[5][5];
    char resposta1[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, j, res;\n\
	\n\
	printf(\"Digite um numero: \");\n\
	scanf(\"%d\", &i);\n\
	printf(\"Digite mais um numero: \");\n\
	scanf(\"%d\", &j);\n\
	\n\
	res = i + j;\n\
	\n\
	printf(\"A soma de %d + %d é %d\", i, j, res);\n\
}\n";
    char resposta2[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, j, res;\n\
	\n\
	printf(\"Digite um numero: \");\n\
	scanf(\"%d\", &i);\n\
	printf(\"Digite mais um numero: \");\n\
	scanf(\"%d\", &j);\n\
	\n\
	res = i * j;\n\
	\n\
	printf(\"A multiplicação de %d + %d é %d\", i, j, res);\n\
}\n";
    char resposta3[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, j, f, res;\n\
	\n\
	printf(\"Digite um numero: \");\n\
	scanf(\"%d\", &i);\n\
	printf(\"Digite mais um numero: \");\n\
	scanf(\"%d\", &j);\n\
	printf(\"Digite mais um numero: \");\n\
	scanf(\"%d\", &f);\n\
	\n\
	res = i + j + f;\n\
	\n\
	printf(\"A soma de %d + %d + %d é %d\", i, j, f, res);\n\
}\n";
    char resposta4[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, res;\n\
	\n\
	printf(\"Digite um valor um kg: \");\n\
	scanf(\"%d\", &i);\n\
	\n\
	res = i * 1000;\n\
	\n\
	printf(\"%d em gramas é %d\", i, res);\n\
}\n";
    char resposta5[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, res;\n\
	\n\
	printf(\"Digite um valor: \");\n\
	scanf(\"%d\", &i);\n\
	\n\
	res = i * i;\n\
	\n\
	printf(\"O quadrado de %d é %d\", i, res);\n\
}\n";
    char resposta6[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
    setlocale(LC_ALL, \"Portuguese\");\n\
    \n\
	float i, j, k;\n\
	printf(Digite a distância de viagem(em Km): e o tempo(em horas): );\n\
	scanf(%f, &i);\n\
	printf(\"Digite o tempo(em horas): \")\n\
	scanf(%f, &j);\n\
	\n\
	k=i/j;\n\
	\n\
	if(k > 80)\n\
	{\n\
		printf(Sua velocidade media foi superior a 80km/h);\n\
	}\n\
	else\n\
	{\n\
		printf(Sua velocidade não foi superior a 80km/h);\n\
	}\n\
}\n";
    char resposta7[] = "\n\
#include <stdio.h>\n\
int main()\n\
{\n\
	float temp;\n\
	printf(\"Qual a temperatura: \");\n\
	scanf(\"%f\", &temp);\n\
	if(temp >36.5)\n\
	{\n\
		printf(\"Voce esta com febre!\");\n\
	}\n\
	else\n\
	{\n\
		printf(\"Voce não esta com febre!\");\n\
	}\n\
}\n";
    char resposta8[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, res;\n\
	printf(\"Digite um numero: \");\n\
	scanf(\"%d\", &i);\n\
	\n\
	res = i % 2;\n\
	\n\
	if(res==0)\n\
	{\n\
		printf(\"Esse numero é par\");\n\
	}\n\
	else\n\
	{\n\
		printf(\"Esse numnero é ímpar\");\n\
	}\n\
}\n";
    char resposta9[] = "\n\
#include <stdio.h>\n\
int main()\n\
{\n\
	int num, voto;\n\
	printf(\"Digite o seu ano de nascimento: \");\n\
	scanf(\"%d\", &num);\n\
	voto = 2019 - num;\n\
	if(voto >= 16)\n\\n\
	{\n\
		printf(\"Pode votar!\");\n\
	}\n\
	else\n\
	{\n\
		printf(\"Nao pode votar!\");\n\
	}\n\
}\n";
    char resposta10[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	setlocale(LC_ALL, \"Portuguese\");\n\
	\n\
	int i, j, res;\n\
	printf(\"Digite um numero: \");\n\
	scanf(\"%d\", &i);\n\
	printf(\"Digite outro numero: \");\n\
	scanf(\"%d\", &j);\n\
	\n\
	if(i<j)\n\
	{\n\
		printf(\"EM ORDEM!\");\n\
	}\n\
	else\n\
	{\n\
		printf(\"FORA DE ORDEM!\");\n\
	}\n\
}\n";
    char resposta11[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	float x,y,z;\n\
	\n\
	printf(\"Insira primeiro o X depois o Y depois o Z\n\n\");\n\
	scanf(\"%f %f %f\", &x, &y, &z);\n\
	\n\
	if (x >= 0 && y >= 0 && z >= 0)\n\
	{\n\
		if (x == y && y == z)\n\
		{\n\
			printf(\"Triangulo equilatero\");\n\
		}\n\
		else if (x == y || y == z)\n\
		{\n\
			printf(\"Triangulo isosceles\");\n\
		}\n\
		else\n\
		{\n\
			printf(\"Triangulo escaleno\");\n\
		}\n\
	}\n\
	else\n\
	{\n\
		printf(\"NUMERO INVALIDO\");\n\
	}\n\
}\n";
    char resposta12[] = "\n\
#include<stdio.h>\n\
#include<math.h>\n\
#include<stdlib.h>\n\
#include<locale.h>\n\
\n\
int main()\n\
{\n\
	float sala;\n\
	int temp;\n\
	\n\
	printf(\"Insira o seu salario em reais\n\n\n>>>\t\");\n\
	scanf(\"%f\", &sala);\n\
	\n\
	printf(\"Insira a quanto tempo voce trabalha na empresa\n\n\n>>>\t\");\n\
	scanf(\"%d\", &temp);\n\
	\n\
	if (sala >= 0 && temp >= 0)\n\
	{\n\
		if (sala <= 500)\n\
		{\n\
			float bonus1, salab1;\n\
			bonus1=sala*0.15;\n\
			salab1= sala+bonus1;\n\
			printf(\"O seu salario mais seu bonus deu %.2f\", salab1);\n\
			\n\
			if(temp >= 3)\n\
			{\n\
				bonus1=bonus1+(sala*0.10);\n\
				salab1= sala*bonus1;\n\
				printf(\"O seu salario mais seu bonus deu %.2f\", salab1);\n\
			}\n\
		}\n\
		else if (sala >= 501 || sala <= 1000)\n\
		{\n\
			float bonus2, salab2;\n\
			bonus2=sala*0.12;\n\
			salab2= sala+bonus2;\n\
			printf(\"O seu salario mais seu bonus deu %.2f\", salab2);\n\
			\n\
			if(temp >= 3)\n\
			{\n\
				bonus2=bonus2*(sala*0.10);\n\
				salab2= sala*bonus2;\n\
				printf(\"O seu salario mais seu bonus deu %.2f\", salab2);\n\
			}\n\
		}\n\
		else if (sala >= 1001)\n\
		{\n\
			float bonus3, salab3;\n\
			bonus3=sala*0.05;\n\
			salab3= sala+bonus3;\n\
			printf(\"O seu salario mais seu bonus deu %.2f\", salab3);\n\
			\n\
			if(temp >=3)\n\
			{\n\
				bonus3=bonus3*(sala*0.10);\n\
				salab3= sala*bonus3;\n\
				printf(\"O seu salario mais seu bonus deu %.2f\", salab3);\n\
			}\n\
		}\n\
	}\n\
	else\n\
	{\n\
		printf(\"Salario ou tempo invalido\");\n\
	}\n\
}\n";
    char resposta13[] = "\n\
#include<stdio.h>\n\
int main(void)\n\
{\n\
	float a, b;\n\
	printf(\"informe o valor de X e o valor de Y para saber em qual quadrante o ponto pertence \nValor de X: \");\n\
	scanf(\"%f\", &a);\n\
	printf(\"Valor de Y: \");\n\
	scanf(\"%f\", &b);\n\
	if(a>0)\n\
	{\n\
		if(b>0)\n\
		{\n\
			printf(\"Quadrante II\");\n\
		}\n\
		else if(b==0)\n\
		{\n\
			printf(\"Eixo X\");\n\
		}\n\
		else if(b<0)\n\
		{\n\
			printf(\"Quadrante IIII\");\n\
		}\n\
		else\n\
		{\n\
			printf(\"Valor invalido\");\n\
		}\n\
	}\n\
	else if(a==0)\n\
	{\n\
		if(b!=0)\n\
		{\n\
			printf(\"Eixo Y\");\n\
		}\n\
		else if(b==0)\n\
		{\n\
			printf(\"Origem\");\n\
		}\n\
		else\n\
		{\n\
			printf(\"Valor invalido\");\n\
		}\n\
	}\n\
	else if(a<0)\n\
	{\n\
		if(b>0)\n\
		{\n\
			printf(\"Quadrante I\");\n\
		}\n\
		else if(b==0)\n\
		{\n\
			printf(\"Eixo X\");\n\
		}\n\
		else if (b<0)\n\
		{\n\
			printf(\"Quadrante III\");\n\
		}\n\
		else\n\
		{\n\
			printf(\"Valor invalido\");\n\
		} \n\
	}\n\
	else \n\
	{\n\
		printf(\"Valor invalido\");\n\
	}\n\
}\n";
    char resposta14[] = "\n\
#include<stdio.h>\n\
int main(void)\n\
{\n\
	int a, b, c, d;\n\
	printf(\"informe a idade de dois homens e duas mulheres \nIdade do homem 1: \");\n\
	scanf(\"%d\", &a);\n\
	printf(\"Idade do homem 2: \");\n\
	scanf(\"%d\", &b);\n\
	printf(\"Idade da mulher 1: \");\n\
	scanf(\"%d\", &c);\n\
	printf(\"Idadr da mulher 2: \");\n\
	scanf(\"%d\", &d);\n\
	if(a>0 && b>0 && c>0 && d>0)\n\
	{\n\
		if(a>=b)\n\
		{\n\
			if(c>=d)\n\
			{\n\
				c=a+d;\n\
				printf(\"Soma das idades: %d+%d=%d\", a, d, c);\n\
			}\n\
			else if(c<d)\n\
			{\n\
				d=a+c;\n\
				printf(\"Soma das idades: %d+%d=%d\", a, c, d);\n\
			}\n\
		}\n\
		else if(a<b)\n\
		{\n\
			if(c>=d)\n\
			{\n\
				c=b+d;\n\
				printf(\"Soma das idades: %d+%d=%d\", b, d, c);\n\
			}\n\
			else if(c<d)\n\
			{\n\
				d=b+c;\n\
				printf(\"Soma das idades: %d+%d=%d\", b, c, d);\n\
			}\n\
		}\n\
		else\n\
		{\n\
			printf(\"por favor, digite uma idade valida\");\n\
		}\n\
	}\n\
	else\n\
	{\n\
		printf(\"por favor, digite uma idade valida\");\n\
	}\n\
}\n";
    char resposta15[] = "\n\
#include<stdio.h>\n\
#include<conio.h>\n\
#include<stdlib.h>\n\
#include<math.h>\n\
int main(void)\n\
{\n\
	float a, b;	\n\
	printf(\"digite abaixo o seu peso e em seguida o seu tamanho para sabe se voce esta apto para participar do torneio\n\nPeso: \");\n\
	scanf(\"%f\", &a);\n\
	printf(\"Altura: \");\n\
	scanf(\"%f\", &b);\n\
	if(a>69 && a<81)\n\
	{\n\
		if(b>1.74 && b<1.91)\n\
		{\n\
			printf(\"Parabens, voce foi aceito\");\n\
		}\n\
		else if(b<1.75 || b>1.90)\n\
		{\n\
			printf(\"Recusado por altura\");\n\
		}\n\
		else\n\
		{\n\
			printf(\"Por favor, digite um valor valido\");\n\
		}\n\
	}\n\
	else if(a<70 || a>80)\n\
	{\n\
		if(b>1.74 && b<1.91)\n\
		{\n\
			printf(\"Recusado por peso\");\n\
		}\n\
		else if(b<1.75 || b>1.90)\n\
		{\n\
			printf(\"Totalmente recusado\");\n\
		}\n\
		else\n\
		{\n\
			printf(\"Por favor, digite um valor valido\");\n\
		}\n\
	}\n\
	else\n\
	{\n\
		printf(\"Por favor, digite um valor valido\");\n\
	}\n\
}\n";
    char resposta16[] = "\n\
#include<stdio.h>\n\
#include<conio.h>\n\
#include<stdlib.h>\n\
#include<math.h>\n\
int main(void)\n\
{\n\
	int a=1;\n\
	while(a<11)\n\
	{\n\
		printf(\"%d\n\", a);\n\
		a++;\n\
	}\n\
}\n";
    char resposta17[] = "\n\
#include<stdio.h>\n\
#include<conio.h>\n\
#include<stdlib.h>\n\
#include<math.h>\n\
int main(void)\n\
{\n\
	int a=1, b;\n\
	while(a<6)\n\
	{\n\
		b=a*a;\n\
		printf(\"%d\n\", b);\n\
		a++;\n\
	}\n\
}\n";
    char resposta18[] = "\n\
#include <stdio.h>\n\
int main()\n\
{\n\
    int a=1, b=0;\n\
    while (a<10)\n\
	{\n\
    	b=b+a;\n\
    	printf(\"%d\n\", b);\n\
        ++a; \n\
    }\n\
}\n";
    char resposta19[] = "\n\
#include <stdio.h>\n\
int main()\n\
{\n\
    int a=3, b=0;\n\
    while (a>2 && a<300)\n\
	{\n\
		if(a%7==0)\n\
		{\n\
    	b=b+a;\n\
    	printf(\"%d\n\", b);\n\
    	}\n\
        ++a; \n\
    }\n\
}\n";
    char resposta20[] = "\n\
#include <stdio.h>\n\
int main()\n\
{\n\
    int a=1, b=0;\n\
    while (a<30)\n\
	{\n\
		if(a%2!=0)\n\
		{\n\
    	b=b+a;\n\
    	printf(\"%d\n\", b);\n\
    	}\n\
        ++a; \n\
    }\n\
}\n";
    char resposta21[] = "\n\
#include<stdio.h>\n\
int main ()\n\
{\n\
int matriz[10][2],y,x;\n\
\n\
for(x=0;x<2;x++)\n\
for(y=0;y<10;y++)\n\
{\n\
	printf(\"Digite o valor em [%%d][%%d]\",y,x);\n\
	scanf(\"%%d\",&matriz[y][x]);\n\
}\n\
for(x=0;x<2;x++)\n\
for(y=0;y<10;y++)\n\
{\n\
		printf(\"valor em [%%d][%%d]: %%d\n\n\",y,x,matriz[y][x]);\n\
}\n\
return 0;\n\
}\n";
    char resposta22[] = "\n\
#include <stdio.h>\n\
#include <stdlib.h>\n\
int main()\n\
{\n\
    int vetor[10],cont;\n\
  printf(\"Digite agora 10 valores para serem imprimidos(digite o valor e aperte enter)\n\");\n\
    for(cont = 0; cont < 10; cont++){\n\
    	printf(\"Digite o valor numero %d\n\",cont);\n\
       scanf(\"%d\",&vetor[cont]);\n\
    }\n\
    for(cont = 9; cont >=0; cont--){\n\
        printf(\"\nPosicao %d : %d\", cont, vetor[cont] );\n\
    }\
    system(\"pause\");\n\
}";


    char resposta23[] = "\n\
#include <stdio.h>\n\
#include <stdlib.h>\n\
int main() \n\
{\n\
int valores[100], numero_valores, indice;\n\
\n\
	printf(\"Quantos valores? (no maximo 100): \");\n\
	scanf(\"%%d\", &numero_valores); \n\
	\n\
	if ( (numero_valores > 100) || (numero_valores < 0) ) \n\
	{\n\
	 printf(\"Numero de valores invalido\");\n\
	}\n\
	\n\
	printf(\"Escreva %%d numeros inteiros: \", numero_valores);\n\
	for (indice = 0; indice < numero_valores; indice++) \n\
	{\n\
		scanf(\"%%d\", &valores[indice] );\n\
	}\n\
	printf(\"Valores em ordem reversa:\");\n\
	for (indice = numero_valores-1; indice >= 0; indice--) \n\
	{\n\
	 	printf(\"%%d \", valores[indice]);\n\
	}\n\
return 0;\n\
}\n";
    char resposta24[] = "\n\
#include<stdio.h>\n\
#include<stdlib.h>\n\
#include<conio.h>\n\
int main()\n\
{\n\
	int idade[5],controle;\n\
	float altura[5];\n\
	\n\
	for(controle=0;controle < 5;controle++)\n\
	{\n\
	printf(\"Digite a idade da pessoa %%d\n\",controle);\n\
	scanf(\"%%d\",&idade[controle]);\n\
	printf(\"Digite a altura da pessoa %%d\n\",controle);\n\
	scanf(\"%%f\",&altura[controle]);\n\
    }\n\
    \n\
	for(controle=0;controle<5;controle++)\n\
	{\n\
		printf(\"\nPessoa %%d:\n\tIDADE:%%d\n\tALTURA:%%.1f\",controle,idade[controle],altura[controle]);\n\
	}\n\
	return 0;\n\
}\n";
    char resposta25[] = "\n\
#include<stdio.h>\n\
int main ()\n\
{\n\
  int vetor[5][2],x, y,vetorsoma[5];\n\
  \n\
  printf (\"Digite valor para os elementos da matriz\");\n\
  for ( y=0; y<5;y++ )\n\
    for ( x=0; x<2; x++ )\n\
    {\n\
      printf (\"Elemento[%%d][%%d] = \", y, x);\n\
      scanf (\"%%d\", &vetor[y][x]);\n\
    }\n\
   for ( y=0; y<5;y++ )\n\
    {\n\
    	vetorsoma[y]=vetor[y][0]+vetor[y][1];\n\
    	printf(\"A soma dos valores na coluna y%%d x1 + x2 eh de:%%d\",y,vetorsoma[y]);\n\
	}\n\
  getch();\n\
  return(0);\n\
}\n";
    
    resposta[0][0] = resposta1;
	resposta[0][1] = resposta2;
	resposta[0][2] = resposta3;
	resposta[0][3] = resposta4;
	resposta[0][4] = resposta5;
	resposta[1][0] = resposta6;
	resposta[1][1] = resposta7;
	resposta[1][2] = resposta8;
	resposta[1][3] = resposta9;
	resposta[1][4] = resposta10;
	resposta[2][0] = resposta11;
	resposta[2][1] = resposta12;
	resposta[2][2] = resposta13;
	resposta[2][3] = resposta14;
	resposta[2][4] = resposta15;
	resposta[3][0] = resposta16;
	resposta[3][1] = resposta17;
	resposta[3][2] = resposta18;
	resposta[3][3] = resposta19;
	resposta[3][4] = resposta20;
	resposta[4][0] = resposta21;
	resposta[4][1] = resposta22;
	resposta[4][2] = resposta22;
	resposta[4][3] = resposta22;
	resposta[4][4] = resposta22;
	
	//variaveis
	int i,j,a,r;
	//repetição
	PERGUNTAS:
	do
	{
	//entrada de dados - lista
	printf("Digite a lista quem você quer:\n1-Algoritimos Basicos.\n2-Decisão.\n3-Decisão Desafios.\n4-Repetição.\n5-Vetores.\nDigite \"100\" para fechar.\n");
	scanf("%d", &i);
	if(i==100)
	{
		return(0);
	}
	system("cls");
	//entrada de dados - exercicio
	EXERCICIOS:
    printf("Digite o exercicio quem você quer(1 a 100): \nDigite \"100\" para fechar:\nDigite \"10\" para voltar\n");
	scanf("%d", &j);
	if(j==100)
	{
		return(0);
	}
	if (j == 10)goto PERGUNTAS;
	system("cls");
	//sistema de erro
	if(i>5)
	{
		printf("\nLista invalida!\n");
	}
	system("cls");
	if(j>5)
	{
		printf("\nExercicio invalido!\n");
	}
	system("cls");
	
	i = i-1;
	j = j-1;
	
	//entrada de dados - resposta
	printf("%s\n", pergunta[i][j]);
	printf("\nVocê quer a resposta?\nDigite \"1\" para sim.\nDigite \"2\" para não.\nDigite \"100\" para fechar:\nDigite \"10\" para voltar\n");
	scanf("%d", &a);
	system("cls");
	if(i==100)
	{
		return(0);
	}
	if (a == 10) goto EXERCICIOS;
	if(a==1)
	{
		printf("%s\n", resposta[i][j]);
	}
	if(a==2)
	{
		
	}
	}while(r!=100);
	getch();
    return(0);
}
