//Echo.c: Legge e riscrive ciò che viene inserito da input

#include <stdio.h>

/*  Variabili utilizzate
	INPUT
		c (intero): contiene il codice ASCII del carattere inserito da console
*/

int main(){
    int c;              //Dichiarazione della variabile intera c
    c = getchar();      //Assegnazione a c del primo carattere inserito da input
    while (c != EOF){   //While (iterazione) esegue i comandi tra {} fintanto che c non è uguale a EOF (End Of File)
        putchar(c);     //Stampa il carattere in c (ovvero il carattere letto da input)
        c = getchar();  //Assegna a c il carattere inserito da input
    }
    return 0;
}
