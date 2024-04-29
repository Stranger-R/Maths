#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <vector>
// #include "Mean.cpp"

using namespace std;

float findMode(float x[], int n) // Find Common Value // 1D Array
{
    // Map to store the frequency of each element
    unordered_map<float, int> frequency;

    // Calculate the frequency of each element
    for (int i = 0; i < n; i++) 
    {
        frequency[x[i]]++;
    }

    // Find the element with the maximum frequency
    float mode;
    int maxFrequency = 0;
    for (const auto& pair : frequency) 
    {
        if (pair.second > maxFrequency) 
        {
            maxFrequency = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

int Ungrouped(float x[] , int n)
{

        cout << "Data Is : ";
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
            {
                cout << x[i] << endl;
                break;
            }
            
            cout << x[i] << " , " ;
        }

        float res = findMode(x , n);    // Call Function // Common Value

        cout << "\nThe Mode : " << res << endl; 

}

int main()
{
   
    cout << "\n";
    int Data;
    cout << "Enter Type \nGrouped Data : 1 , Ungrouped Data : 2   \nEnter Data : ";
    cin >> Data;

    int ClassData;
    if (Data == 1)
    {
        cout << "\n";
        cout << "Grouped Class \nClass Not Interval : 1  Class Interval : 2\nEnter Class : ";
        cin >> ClassData;
    }

    int n;
    cout << "\nEnter Number Of Term : ";
    cin >> n;

    float x[n];
    float f[n];

    cout << "\n";

    { // For Input // Data Collect

        for (int i = 1; i <= n; i++)
        {
            cout << "Enter " << i << " Term X : ";
            cin >> x[i];
        }

        if (Data == 1)
        {
            cout << "---------------------------\n Start Frequency\n";
            for (int i = 1; i <= n; i++)
            {
                cout << "Enter " << i << " Term F : ";
                cin >> f[i];
            }
        }
    }


    cout << "\n" ;
    cout << " -------------------------" << endl;
    cout << "|         ANSWER          |" << endl;
    cout << " -------------------------" ;

    cout << "\n" << endl;

    if (Data == 2)
    {
            Ungrouped(x , n);
    }
    

   if (Data == 1) 
   {   

        {   // Print Data grouped

            cout  << "    X     F" << endl;
            cout  <<" ------------" << endl;

            for (int i = 1; i <= n; i++)
            {
                cout << "  "<< x[i] << "     " << f[i] << endl;
            }
        }
    
           // Find Max Frequncy 
            float mf = -1; 
            int max = 0; 

            for (int i = 1; i <= n; i++) 
            {
                if (mf < f[i]) 
                {                          
                    mf = f[i];  
                    max = i;    
                }
            }
        


        if (ClassData == 1) //  grouped data // Not Interval Class
        {
            
            cout << "\n" << endl;
            cout << "Max Frequency : " << mf << endl;
            cout << "The Mode      : " << x[max] << endl;
        }


        if (ClassData == 2)
        {
            
           
            if (max == 1)   // Max Frequency // 1st
            {

                float Fx[n];
                float fx[n];
                float fx1 = 0;
                float Fsum = 0;
                float FXsum = 0;

                for (int i = 1; i <= n; i++)
                {
                    fx1 = x[i] * f[i];
                    fx[i] = fx1;

                    Fsum = Fsum + f[i];    
                    FXsum = FXsum + fx[i];
                }
                //----------------------------------------- Mean
                   float AnswerMean = FXsum / Fsum;

                //-------------------- Calculate Median
                float cf[n];
                float cf1 = 0;
                for (int  i = 1; i <= n; i++)
                {
                    cf1 = cf1 + f[i];
                    cf[i] = cf1;
                }

                cf1 = cf1/2;

            
            
                int gd1;

                    for (int i = 1; i <= n; i++)
                    {
                        if (cf1 < cf[i])
                        {
                            gd1 = i;
                            break;
                        }    
                    }

                float ud[12];

                ud[1] = x[n] - x[n-1];  // Class Different // h

                ud[2] = cf1; // N/2

                ud[3] = cf[gd1-1]; // CF // C

                ud[4] = f[gd1]; // F

                ud[5] = x[gd1] - x[1]; // Lower Limit // L

                float res[10];

                res[1] = ud[2] - ud[3]; // N/2 - C

                res[2] = ud[1] / ud[4]; // h/f

                res[3] = res[1] * res[2];  // (h/f) * ( (n/2) - c )

                res[4] = res[3] + ud[5]; // l + // res[3]  (h/f) * ( (n/2) - c )    // Answer

                float AnswerMedian = res[4];       

                cout << "\nThe Median Frequency Is 1st : " << max << endl;

                cout << endl << "Mode : 3(Median) - 2 (Mean)" << endl << endl;

                cout << "The Median : " << setprecision(3) << AnswerMedian << endl << "The Mean   : " << setprecision(3) << AnswerMean << endl;

                float AnswerMode = (3 * AnswerMedian) - (2 * AnswerMean);

                cout << endl << "\nThe Mode : " << setprecision(3) << AnswerMode << endl;          

    
            }

            if (max > 1)
            {
                    float A[10];

                    A[1] = f[max];      // Find Max Freq        // F M
                    A[2] = f[max - 1];    // Find Max Freq - 1    // F - 1
                    A[3] = f[max + 1];     // Find Max Freq + 1    // F + 1

                    A[4] = x[2] - x[1]; // Class Different // h
                    A[5] = A[4] / 2;


                    A[6] = x[max];  
                    A[7] = A[6] - A[5];     // Lower Limit // l

                    // ----------------------------------------------------- //
                    //  Main Operation Start

                    float Z = A[1];
                    float Z1 = A[1];
                    float Z2 = Z + Z1;  // Fm*2;

                    float Res[12];

                Res[1] = A[1] - A[2];   // Fm - F-1

                Res[2] = Z2 - A[2];     // Fm*2 - F-1
                Res[3] = Res[2] - A[3];     // - F+1

                Res[4] = Res[1] / Res[3];   // Fm - f-1  /  Fm*2 - f-1 - f+1

                Res[5] = Res[4] * A[4];     // * h

                Res[6] = Res[5] + A[7];     // + l  // Answer // Mode

                cout << "\nMax Frequency : " << A[1] << endl;

                cout << "\n";
                cout << "Fm   : " << A[1] << endl;
                cout << "F-1  : " << A[2] << endl;
                cout << "F+1  : " << A[3] << endl;
                cout << "2Fm  : " << Z2   << endl;

                cout << "\n";
                cout << "The Size Of The Class Interval   h : " << A[4] << endl;
                cout << "Lower Limit                      l : " << A[7] << endl;

                cout << "\n\n The Mode : " << Res[6] << endl;
    
            }
            
    
        }
        


    }

}