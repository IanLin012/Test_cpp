#include <bits/stdc++.h>  
using namespace std;  

int main()  
{
    int n;
    cin >> n;
    int arr[n], *ptr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        ptr[i] = &arr[i];
    }
    sort(arr, arr+n);
    int compare[3] = {0};
    for(int a=0 ; a<n-2 ; a++)
    {
        for(int b=a+1 ; b<n-1 ; b++)
        {
            for(int c=b+1 ; c<n ; c++)
            {
                if((arr[a]+arr[b]+arr[c]==0) && (arr[a]!=compare[0]&&arr[b]!=compare[1]&&arr[c]!=compare[2]))
                {
                    cout << *ptr[a] << " " << *ptr[b] << " "<< *ptr[c] << endl;
                    int compare[3] = {*ptr[a], *ptr[b], *ptr[c]};
                }
                else if(((a==n-3)&&(b==n-2)&&(c==n-1)) && (compare[0]==0&&compare[1]==0&&compare[2]==0))
                    cout << "0" << endl;
            }
        }
    }
    return 0;
}
