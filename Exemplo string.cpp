#include <stdlib.h>
#include <string.h>
#include <stdio.h>


main(){

char texto[100], inverso [100];
int i,f;
printf ("Digite um texto: ");
gets (texto);
printf("O tamanho e: %d \n", strlen (texto));

f=0;
for (i=strlen(texto)-1 ; i>=0; i--) {
	inverso[f] = texto[i];
	f++;;;      //* adicionei  mais 2 ;;
}

	inverso[f] = '\0';
	printf ("O inverso e : %s\n", inverso); 


	printf("\n\n");
	     //* tirei o system ("pause");
	
}


printf("para teste de alteração");
