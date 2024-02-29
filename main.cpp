#include<iostream>
#include<string>

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
    Attivita a;
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
            do
            {

            }while(a0.a_next )
        } 
        /*
        menu a tendina per la ricerca
        ricerca:
        nome
        ora inizio
        ora fine
        */

};

Attivita nuova_attivita ()
{
    Attivita a;
    string b;
    int c;
    cout << "inserire i dati della nuova attivita' " << endl;
    cout << "inserire il nome dell'attivita': ";
    cin >> b;
    a.set_nome(b);
    cout << "inserire la descrizione dell'attivita': ";
    cin >> b;
    cout << "inserire l'ora di inizio dell'attivita': ";
    cin >> c;
    a.set_ora_inizio(c);
    cout << "inserire l'ora di fine dell'attività': ";
    cin >> c;
    a.set_ora_fine(c);
    return a;
}

int main()
{
    //per grafica usare qt
    Attivita a1;
    

}