//No_more_space.c: Cancella gli spazi di troppo in un testo
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
        if (c == ' '){                  //Verifica se il valore inserito da input è uno spazio in caso positivo esegue i comandi tra {}
            putchar(' ');               //Stampa uno spazio
            while (((c = getchar()) == ' ') && (c != EOF)){}    //Legge il successivo carattere inserito da input e fitanto che equivale a uno spazio non effettua alcuna operazione
        }
        putchar(c);                     //Stampa il carattere in c (ovvero il carattere letto da input)
    }
    return 0;
}
