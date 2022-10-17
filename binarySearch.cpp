#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int n, int x){
    int left = 0, right = n-1;
    while(left <= right){
        int mid = (left+right)/2;
        if(A[mid] == x){
            return mid;
        }
        else if(A[mid] < x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int firstOccurrence(int A[], int n, int x){
    int left = 0, right = n-1, result = -1;
    while(left <= right){
        int mid = (left+right)/2;
        if(A[mid] == x){
            result = mid;
            right = mid-1;
        }
        else if(A[mid] < x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return result;
}

int lastOccurrence(int A[], int n, int x){
    int left = 0, right = n-1, result = -1;
    while(left <= right){
        int mid = (left+right)/2;
        if(A[mid] == x){
            result = mid;
            left = mid+1;
        }
        else if(A[mid] < x){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int A[1000001], n, q, x;

    cin >> n >> q;

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> x;
        cout << firstOccurrence(A, n, x) << "\n";
    }

    return 0;
}