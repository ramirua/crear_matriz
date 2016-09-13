/*creando matrices =) */
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int fila,columna,i,j,mat,diagonalp,diagonals;
	
	printf("ingrese el numero de filas: ");
	scanf("%d",&fila);
	printf("ingrese el numero de columnas: ");
	scanf("%d",&columna);
// cargar matriz	

	int matriz[fila][columna];
	for(i=0; i<fila; i++)
	{
		for(j=0; j<columna; j++)
		{
		    printf(" posicion en [%d][%d] = ",i,j);
		    scanf("%d",&mat);
		    matriz[i][j]=mat;
			
		}
	}
	
	//imprimiendo matriz
 printf("\n la matriz generada es: \n");
	for(i=0; i<fila; i++)
	{
		for(j=0; j<columna; j++)
		{
		  printf("  %d",matriz[i][j]);
		}
		printf("\n");
	}

   //matriz transpuesta
   printf("\n matriz transpuesta: \n");
   for(i=0; i<fila; i++)
   {
   	 for(j=0; j<columna; j++)
   	 {
   		 printf("  %d",matriz[j][i]);
     }
     printf("\n");
   }
   	
  // diagonal principal
   printf("\n diagonal principal: \n");
   for(i=0; i<fila; i++)
   {
   	 for(j=0; j<columna; j++)
   	 {
   		if(i==j)
   		{
   			diagonalp=matriz[i][j];
   			printf(" %d",diagonalp);
   		}
     }
   }
    // diagonalsecundaria ojo
   printf("\n diagonal secundaria: \n");
   for(i=0; i<fila; i++)
   {
   	 for(j=0; j<columna; j++)
   	 {
   		if(j!=i)
   		{
   			diagonals=matriz[j][i];
   			printf(" %d",diagonals);
   		}
     }
   }
  	
	return 0;
}
