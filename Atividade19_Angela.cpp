/* Ler duas matrizes A e B de números inteiros com N linhas e N colunas, 
onde N deve ser lido no início do programa.Construir uma matriz C de mesma dimensão,
 sendo que C é formada pelo produto dos elementos da matriz A e B.
Apresentar a matriz C.
*/
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	int N, X, Y;
	cout<<"Digite qual tamanho da matriz quadrada: "; cin>>N;
	int A[N][N], B[N][N], C[N][N];
	
	cout<<"\n\n---- Inserção de dados Matriz A----\n";

	for(X=0;X<N; X++)// Inserção de números na matriz A//
	{
		for(Y=0;Y<N;Y++)
		{
			cout<< "Digite o "<<Y+1<<"º numero da "<<X+1<<"ª linha: "; cin>>A[X][Y];
		}
	}
	
		cout<<"\n\n---- Inserção de dados Matriz B----\n";

	for(X=0;X<N; X++)// Inserção de números na matriz B//
	{
		for(Y=0;Y<N;Y++)
		{
			cout<< "Digite o "<<Y+1<<"º numero da "<<X+1<<"ª linha: "; cin>> B[X][Y];
		}
	}

	cout<<"\n\n\n ----Matriz A----\n";	
	
	for(X=0;X<N;X++) // Saida A //
	{
		for(Y=0;Y<N;Y++)
		{
			cout<<A[X][Y]<<"\t";
		}cout<<endl;
	}
	
	cout<<"\n\n\n ----Matriz B----\n";
	
		for(X=0;X<N;X++) // Saida B //
	{
		for(Y=0;Y<N;Y++)
		{
			cout<<B[X][Y]<<"\t";
		}cout<<endl;
	}
	
	
	for(X=0;X<N;X++) // Produtos de A e B - Inserção de dados na matriz C //
	{
		for(Y=0;Y<N;Y++)
		{
			C[X][Y]=A[X][Y]*B[X][Y];
		}
	}
	
	cout<< "\n\n----Matriz C----\n";
	
	for(X=0;X<N;X++) // Saída C //
	{
		for(Y=0;Y<N;Y++)
		{
			cout<<C[X][Y]<<"\t";
		}cout<<endl;
	}
	
	

}
