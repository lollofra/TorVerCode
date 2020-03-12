# TorVerCode - Il codice di Tor Vergata
Qualche programmino in C creato per la materia [programmazione dei calcolatori](http://www.informatica.uniroma2.it/f0?fid=220&srv=0&os=2019&cdl=0&id=PR) del primo anno del corso di laurea in [informatica](http://www.informatica.uniroma2.it/) dell'Università di Roma Tor Vergata. 
Sperando possano essere utili a qualcuno li pubblico sotto [WTFPL](LICENCE) (_Do What The F*ck You Want To Public License_)

## 1. Programmi base
### 1.1 Hello world
[Hello_wordl.c](Hello_world.c) è il programma più semplice che si possa scrivere, utilizza la funzione `printf` per stampare il messaggio "Hello, world!" su console e nient'altro.

### 1.2 Echo: putchar & getchar
[Echo.c](Echo.c) è un programmino che serve per introdurre l'inserimento di valori da input, utilizza la funzione `getchar` per prendere caratteri in input e la funzione `putchar` per restituire caratteri in console, lo scopo di questo programma è quello di fungere da "echo" ovvero ripetere quello che viene inserito da input nell'output.

### 1.3 No more space: elimina gli spazi di troppo
[No_more_space.c](No_more_space.c) è un programmino che utilizzando gli stessi comandi introdotti con [Echo.c](Echo.c) permette di eliminare, da un testo inserito da input, gli spazi multipli e sostituirli con uno spazio singolo. Questo programma inoltre usa una formula abbreviata per la lettura dell'input, ovvero utilizza `getchar` direttamente all'interno del while.

### 1.4 New line word: visualizza una parola per riga
[Newline_word.c](Newline_word.c) è una piccola modifica di [No_more_space.c](No_more_space.c) che sostituisce gli spazi (e anche le tabulazioni) con un "a capo" (anche detto newline).

### 1.5 Istogramma semplice: visualizza graficamente la lunghezza delle parole
[Simple_histogram.c](Simple_histogram.c) è una piccola modifica dei programmi scritti precedentemente, possiamo dire tranquillamente che si tratta del programma new line che sostituisci alla parola il carattere '#'.
