/* Fa�a um programa para ler o nome e as duas notas de 5 alunos.
Fa�a para cada aluno:
- Calcule e mostre a m�dia.
Fa�a ap�s a entrada dos alunos:
- Apresente a rela��o de alunos contendo: nome, nota1, nota2 e a m�dia;
- Apresente a rela��o de alunos que foram reprovados (m�dia < 6) contendo: nome, nota1, nota2 e a m�dia.
*/
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome[5];
	float n1[5], n2[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		cout<<"\nNome do aluno: "; cin>>nome[i]; 
		cout<<"Nota 1 : "; cin>>n1[i];
		cout<<"Nota 2 : "; cin>>n2[i];
		cout<<"A m�dia de "<<nome[i]<<" � "<<(n1[i]+n2[i])/2<<endl;	
	}
	
	cout<<"\nNOME\tNOTA 1\tNOTA 2\tM�DIA"<<endl;
	
	for (i=0;i<5;i++)
	{
		cout<<nome[i]<<"\t"<<n1[i]<<"\t"<<n2[i]<<"\t"<<(n1[i]+n2[i])/2<<endl;
	}
	
	cout<<"\n\n-----Alunos Reprovados-----"<<endl;
	cout<<"NOME\tNOTA 1\tNOTA 2\tM�DIA"<<endl;
	
	for (i=0;i<5;i++)
	{
		if ((n2[i]+n1[i])/2<6)
		{
			cout<<nome[i]<<"\t"<<n1[i]<<"\t"<<n2[i]<<"\t"<<(n1[i]+n2[i])/2<<endl;
		}
	}
}
	
	
