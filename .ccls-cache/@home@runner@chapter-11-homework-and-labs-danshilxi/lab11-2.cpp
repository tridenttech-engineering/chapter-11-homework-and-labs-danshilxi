//lab11-2.cpp - storesfinish times in an array
//and displays the average and lowest times
//Creat/revise by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{

    double finishTimes[5] = {0.0};
    double avgTime = 0.0;
    double lowestTime = 0.0;

    for (int x = 0; x < 5; x += 1)
        {
            cout << "Time for race " << x + 1 << ": ";
            cin >> finishTimes[x];
        }

    avgTime = getAverage(finishTimes, 5);
    lowestTime = getLowest(finishTimes, 5);
   
    cout << fixed << setprecision(1) << endl;
    cout << "Average 5K finish time: " << avgTime << endl;
    cout << "Lowest 5K finish time: " << lowestTime << endl;
    return 0;
}//end of main function    


double getAverage(double times[], int numElements)
{
    double total = 0.0;
    
    for (int x = 0; x < numElements; x += 1)
        total += times[x];
return total / numElements;
}


double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int x = 1; x < numElements; x += 1)
        if (times[x] < lowest)
            lowest = times[x];
    
    return lowest;
}