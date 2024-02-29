#include "graphic.h"

void init_finestra() {
    initscr(); // Inizializza ncurses

    printw("Hello, ncurses!"); // Stampa un messaggio
    refresh(); // Aggiorna la finestra

    getch(); // Attendi l'input dell'utente

    endwin(); // Termina ncurses
}
