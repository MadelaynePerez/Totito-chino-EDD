#include <iostream>
#include<conio.h>
using namespace std;

int tablero(){

const int FILAS = 3;
    const int COLUMNAS = 3;
    char tablero[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = '.';
        }
    }

    cout << "Tablero inicial:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


}
