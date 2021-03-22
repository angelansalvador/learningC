#include<iostream>
#include<math.h>
using namespace std;

void cabecalho ()
{
	cout<<" \n ----- Bem-Vindo ao Programa!! ----- "<<endl;
	cout<<"               \\_(^o^)_/"<<endl;
	
}
void quadrado()
{    
    int lado, area;
    system("cls");
    cout<<"\n ---- CÁLCULO DA ÁREA DO QUADRADO ----"<<endl<<endl;
    cout<<"Digite o lado do quadrado: "; cin>>lado;
    area = lado * lado;
    cout<<"A área do quadrado é "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}

void triangulo()
{    
    int lado, altura, area;
    system("cls");
    cout<<"\n---- CÁLCULO DA ÁREA DO TRIANGULO ----"<<endl<<endl;
    cout<<"Digite o lado do triangulo: "; cin>>lado;
    cout<<"Digite a altura do triangulo: "; cin>>altura;
    area = lado * altura/2;
    cout<<"A área do triângulo é "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}

void circunferencia()
{    
    float raio, pi=3.14, area;
    system("cls");
    cout<<"\n ---- CÁLCULO DA ÁREA DA CIRCUNFERÊNCIA ----"<<endl<<endl;
    cout<<"Digite o raio do circulo: "; cin>>raio;
        area = pi * pow(raio,2);
    cout<<"A área da circunferênia é "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}

main()  
{
	setlocale(LC_ALL,"portuguese");
	int escolha;
	
	cabecalho();
	
	do{
		do{
			
			cout<<"\nEscolha a forma desejada: "<<endl;
			cout<< " 1 - QUADRADO \n 2 - TRIÂNGULO \n 3 - CIRCUNFERÊNCIA \n 4 - SAIR"<<endl;
			cin>>escolha;
			
			if (escolha<=0 or escolha>4) 
				{cout<<"***** OPÇÃO INCORRETA *****"<<endl;}
			
		}while (escolha<=0 or escolha>4);
	
		if (escolha==1){quadrado();}
		else if (escolha==2){triangulo();}
		else if (escolha==3){circunferencia();}
		else {cout<< "---- O PROGRAMA SERÁ FINALIZADO ----"<<endl;}
		
	}while (escolha!=4);
}
