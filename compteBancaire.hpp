#include<iostream>


class Compte_bancaire
{
private:
    int _solde;
    int _password;
    std::string _iban;
    std::string _idAccount;
    std::string _proprietaireAccount;




public:
    bool Retrait(int somme_a_retirer, int password);
    void Consulter_info() const;
    void Credit(int somme_a_crediter);
    void Transfert(Compte_bancaire& cible, int somme_a_transferer);
    Compte_bancaire(std::string proprietaireAccount, std::string idAccount, std::string iban, int password);
};