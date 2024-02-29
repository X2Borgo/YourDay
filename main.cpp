#include<iostream>
#include<string>
#include "graphic.h"

using namespace std;

class Attivita
{
    private:
        string nome;
        string descrizione;
        int ora_inizio;
        int ora_fine;

    public:

    string get_nome()
    {return nome;}
    void set_nome(string nome_in)
    {nome = nome_in;}

    string get_descrizione()
    {return descrizione;}
    void set_descrizione(string descrizione_in)
    {descrizione = descrizione_in;}

    int get_ora_inizio()
    {return ora_inizio;}
    void set_ora_inizio(int ora_inizio_in)
    {ora_inizio = ora_inizio_in;}

    int get_ora_fine()
    {return ora_fine;}
    void set_ora_fine(int ora_fine_in)
    {ora_fine = ora_fine_in;}

};

struct lista_attivita
{
    Attivita attivita;
    struct lista_attivita *a_next = NULL;
};

class Registro
{
    private:
        lista_attivita a0;
        int dimensione = 0;

    public:
        lista_attivita get_attivita()
        {return a0;}
        void set(lista_attivita a)
        {}

        lista_attivita ricerca_nome(string nome)
        {
            lista_attivita *a = &a0;
            do
            {
                if((*a).attivita.get_nome() == nome)
                {
                    return *a;
                }
                a = (*a).a_next;
            }while((*a).a_next != NULL);
        } 

        /*
        modificare o creare nuove funzioni di questa ricerca per le attività
        che iniziano / finiscono prima o dopo una certa ora.
        Fare una funzione che cerca le attività attualmente in corso.
        */
        lista_attivita ricerca_ora_inizio (int ora_inizio)
        {
            lista_attivita *a = &a0;
            do
            {
                if((*a).attivita.get_ora_inizio() == ora_inizio)
                {
                    return *a;
                }   
            }while((*a).a_next != NULL);
        }

        lista_attivita ricerca_ora_fine(int ora_fine)
        {
            lista_attivita *a = &a0;
            do
            {
                if((*a).attivita.get_ora_fine() == ora_fine)
                {
                    return *a;
                }
            }while((*a).a_next != NULL);
        }
        /*
        menu a tendina per la ricerca
        ricerca:
        nome
        ora inizio
        ora fine
        */

};

void nuova_attivita (Attivita *a)
{
    string b;
    int c;
    cout << "inserire i dati della nuova attivita' " << endl;
    cout << "inserire il nome dell'attivita': ";
    cin >> b;
    (*a).set_nome(b);
    cout << "inserire la descrizione dell'attivita': ";
    cin >> b;
    (*a).set_descrizione(b);
    cout << "inserire l'ora di inizio dell'attivita': ";
    cin >> c;
    (*a).set_ora_inizio(c);
    cout << "inserire l'ora di fine dell'attività': ";
    cin >> c;
    (*a).set_ora_fine(c);
}

int main()
{
    //per grafica usare qt
    Attivita a1;
        
    //nuova_attivita(&a1);
    
    cout << a1.get_nome() << " , " 
        << a1.get_descrizione() << " , "
        << a1.get_ora_inizio() << " , "
        << a1.get_ora_fine() << endl;

    init_finestra();
    
}