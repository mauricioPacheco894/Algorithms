#include <bits/stdc++.h>

using namespace std;

int A[100];

int main()
{
    int n, x, maxi=0;
    
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cin >> x;
        A[x]++;
        maxi = max(maxi, x);
    }
    
    for(int i = 0; i<=maxi; i++){
        while(A[i]--){
            cout << i << " ";
        }
    }

    return 0;
}