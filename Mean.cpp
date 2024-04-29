# include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number Of Term : ";
    cin >> n;

    int Data;
    cout << "Enter Type \n Grouped Data : 1 , Ungrouped Data : 2  =  ";
    cin >> Data;

    float x[n];
    float f[n];
    float Fx[n];

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

    cout << " -------------------------" << endl;
    cout << "|         ANSWER          |" << endl;
    cout << " -------------------------"  << endl;

    cout << "\n" << endl;    

    if(Data == 1)
    {

        cout << "Grouped Data" << endl;


        float res[10];

        res [1] = 0;
        res [2] = 0;

        for (int i = 1; i <= n ; i++)
        {
            Fx[i] = x[i] * f[i];    // Fx

            res[1] = res[1] + f[i]; // Sum Of F

            res[2] = res[2] + Fx[i];    // Sum Of FX
        }

              { // Print Value // Table

              cout <<"  ----------------------" << endl;
              cout << " |  X   |" << "   F   |" << "   FX  |" << endl;
              cout <<"  ----------------------" << endl;

                for (int  i = 1; i <= n ; i++)
              {

                cout <<"    " << x[i] << "   |   " << f[i] << "   |   " << Fx[i] << endl;
              
              }

              }

              cout << "\n";

               cout <<"      " << "    |   " << res[1] << "  |   " << res[2] << endl;


        cout << "\n" << endl;

        cout << "The Sum Of F   : " << res[1] << endl;     // The Sum Of F

        cout << "The Sum Of FX  : " << res[2] << endl;    // The Sum Of FX

        cout << "            _\n";
        cout << "The Mean Of X  : " << res[2] / res[1] << endl;

        res[3] = res[2] / res[1];

       
    }

    if (Data == 2)  // Ungrouped Data
    {
        float R = 0;

        cout << "Ungrouped Data";
    
        cout << "  X    " << endl;
        cout <<  "-----" << endl;

        for (int i = 1; i <= n; i++)
        {
            cout << "  " << x[i] << endl;
            R = R + x[i];
        }

        cout <<"\n  " << R << endl;

        cout << "\nThe Number Of Term : " << n << endl;
        cout << "The Sum Of X       : " << R << endl;

        cout << "\nThe Mean Of : " << R/n << endl;
        
        



    }
    
        
    

  
    
    
    




}