#include <iostream>
#include <string>

using namespace std;

struct parola
{
    string parola_misteriosa;
    string parola_da_indovinare;
};

int main()
{

    bool ilgiocoefinito;

    float tentativi;

    parola misteriosa;

    cout << "inserisci la parola da indovinare(ricordatela a mente!):\n";

    cin >> misteriosa.parola_misteriosa;

    cout << "inserisci il numero di tentativi(piu basso e, meglio e[anche un numero relativo])\n";

    cin >> tentativi;

    system("cls");

    cout << "indovina la parola!!!!!\n";

    cout << "la parola e lunga " << size(misteriosa.parola_misteriosa) << " caratteri\n";

    cout << "la lettera iniziale e la lettera [" << misteriosa.parola_misteriosa[0] << "]"
         << "\n";

    cout << "la lettera finale e la lettera [" << misteriosa.parola_misteriosa[misteriosa.parola_misteriosa.size() - 1] << "]"
         << "\n";

    while (true)
    {

        ilgiocoefinito = false;

        cin >> misteriosa.parola_da_indovinare;
        if (misteriosa.parola_da_indovinare == misteriosa.parola_misteriosa)
        {
            cout << "hai indovinato!!!!! :)\n";
            ilgiocoefinito = true;
            return 0;
        }
        if (tentativi == 6 && ilgiocoefinito)
        {
            ilgiocoefinito = true;
            cout << "hai finito i tentativi!!!!!\n";
            return 0;
        }
        tentativi++;
    }
}