#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i];
    cout<<endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n,count =0;
        cin>>n;
        int arr[n];
        memset(arr,0,sizeof(arr));
        for (int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(arr[temp-1] ==0 ){
                count += 1;
                arr[temp-1] = 1;
            }
        }
        cout << (n - count) << endl;
    }
    return 0;
}
