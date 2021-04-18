/*Ingeneria en Sistemas
Mercy Salome Vásquez Ortiz
carnet: 0909-20-5202
Tercer Semestre*/

//Declaracion de librerias 
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	system("color B0");
	
	//Declaracion de vectores
	int vectA[3], vectB[3], vectC[3];
	float sum=0, prom=0;
	
	cout<<"\n * CALCULOS VECTORIAL *";//Titulo
	
	//Ingreso de datos del vector A
	for(int i=0; i<3; i++){
		
		cout<<"\n Ingrese los valores del Vector 'A': "; 
		cin>>vectA[i];
	}//fin del for del vector "a"
	
	//Ingreso de datos del vector B
	for(int j=0; j<3; j++){
		
		cout<<"\n Ingrese los valores del Vector 'B': ";
		cin>>vectB[j];	
	}//fin del for "b"
	
	//Resta del vector A - Vector B
	for(int i=0; i<3; i++){
		
		vectC[i] = vectA[i]  - vectB[i];	
	}//fin del for de vector a - b
	
	//Suma de los elementos del vector C
	for(int i=0; i<3; i++){
		
		sum += vectC[i]; //Suma interactiva
	}
	
	//Proceso para sacar el promedio
	prom= sum/3;
	
	/*Visualizacion de los tres vectores*/
	system("cls"); //Limpiar pantalla
	
	cout<<"\n * CALCULOS VECTORIAL *";//Titulo
	
	//Visualizar vector "A"
	cout<<"\n ";//Salto de linea
	cout<<" \n Vector A: "<<endl; 
	
	for(int i=0; i<3; i++){
		cout<<"  "<<vectA[i];	}
		
	//Visualizar vector "B"
    cout<<"\n ";//Salto de linea
	cout<<" \n Vector B: "<<endl;
	
	for(int i=0; i<3; i++){
		cout<<"  "<<vectB[i];	}
		
	//Visualizar vector "C"
	cout<<"\n ";//Salto de linea
	cout<<" \n Vector C: "<<endl;
	
	for (int j=0; j<3; j++){
	cout<<"  "<<vectC[j];    }
	
	//Visualizar promedio
	cout<<"\n \n El promedio del vector C es: "<<prom;
	
	_getch();  //Detener programa para visualizar
	return 0;
} //Fin del programa

/*Ingeneria en Sistemas
Mercy Salome Vásquez Ortiz
carnet: 0909-20-5202
Tercer Semestre*/ 
