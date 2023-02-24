#include  <bits/stdc++.h>
#include <ctime>
using namespace std;
    
    int generateRandomNumber(const int min, const int max)
{
    int num = rand() % (max - min + 1 ) + min ;
    // TODO: Return a random integer number between min and max
    return num ;
}
int main()
{
    srand(time(0));
    int min , max;
    cin >> min >> max;
    for ( int i =0 ; i < 20 ; i++)
    cout << generateRandomNumber( min , max ) << endl;
    
}