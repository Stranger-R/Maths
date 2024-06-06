#include <iostream>
using namespace std;


int main()
{

        //  Ques : Write a program to add two matrices.


    int r1,c1;   // r1 c1  <<  1st Matrix Row ANd 1st Matrix Columns

    cout << "Enter First (1st) Details  " << endl;
    cout << "Enter Rows : ";
    cin >> r1;
    cout << "Enter Columns : ";
    cin >> c1;

    int r2,c2;   // r1 c1  <<  1st Matrix Row ANd 1st Matrix Columns
     cout << "Enter Secound (2nd) Details  " << endl;
    cout << "Enter Rows 2nd Matrix : ";
    cin >> r2;
    cout << "Enter Columns 2nd Matrix : ";
    cin >> c2;

    

    if (r1 == r2 && c1 == c2)
    {
        int Firstmat[r1][c1];   // Because Both Same Size
        int Secmat [r1][c1];

        cout << endl << "-----------------------" ;
        cout << endl << "Enter 1st Matrix Input " << endl;
        cout << "-----------------------" << endl;

        for (int i = 0; i < r1; i++)
        {
            cout << endl << "-----------------------------" << endl;
            cout << i+1 << " Rows " << endl ;
            cout << "-------" << endl ;

            for (int j = 0; j < c1; j++)
            {
                cout << "Enter 1st Matrix [" << i << "] [" << j << "] : ";
                cin >> Firstmat[i][j]; 
            }

        }
        
        cout << endl << "-----------------------" ;
        cout << endl << "Enter 2nd Matrix Input " << endl;
        cout << "-----------------------" << endl;
       
       // cout << "-----------------------" << endl;

        for (int i = 0; i < r1; i++)
        {
             cout << endl << "-----------------------------" << endl;
             cout << i+1 << " Rows " << endl ;
            cout << "-------" << endl ;

            for (int j = 0; j < c1; j++)
            {
                cout << "Enter 2nd Matrix [" << i << "] [" << j << "] : ";
                cin >> Secmat [i][j]; 
            }
        }    

cout << endl << "This Is 1st Matrix" << endl;
cout <<     "-------------------" << endl;
        
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << Firstmat [i][j] << "  " ;
            }

            cout  << endl ;
        }
        
cout << endl << "This Is 2st Matrix" << endl;
cout <<     "-------------------" << endl;
        
        for (int i = 0; i < r1; i++)
        {
        //    cout << "         " ; 
            for (int j = 0; j < c1; j++)
            {
                cout << Secmat [i][j] << "  " ;
            }

            cout  << endl ;
        }
        
        cout << endl <<"--------------------------------------" << endl;
        cout << "  The Addition Of 1st And 2nd Matrix" << endl;
        cout <<"--------------------------------------" << endl;

       for (int i = 0; i < r1; i++)
       {
            for (int j = 0; j < c1; j++)
            {
                     cout << Firstmat [i][j] + Secmat [i][j] << "  ";
            }
            
            cout << endl;
       }
       
       

    }
    

    else
    {
        cout << endl << "Both Are Matrix Rows And Columns Are Not Same" << endl;
    }
}