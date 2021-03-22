#include<iostream>
#include<math.h>
using namespace std;

void cabecalho ()
{
	cout<<" \n ----- Bem-Vindo ao Programa de Cálculo do IMC!! ----- "<<endl;
	cout<<"                         \\_(^o^)_/"<<endl;
	cout<<endl;
}

float calcula_imc(float p, float h)
{
	return (p/(h*h));
}

void msg_imc(float indice){
	if (indice<16) { cout<<"Magreza grave";}
	else if (indice<17) { cout<<"Magreza moderada";}
	else if (indice<18.5) { cout<<"Magreza leve";}
	else if (indice<25) { cout<<" Saudavel ";}
	else if (indice<30) { cout<<" Sobrepeso ";}
	else if (indice<35) { cout<<" Obesidade Grau I ";}
	else if (indice<40) { cout<<" Obesidade Grau II (severa) ";}
	else {cout<<" Obesidade Grau III (mórbida)";}
}

main()

{
	setlocale(LC_ALL,"portuguese");
	
	cabecalho();
	
	float altura, peso, indice;
	cout<<"Digite a altura (m) do sujeito: "; cin>>altura;
	cout<<"\nDigite o peso (kg) do sujeito:  "; cin>>peso;
	
	indice = calcula_imc(peso,altura);
	
	cout<< "O IMC deste sujeito é "<< indice<< " classificado como "; msg_imc(indice);
	
}
