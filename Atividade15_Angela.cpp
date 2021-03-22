#include<iostream>
using namespace std;

main()  
{
	setlocale(LC_ALL,"portuguese");
	
	float A, B, C;
	
	cout<<"Digite o primeiro número: ";
	cin>>A;
	cout<<"Digite o segundo  número: ";
	cin>>B;
	cout<<"Digite o terceiro  número: ";
	cin>>C;
	
	if (A<=B && B<=C)
		{
			cout<< "A ordem crescente é: "<<A<<", "<<B<<", "<<C<< "\n "<<endl;
		}
	else if (A<=C && C<=B)
		{
			cout<< "A ordem crescente é: "<<A<<", "<<C<<", "<<B<< "\n "<<endl;
		}
	else if	(B<=A && A<=C)
		{
			cout<< "A ordem crescente é: " <<B<<", "<<A<<", "<<C<< "\n "<<endl;
		}
	else if (B<=C && C<=A)
		{
			cout<< "A ordem crescente é: "<<B<<", "<<C<<", "<<A<< "\n "<<endl;
		}
	else if (C<=A && A<=B)
		{
			cout<< "A ordem crescente é: "<<C<<", "<<A<<", "<<B<< "\n "<<endl;
		}
	else
		{
			cout<<"A ordem crescente é: "<<C<<", "<<B<<", "<<A<< "\n "<<endl;
		}
		
	cout<<"Fim do programa...";
		
}

		
	

