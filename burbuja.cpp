#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ordenar (int a[], int len );
void mostrar (int a[], int len);

int main()
{
	int a[]={6};
	char jugarDeNuevo;
	int cont=0;	
	do
	{
		lanzarDados();
		
		cout<<"Quieres lanmzar los dados de nuevo ? (s/n): ";
		cin>>jugarDeNuevo;
		cont=cont+1;
		
	}while (cont=6);
	
	cout<<"Gracias por jugar "<<endl;
	return 0;	
}
void lanzarDados()
{
	srand(time(0));
	

	int a = rand ()%6+1;

	
	cout<<"dado 1: "<<dado1<<endl;
	cout<<"Total: "<<dado1<<endl;
	


	
	
}

void ordenar (int a[],int len)
{
	int ordenado= 0;
	
	for (int i=0;i<len-1;i++)
		{
			for (int j=0; j < len-1 ;i++)
			{
				for(int j=0; j <len-1 ; j++)
				{
					if(a[j]>a[j+1])
					{
						int aux = a[j];
						a[j]=a[j+1];
						a[j+1]=aux;
					}
				}
				mostrar (a,len);
			}
		}
		void mostrar(int a[], int len)
		{
		
		
		
			for (int i=0;i<len;i++)
			{
				cout<<a[i]<<"";
			}
			cout<<endl;
			
		}
	
}
