/* Fa�a um programa para receber o nome de N pessoas, onde N deve ser lido no in�cio do programa.
Depois, organize a rela��o de modo que fique ordenada alfabeticamente.*/

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n, i, cont=1;
	cout<<"Ol� e Bem-Vindo!! \n Quantas pessoas deseja adicionar:"; cin>>n;
	
	string nome[n], auxiliar;
	
	for (i=0;i<n;i++)
	{
		cout<< "Digite o nome da "<<i+1<< "� pessoa: "; cin>>nome[i];
	}
	
	for (cont=0; cont<(n-1); cont++)
	{
		for (i=0;i<((n-1)-cont);i++)
		{
				if (nome[i]>nome[i+1])
				{
					auxiliar=nome[i];
					nome[i]=nome[i+1];
					nome[i+1]=auxiliar;
				} 
		}
	} 
	
	cout<< "Pessoas adicionadas apresentadas em Ordem Alfab�tica";
	
	for (i=0;i<n;i++)
	{
		cout<<"\n"<<nome[i]; 
	} 
	
	
}

