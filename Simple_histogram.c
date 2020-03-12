//Simple_histogram.c: Un semplice istogramma del numero di caratteri nelle parole inserite
/*   * Copyright © 2020 Lorenzo Fiocco <fiocco@giallo.it>
     * This program is free software. It comes without any warranty, to
     * the extent permitted by applicable law. You can redistribute it
     * and/or modify it under the terms of the Do What The Fuck You Want
     * To Public License, Version 2, as published by Sam Hocevar. See
     * http://www.wtfpl.net/ for more details. */

#include <stdio.h>

/*  Variabili utilizzate
	INPUT
		c (intero): contiene il codice ASCII del carattere inserito da console
*/

int main(){
    int c;                              //Dichiarazione della variabile intera c
    while ((c = getchar()) != EOF){     //Prima legge il valore da input e poi esegue i comandi tra {} fintanto che c non è uguale a EOF
        if ((c == ' ') || (c == '\t') || (c == '\n')){  //Verifica se il valore inserito da input è uno spazio (o una tabulazione o un a capo) in caso positivo esegue i comandi tra {}
            putchar('\n');              //Va a capo
	    while (((c = getchar()) == ' ') || (c == '\t') || (c == '\n') && (c != EOF)){}  //Legge il successivo carattere inserito da input e fitanto che equivale a uno spazio (o una tabulazione) non effettua alcuna operazione
        }
	putchar('#');            	//Stampa il carattere #
    }
    return 0;
}
