#include <iostream>
#include <climits>
using namespace std;
 
int knapsack(int v[], int w[], int n, int W)
{
    
    if (W < 0) {
        return INT_MIN;
    }
 
    if (n < 0 || W == 0) {
        return 0;
    }

    int include = v[n] + knapsack(v, w, n - 1, W - w[n]);
 
    int exclude = knapsack(v, w, n - 1, W);
 
    return max (include, exclude);
}
 

int main()
{
    
    int w[] = { 2, 1, 3, 2 };
    int v[] = { 12, 10, 21, 15};
    int W = 7;
    int n = sizeof(v) / sizeof(v[0]);
 
    cout << "Knapsack value is " << knapsack(v, w, n - 1, W);
 
    return 0;
}
