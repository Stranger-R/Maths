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

    // int ClassData;
    // if (Data == 1)
    // {
    //     cout << "\n";
    //     cout << "Grouped Class \nClass Not Interval : 1  Class Interval : 2\nEnter Class : ";
    //     cin >> ClassData;
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

            float sd[11];

            sd[1] = X2Sum;
            sd[2] = XSum;
            sd[3] = n;

            sd[4] = sd[1] / sd[3];  // (Ex^2 / n)
            sd[5] = sd[2] / sd[3];  // (Ex/n)^2

            sd[6] = pow(sd[5] , 2);

            sd[7] = sd[4] - sd[6]; 

            sd[8] = sqrt(sd[7]);

            float SDAnswer = sd[8]; // Answer

            cout << "The Sigma X2 : " << sd[1] << endl;
            cout << "The Sigma X  : " << sd[2] << endl;
            cout << "The n        : " << sd[3] << "     // The Number Of Term" << endl;

            cout << "\nThe Standard Deviation : " << SDAnswer << endl;

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

        float SD1[12];

        SD1[1] = FX2Sum / FSum;
        SD1[2] = FXSum / FSum;

        SD1[3] = pow(SD1[2] , 2);

        SD1[4] = SD1[1] - SD1[3];

        SD1[5] = sqrt(SD1[4]);

        float SDAnswer1 = SD1[5] ;

        cout << "The Sigma (fx2) fx^2   : " << FX2Sum << endl;
        cout << "The Sigma (Fx)  Fx     : " << FXSum << endl;
        cout << "The N                  : " << FSum << endl;

        cout << "\nThe Standard Deviation : " << SDAnswer1 << endl;
        
    }

}