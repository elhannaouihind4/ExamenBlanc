
#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    int numero;
    string titulaire;
    double solde;

public:
    // Constructeur parametre
    CompteBancaire(int num, string nom, double montant) {
        numero = num;
        titulaire = nom;
        solde = montant;
    }

    // Deposer de l'argent
    void deposer(double montant) {
        if (montant > 0) {
            solde += montant;
            cout << "Depot effectue avec succes." << endl;
        } else {
            cout << "Montant invalide." << endl;
        }
    }

    // Retirer de l'argent
    void retirer(double montant) {
        if (montant > 0 && montant <= solde) {
            solde -= montant;
            cout << "Retrait effectue avec succes." << endl;
        } else {
            cout << "Retrait impossible." << endl;
        }
    }

    // Afficher les informations
    void afficher() {
        cout << "Numero : " << numero << endl;
        cout << "Titulaire : " << titulaire << endl;
        cout << "Solde : " << solde << " DH" << endl;
    }
};

int main() {
    // Creation de deux comptes
    CompteBancaire c1(13, "Hind", 1000);
    CompteBancaire c2(14, "Reda", 2000);

    // Operations sur le premier compte
    c1.deposer(500);
    c1.retirer(300);

    // Operations sur le deuxieme compte
    c2.deposer(600);
    c2.retirer(200);

    // Affichage des comptes
    cout << "\n Compte 1 " << endl;
    c1.afficher();

    cout << "\n Compte 2 " << endl;
    c2.afficher();

    return 0;
}



