#include <iostream>
#include"client.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  	
	Compte_bancaire Esteban("Esteban","AB1234","FR1234",1234), Rayan("Rayan","AB5678","FR5678",0000) ;
	
	cout <<"vos informations sont les suivantes"<<endl;
	Esteban.Consulter_info();
	

	return 0;
}