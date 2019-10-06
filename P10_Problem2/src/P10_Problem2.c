/*
 ============================================================================
 Name        : P10_Problem2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void scan_element();
void print_element();

typedef struct{
	int a_number;
	char name[MAX];
	char symbol[MAX];
	char class[MAX];
	float a_weight;
	int n_electron[7];

}element_t;

element_t s;

int main(void) {

	scan_element();
	print_element();

	return EXIT_SUCCESS;
}

void scan_element(){
	int i;
	printf("Enter the Atomic Number: ");
	fflush(stdout);
	scanf("%d",&s.a_number);
	printf("Name of Element: ");
	fflush(stdout);
	scanf("%s",s.name);
	printf("Symbol of Element: ");
	fflush(stdout);
	scanf("%s",s.symbol);
	printf("Class of Element: ");
	fflush(stdout);
	scanf("%s",s.class);
	printf("Weight of Element: ");
	fflush(stdout);
	scanf("%f",&s.a_weight);
	printf("Number of Electrons: ");
	fflush(stdout);
	for (i=0; i<7; i++){
	scanf("%d",&s.n_electron[i]);}
}
void print_element(){
	int i;

	printf("%d %s %s %s %f ",s.a_number,s.name,s.symbol,s.class,s.a_weight);
	fflush(stdout);
	for (i=0; i<7; i++)
	{
		printf("%d ",s.n_electron[i]);
		fflush(stdout);
	}

}
