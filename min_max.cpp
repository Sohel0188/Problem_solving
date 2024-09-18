#include <iostream>   
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >>c >>d;
    int minValue = min({a,b,c,d});
    int maxValue = max({a,b,c,d});
   
    cout << minValue <<" "<<maxValue << endl;
    return 0;
}