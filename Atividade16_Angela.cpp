#include <iostream>
using namespace std;

main()  
{
	setlocale(LC_ALL,"portuguese");
	
	int h;
	string nome;
	char ans;
	
	do{
		
		cout<< "Digite nome do Jogador: ";
		cin>> nome;
		
		cout<< "Digite a altura do Jogador (em centímetros):";
		cin>>h;
		
		if (h>=195){
			cout<<"A altura de "<<nome<< " é " <<h<< "cm, considerada ÓTIMA \n" <<endl;
		}
		else if (h>=185){
			cout<<"A altura de "<<nome<< " é " <<h<< "cm, considerada BOA \n"<<endl;
		}
		else if (h>=175){
			cout<<"A altura de "<<nome<< " é " <<h<< "cm, considerada REGULAR \n"<<endl;
		}
		else{
			cout<<"A altura de "<<nome<< " é " <<h<< "cm, considerada INSUFICIENTE \n\n"<<endl;
		}
		
		
		cout<<"Deseja adicionar mais um jogador (S ou N):";
		cin>>ans;
	
	} while (ans=='s'|| ans=='S');
	
	cout<<"Fim do programa...";
}
