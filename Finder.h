#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Finder {
private:
    int numFilas;
    int numColumnas;
    char matriz[10][10]; 

public:
    Finder(int numFilas, int numColumnas);
    void printMatrix();
    bool searchHorizontal(string word);
    bool searchVertical(string word);
};