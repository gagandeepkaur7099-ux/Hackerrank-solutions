#include <bits/stdc++.h>

using namespace std;

int main() {
    int n ;
    cin>>n;
    
    int arr[100] [100];
    
    for (int i =0 ; i<n ;i++)
    {
        for(int j =0; j<n ; j++)
        {
                cin>> arr[i] [j];
        }
    }
    int left =0;
    int right=0;
    for(int i=0 ; i<n; i++)
    {
        left = left +arr[i][i];
        right= right +arr[i] [n -1 -i];
    }
    cout<< abs(left-right);
    return 0 ;
    
}
