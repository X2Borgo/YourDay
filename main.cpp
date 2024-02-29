#include<iostream>

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
    {ora_fine = ora_fine_in;})

};

int main()
{
    //per grafica usare qt
    Attivita a1;
    
}