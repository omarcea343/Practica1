#include <stdio.h> 
#include <windows.h>

int main (){
	
	int aux,i,j,k,n=20; 
	int ordenar[20]; 
	
	for (i=0; i<n; i++){ 
		printf("Ingresa el %d \n",i+1); 
		scanf("%d",&ordenar[i]); 
	} 
	for (i=0;i<n;i++){ 
		for (j=0;j<n-i;j++){ 
			if (ordenar[j]>=ordenar[j+1]){ 
				aux=ordenar[j]; 
				ordenar[j]=ordenar[j+1]; 
				ordenar[j+1]=aux; 
			} 
		} 
	} 
	for (k=0;k<n;k++){ 
		printf(" %d",ordenar[k]); 
	} 
	system ("pause");
	return 0; 
} 
