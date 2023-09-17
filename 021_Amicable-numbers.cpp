#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> amicable =
    {
        220, 284, 1184, 1210, 2620, 2924, 5020, 5564, 6232, 6368, 10744, 10856, 12285, 14595, 
        17296, 18416, 63020, 66928, 66992, 67095, 69615, 71145, 76084, 79750, 87633, 88730
    };
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int total = 0;
        
        for(auto it : amicable)
        {
            if(it >= n) break;
            
            total += it;
        }
        cout << total << endl;        
    }
    return 0;
}
