// MatrixMultiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;


int main()
{
    int Arows, Acolumns, Brows, Bcolumns, i, j, k;
    int A[5][5], B[5][5], C[5][5];

    cout << "Enter the number of rows and columns of A: ";
    cin >> Arows >> Acolumns;
    cout << "Enter the number of rows and columns of B: ";
    cin >> Brows >> Bcolumns;

    if (Acolumns != Brows) {
        cout << "Matrices A & B cannot be multiplied!";
        exit(1);
    }

    cout << "Enter elements of matrix A (by row): \n";
    for (i = 0; i < Arows; i++) {
        for (j = 0; j < Acolumns; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of matrix B (by row): \n";
    for (i = 0; i < Brows; i++) {
        for (j = 0; j < Bcolumns; j++) {
            cin >> B[i][j];
        }
    }

    for (i = 0; i < Arows; i++) {
        for (j = 0; j < Bcolumns; j++) {
            C[i][j] = 0;
            for (k = 0; k < Brows; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "C = A * B = \n";
    for (i = 0; i < Arows; i++) {
        for (j = 0; j < Bcolumns; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

