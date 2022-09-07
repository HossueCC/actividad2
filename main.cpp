// =================================================================
//
// File: main.cpp
// Author: Hossue Ceja Cartagena 
// Date:06/09/2022
//
// =================================================================
#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <vector>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main(int argc, char* argv[]) {
	ifstream inputFile;
	ofstream outputFile;


	int n = 0, n1 = 0, q = 0, qr= 0, bubble = 0, sel = 0;

	int *a;
	int *b;

	inputFile.open(argv[1]);
	outputFile.open(argv[2]);
	
	inputFile >> n;
	vector <int> v(n); //Creación del vector con los n numeros



	for (int i = 0; i < n; i++){ //Recorremos el vector
		inputFile >> n1;
		v[i] = n1;
	}
	vector <int> vectorCopia = v; //Creamos un vector copia en donde iremos depositando los valores del vector original
	outputFile << bubbleSort(vectorCopia) << " "; //Aplicamos el algoritmo burbuja
	
	vectorCopia = v; //Mandamos nuestro vector copia ordenado a nuestro vector original

	outputFile << selectionSort(vectorCopia) << " "; //Aplicamos el algoritmo selection en el vector copia  

	vectorCopia = v; //Mandamos el vector ordenado a la variable original

	outputFile << insertionSort(vectorCopia) << "\n\n"; //Aplicamos el algoritmo insertion en el vector copia

	inputFile >> q; 


	for (int i = 0; i < q; i++){
		inputFile >> qr;
		a = sequentialSearch(vectorCopia,qr);
		b = binarySearch(vectorCopia,qr);
		outputFile << a[0] << " " << a[1] << " " << b[1] << endl;

	}	
	
	inputFile.close(); //Cerramos archivo
	outputFile.close(); //Cerramos archivo
  	


	return 0; //Finalizamos ejecución del programa
}
