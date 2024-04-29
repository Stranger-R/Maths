#include <iostream>
using namespace std;


void bubbleSort(float arr[], int n) 
{
    for (int i = 1; i <= n - 1; ++i) 
    {
        for (int j = 1; j <= n - i; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // Swap arr[j] and arr[j+1]
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int Ungrouped(int Data , int n , float x[])
{

    if (Data == 2)
    {
        float x1[n];

        { // New Array Create For Ungrouped Data // Order From
            for (int i = 1; i <= n; i++)
            {
                x1[i] = x[i];
            }
        }
        

        bubbleSort(x1 , n);   
        float R = 0;

        cout << "Ungrouped Data \n " << endl;
    
        cout << "\n";
        
        {   // Original Data Print Without Order From
            
            cout << "Original Data \n";

            for (int i = 1; i <= n; i++)
            {   
                

                if (n == i)
                {
                    cout << x[i] ;
                    break;
                }
                cout << x[i] << " , " ;
                
            }
        }

        cout << "\n" << endl ;
        
        {   // Original Data Print with Order From

            cout << "Order From Data \n";
            for (int i = 1; i <= n; i++)
            {
                
                if (n == i)
                {
                    cout << x1[i] ;
                    break;
                }
                cout << x1[i] << " , " ;
                
            }

        }

        float ud[12];
        
           if (n%2 == 0)
           {
             int a = n/2;
              ud[1] = x1[a]; // Mid Value
              ud[2] = x1[a+1];  // Mid + 1 Value

              ud[3] = (ud[1] + ud[2]) / 2;

              cout << endl << endl << "The Median : " << ud[3];
           }    
           

        else
        {
            int a = n/2;
            a = a + 1;

            cout << endl << endl << "The Median : " << x1[a];
        }
           
    }

}



int GropedData(int Data , float x[] , float f[] , int n , int ClassData)
{

    if (Data == 1)
    {
        { // 
            float cf[n];
            float cf1 = 0;
            for (int  i = 1; i <= n; i++)
            {
                cf1 = cf1 + f[i];
                cf[i] = cf1;
            }

            cf1 = cf1/2;

            cout << "  X  | " << " F  | " << " CF   " << endl;
            cout << "-------------------" << endl;
        
            for (int i = 1; i <= n; i++)
            {
                cout << "  " << x[i] << "     " << f[i] << "     " << cf[i] << endl;
            }

            
            
                int gd1;

                    for (int i = 1; i <= n; i++)
                    {
                        if (cf1 < cf[i])
                        {
                            gd1 = i;
                            break;
                        }    
                    }


                 

                if (ClassData == 1 )    // Class Not Interval
                {

                    float gd[11];

                    gd[2] = x[gd1];

                    cout << "\n" ;

                    cout << " The Sum Of All Frequency : " << cf[n] << endl;

                    cout << " The N/2                  : " << cf1 << endl;

                    cout << "\n The Median                :" << gd[2] << endl;

                }


                
            
            if (ClassData == 2) // Class Interval
            {
                float ud[12];

                ud[1] = x[n] - x[n-1];  // Class Different // h

                ud[2] = cf1; // N/2

                ud[3] = cf[gd1-1]; // CF // C

                ud[4] = f[gd1]; // F

                float LowerLimit = ud[1] / 2;

                ud[5] = x[gd1] - LowerLimit; // Lower Limit // L

                float res[10];

                res[1] = ud[2] - ud[3]; // N/2 - C

                res[2] = ud[1] / ud[4]; // h/f

                res[3] = res[1] * res[2];  // (h/f) * ( (n/2) - c )

                res[4] = res[3] + ud[5]; // l + // res[3]  (h/f) * ( (n/2) - c )    // Answer

                // print value

                cout <<"\n" << endl; 

                cout << "Lower Limit                       L    : " << ud[5] << endl;

                cout << "The Size Of The Class Interval    h    : " << ud[1] << endl;

                cout << "The Frequency                     f    : " << ud[4] << endl;

                cout << "N/2                               n/2  : " << ud[2] << endl;

                cout << "The Cumulative Frequency          c    : " << ud[3] << endl;

                cout << "\n-------------------------------------" << endl;

                cout << endl << "The Median  :   " << res[4] << endl;
            }

        }
    }

}


int main()
{
    int n;
    cout << "Enter Number Of Term : ";
    cin >> n;
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

      

        if (Data == 2)  // Call For Ungroped Data
        {
            Ungrouped(Data , n , x);
        }
    
    // int UngropedData(int Data , float x[] , float f[] , int n , int ClassData)

    if (Data == 1)
    {
        GropedData(Data , x , f , n , ClassData);
    }
    

}
    
    
