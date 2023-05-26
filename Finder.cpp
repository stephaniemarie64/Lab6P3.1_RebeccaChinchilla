#include "Finder.h"

Finder::Finder(int numFilas, int numColumnas) {
    this->numFilas = numFilas;
    this->numColumnas = numColumnas;
    // Inicializar la matriz con caracteres al azar
    srand(time(0));
    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numColumnas; j++) {
            matriz[i][j] = (char)(rand() % 26 + 'a');
        }
    }
}

void Finder::printMatrix() {
    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numColumnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool Finder::searchHorizontal(string word) {
    for (int i = 0; i < numFilas; i++) {
        string row = "";
        for (int j = 0; j < numColumnas; j++) {
            row += matriz[i][j];
        }
        if (row.find(word) != string::npos) {
            return true;
        }
    }
    return false;
}

bool Finder::searchVertical(string word) {
    for (int i = 0; i < numColumnas; i++) {
        string column = "";
        for (int j = 0; j < numFilas; j++) {
            column += matriz[j][i];
        }
        if (column.find(word) != string::npos) {
            return true;
        }
    }
    return false;
}