#include <stdio.h>
 	main(){
 		int V,I,P,R,grandeza;
 		
 		printf("Escolha qual grandeza quer calcular\n");
 		printf(" 1- Potencia\n 2- Tensao\n 3- Corrente\n 4- Resistencia\n\n");
 		scanf("%d", &grandeza);
		 
		 
		switch(grandeza){
				case 1:
					printf("Digite o valor da tensao\n");
					printf("Digite o valor da corrente\n");
					scanf("%d", &V);
					scanf("%d", &I);
					
					P= V*I;
					printf("Resultado: %d Wats", P );
				break;
				
				case 2:
					printf("Digite o valor da resistencia\n");
					printf("Digite o valor da corrente\n");
					scanf("%d", &R);
					scanf("%d", &I);
					
					V= R*I;
					printf("Resultado: %d Volts",V );
				break;
				
				case 3:
					printf("Digite o valor da tensao\n");
					printf("Digite da resistencia\n");
					scanf("%d", &V);
					scanf("%d", &R);
					
					I= V/R;
					
					printf("Resultado: %d Amper", I );
				break;
				
				case 4:
					printf("Digite o valor da tensao\n");
					printf("Digite o valor da corrente\n ");
					scanf("%d", &V);
					scanf("%d", &I);
					
					R= V/I;
					printf("Resultado: %d Ohms", R );
				break;
		}  
		
		
		
}
