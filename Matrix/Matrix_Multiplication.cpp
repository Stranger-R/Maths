#include <iostream>
using namespace std;

int main() {

    //  Ques : Write a program to multiply two matrices.

    int r1, c1; // r1 c1  <<  1st Matrix Row ANd 1st Matrix Columns

    cout << "Enter First (1st) Matrix Details  " << endl;
    cout << "Enter Rows : ";
    cin >> r1;
    cout << "Enter Columns : ";
    cin >> c1;

    int r2, c2; // r1 c1  <<  2nd Matrix Row And 2nd Matrix Columns
    cout << "Enter Second (2nd) Matrix Details  " << endl;
    cout << "Enter Rows 2nd Matrix : ";
    cin >> r2;
    cout << "Enter Columns 2nd Matrix : ";
    cin >> c2;

    if (c1 == r2) {
        int Firstmat[r1][c1]; // First matrix
        int Secmat[r2][c2];   // Second matrix
        int Result[r1][c2];   // Result matrix

        cout << endl << "-----------------------";
        cout << endl << "Enter 1st Matrix Input " << endl;
        cout << "-----------------------" << endl;

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << "Enter 1st Matrix [" << i << "] [" << j << "] : ";
                cin >> Firstmat[i][j];
            }
        }

        cout << endl << "-----------------------";
        cout << endl << "Enter 2nd Matrix Input " << endl;
        cout << "-----------------------" << endl;

        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << "Enter 2nd Matrix [" << i << "] [" << j << "] : ";
                cin >> Secmat[i][j];
            }
        }

        // Initializing the result matrix to zero
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                Result[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    Result[i][j] += Firstmat[i][k] * Secmat[k][j];
                }
            }
        }

        cout << endl << "This Is 1st Matrix" << endl;
        cout << "-------------------" << endl;

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << Firstmat[i][j] << "  ";
            }
            cout << endl;
        }

        cout << endl << "This Is 2nd Matrix" << endl;
        cout << "-------------------" << endl;

        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << Secmat[i][j] << "  ";
            }
            cout << endl;
        }

        cout << endl << "--------------------------------------" << endl;
        cout << "  The Multiplication Of 1st And 2nd Matrix" << endl;
        cout << "--------------------------------------" << endl;

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << Result[i][j] << "  ";
            }
            cout << endl;
        }

    } else {
        cout << endl << "Matrix multiplication not possible: number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
    }

    return 0;
}
