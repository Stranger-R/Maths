#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number Of Term : ";
    cin >> n;
    cout << "\n";
    int Data;
    cout << "Enter Type \nGrouped Data : 1 , Ungrouped Data : 2   \nEnter Data : ";
    cin >> Data;

    // int Clasvarata;
    // if (Data == 1)
    // {
    //     cout << "\n";
    //     cout << "Grouped Class \nClass Not Interval : 1  Class Interval : 2\nEnter Class : ";
    //     cin >> Clasvarata;
    // }

    float x[n];
    float f[n];

    cout << "\n";

    {   // For Input // Data Collect
    
            for (int  i = 1; i <= n ; i++)
         {
             cout << "Enter " <<  i << " Term X : ";
             cin  >> x[i];
         }

         if (Data == 1)
         {
             cout << "---------------------------\n Start Frequency\n";
             for (int i = 1; i <= n ; i++)
             {
                 cout << "Enter " <<  i << " Term F : ";
                 cin  >> f[i];
             }
         }
    
    }

    cout << "\n" ;
    cout << " -------------------------" << endl;
    cout << "|         ANSWER          |" << endl;
    cout << " -------------------------" ;

    cout << "\n" << endl;

    if (Data == 2)  // ungrouped data
    {
        float x2[n];
        float X2Sum = 0; 
        float XSum = 0;
        for (int i = 1; i <= n; i++)
        {
            x2[i] = x[i] * x[i];
            X2Sum = X2Sum + x2[i];
            XSum = XSum + x[i];
        }
        
        {   // Data Calculate

            float var[11];

            var[1] = X2Sum;
            var[2] = XSum;
            var[3] = n;

            var[4] = var[1] / var[3];  // (Ex^2 / n)
            var[5] = var[2] / var[3];  // (Ex/n)^2

            var[6] = pow(var[5] , 2);

            var[7] = var[4] - var[6]; 

            var[8] = var[7];

            float varAnswer = var[8]; // Answer

            cout << "The Sigma X2 : " << var[1] << endl;
            cout << "The Sigma X  : " << var[2] << endl;
            cout << "The n        : " << var[3] << "     // The Number Of Term" << endl;

            cout << "\nThe Variance  : " << varAnswer << endl;

        }

    }

    if (Data == 1)
    {
        float FX2[n];
        float FX2Sum = 0;
        float FX[n];
        float FXSum = 0;
        float FSum = 0; 
        for (int i = 1; i <= n; i++)
        {
            FX2[i] = f[i] * (pow(x[i] , 2));
            FX2Sum = FX2Sum + FX2[i];   // FX2 Sum

            FX[i] = f[i] * x[i];    
            FXSum = FXSum + FX[i];  // Sum Of FX

            FSum = FSum + f[i];
        }

        float var1[12];

        var1[1] = FX2Sum / FSum;
        var1[2] = FXSum / FSum;

        var1[3] = pow(var1[2] , 2);

        var1[4] = var1[1] - var1[3];

        var1[5] = var1[4];

        float varAnswer1 = var1[5] ;

        cout << "The Sigma (fx2) fx^2   : " << FX2Sum << endl;
        cout << "The Sigma (Fx)  Fx     : " << FXSum << endl;
        cout << "The N                  : " << FSum << endl;

        cout << "\nThe Variance  : " << varAnswer1 << endl;
        
    }

}