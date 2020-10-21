#include <iostream>

using namespace std;
struct estudiante{
int * codigo;
string * nombres;
string * apellidos;
int * notas;


	
};
main(){
 int*c[20];
 est.codigo=new int [5];
 est.nombres=new string[5];
 est.apellidos=new string [5];
 est.notas=new string [5];
 
 
 for (int i=0;i<5;i++){
 	
 cout<<" ingrese codigo:";
 cin>>est.codigo[i];
 
 cout<<" ingrese nombre:";
 cin.ignore();
 getline(cin,est.nombres[i]);
 
 cout<<"ingrese apellidos:";
 getline(cin,est.apellidos[i]);
 cout<<"ingrese nota:";
 cin>>est.notas[i];
 cout<<endl<<est.codigo<<" ,"<<est.nombres<<","<<est.apellidos<<","<<est.notas<<endl;
 	
 	
 }
 
 
 
 int i=5;
do {
	cout<<"ingresa"<<endl;
	i++;
}while(i<5)
 
system (" pause");
}
