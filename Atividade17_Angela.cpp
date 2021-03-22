#include<iostream>

using namespace std;

main()  
{
	setlocale(LC_ALL,"portuguese");
	float area, custo;
	int tipo;
	string nome;
	
	do{
		cout<<" \n\n\n ----------¦¦ PULVERIZAÇÃO FAZ TUDO LTDA ¦¦---------- \n \n \n Nome do fazendeiro: ";
		cin>>nome;
					
		cout<<"Área pulverizada em acres: ";
		cin>>area;
		
		do{
			cout<<"Tipo de pulverização: ";
			cin>>tipo;
			
			if (tipo<=0 || tipo>4){
				cout<< "\n\n-----xxxxx ERRO! xxxxx----- \n\n Digite '1' para Ervas Daninhas\n Digite '2' para Gafanhotos\n Digite '3' para Brocas\n Digite '4' para Todos os tipos \n\n ----- TENTE NOVAMENTE -----\n"<<endl;
			}
			
		} while (tipo<=0 || tipo>4);
		
	
		if (tipo==1){
			custo=area*50.0;
		}
		else if (tipo==2){
			custo=area*90.0;
		}
		else if (tipo==3){
			custo=area*120.0;
		}
		else {
			custo=area*170.0;
		}

		
		cout<<"\n\nNome do fazendeiro: " <<nome<<endl;
		cout<<"Custo Total do Trabalho: R$"<<custo<<endl;
		cout<<"---Fim do cálculo--- \n"<<endl;
		
		system("pause");
		
	}while (nome!="XXX");


}
