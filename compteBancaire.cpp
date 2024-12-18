#include<iostream>
#include"compteBancaire.hpp"

using namespace std;

//bienvenue

Compte_bancaire::Compte_bancaire(std::string proprietaireAccount, std::string idAccount, std::string iban, int password) :_solde(0), _proprietaireAccount(proprietaireAccount), _idAccount(idAccount),
_iban(iban), _password(password) {
}

bool Compte_bancaire::Retrait(int somme, int password) {

	if (somme <= _solde and password == _password) {
		_solde -= somme;
		return true;
	}
	else {
		return false;
	}
}

void Compte_bancaire::Consulter_info() const {

	cout << "PROPRIETAIRE:" << _proprietaireAccount << endl;
	cout << "NUMERO DU COMPTE:" << _idAccount << endl;
	cout << "IBAN:" << _iban << endl;
	cout << "PASSWORD:" << "**********" << endl;
	cout << "votre solde est de " << _solde << endl;
}
void Compte_bancaire::Credit(int somme_a_crediter) {
	if (somme_a_crediter > 0) {
		_solde += somme_a_crediter;
	}
	else
	{
		cout << "veuillez entrer une somme a crediter positive" << endl;
	}

}

void Compte_bancaire::Transfert(Compte_bancaire& cible, int somme_a_transferer) {

	if (somme_a_transferer < _solde and somme_a_transferer>0) {
		cible.Credit(somme_a_transferer);
	}
	else
	{
		cout << "vous ne pouvez pas effectuer ce transfert, votre solde est inferieur a cette somme" << endl;
	}
}

