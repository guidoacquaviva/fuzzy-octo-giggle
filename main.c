  
//
//  main.c
//  Operazioni tra matrici
//
//  Created by Guido Acquaviva on 10/11/2019.
//  Copyright © 2019 Guido Acquaviva. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void somma(int mat1[10][10], int mat2[10][10], int matsom[10][10], int lato);
void prod(int mat1[10][10], int mat2[10][10], int matprod[10][10], int lato);
int det(int mat[10][10], int lato);

int main() {
    size_t n, i = 0, j = 0;
    int mat1[10][10] = {0};
    int mat2[10][10] = {0};
	int matsom[10][10] = {0};
    
	printf("Inserisci il lato delle matrici quadrate che vuoi sommare : ");
    scanf("%d", &n);
	
	puts("Prima matrice : ");
	//Inserisco i valori della prima matrice
	for ( i = 0 ; i < n ; i++) {

		printf("Riga numero %3d :\n", i + 1 );

		for ( j = 0 ; j < n ; j++ ) scanf("%d", &mat1[i][j]);
		
		puts("");

	}
	
	puts("");
	
	//Stampo la prima matrice
	for ( i = 0 ; i < n ; i++ ) {
		
		for ( j = 0 ; j < n ; j++ ) printf("%3d", mat1[i][j]);
		
		puts("");
		
	}

	
	puts("seconda matrice : ");
	
	//Inserisco i valori della seconda matrice
	for ( i = 0 ; i < n ; i++) {
		
		printf("Riga numero %3d :\n", i + 1 );

		for ( j = 0 ; j < n ; j++ ) scanf("%d", &mat2[i][j]);
		
		puts("");


	}
	
	puts("");
	
	//Stampo la seconda matrice
	for ( i = 0 ; i < n ; i++) {
		
		for ( j = 0 ; j < n ; j++ ) printf("%3d", mat2[i][j]);
		
		puts("");
		
	}
    
    //funzione che esegue la somma tra matrici
	somma(mat1, mat2, matsom, n);
    
    
	puts("matrice somma");

	//Stampo la matrice somma
    for ( i = 0 ; i < n ; i++) {
		
		for ( j = 0 ; j < n ; j++ ) printf("%3d", matsom[i][j]);
		
		puts("");
		
    }
    
    return 0;
}

void somma(int mat1[10][10], int mat2[10][10], int mat3[10][10], int n) {
    
	int i, j;
    
    for ( i = 0 ; i < n ; i++ ) {
        
		for ( j = 0 ; j < n ; j++ ) {
		
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			
			printf("\n\n%3d + %3d = %3d\n", mat1[i][j], mat2[i][j], mat3[i][j]);
		
		}
	}
}
