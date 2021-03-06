// MatrixMultiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include <array>
//#include <iostream>
using namespace std;

int main()
{
    const size_t Arows = 4, Acolumns = 5, Brows = 5, Bcolumns = 2;
    
    array<array<int, Acolumns>, Arows> A = {};
    array<array<int, Bcolumns>, Brows> B = {};

    if (Acolumns != Brows) {
        cout << "Matrices A & B cannot be multiplied!";
        exit(1);
    }
    
    cout << "This program computes the product of two matrices." << endl;
    cout << "Enter elements of matrix A (by row): \n";
    cout << "A is a " << Arows << "x" << Acolumns << " matrix.\n";
    for (auto &row : A) { //loop through rows
        for (auto &element : row) { //loop through columns of current row
            cin >> element;
        }
    }

    cout << "Enter elements of matrix B (by row): \n";
    cout << "B is a " << Brows << "x" << Bcolumns << " matrix.\n";
    for (auto &row : B) { //loop through rows
        for (auto &element : row) { //loop through columns of current row
            cin >> element;
        }
    }

    array<array<int, Bcolumns>, Arows> C = {};
    for (int i = 0; i < Arows; ++i) {
        for (int j = 0; j < Bcolumns; ++j) {
            for (int k = 0; k < Brows; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "C is a " << Arows << "x" << Bcolumns << " matrix.\n";
    cout << "C = A * B = \n";
    for (auto &row : C) { //loop through rows
        for (auto &element : row) { //loop through columns of current row
            cout << element << " ";
        }
        cout << "\n";
    }
    
    //for (auto &arows : A) { //loop through As rows
    //    for (auto &bcolumns : arows) { //loop through columns of B
    //        for (auto &element : C) {
    //            element += A[arows][brows] * B[brows][bcolumns]
    //        }
    //    }
    //}
    //cout << "C = A * B = \n";
    //for (auto &row : C) { //loop through rows
    //    for (auto &element : row) { //loop through columns of current row
    //        cout << element << " ";
    //    }
    //    cout << "\n";
    //}
    
    return 0;
}