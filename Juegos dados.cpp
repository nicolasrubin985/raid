#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lanzarDados()
{
	srand(time(0));
	
	int dado1 = rand ()%6+1;
	int dado2 = rand ()%6+1;
	
	cout<<"dado 1: "<<dado1<<endl;
	cout<<"dado 2: "<<dado2<<endl;
	cout<<"Total: "<<dado1+ dado2<<endl;


	
	
}
int main ()
{
	char jugarDeNuevo;
	
	do
	{
		lanzarDados();
		
		cout<<"Quieres lanmzar los dados de nuevo ? (s/n): ";
		cin>>jugarDeNuevo;
		
	}while (jugarDeNuevo ==  's' or jugarDeNuevo == 'S'  );
	
	cout<<"Gracias popr jugar "<<endl;
	return 0;
}

