#include <bits/stdc++.h>  
using namespace std;  

int main()  
{
    int n;
    cin >> n;
    int arr[n], ans[3]={0};
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int a=0 ; a<n-2 ; a++)
    {
        for(int b=a+1 ; b<n-1 ; b++)
        {
            for(int c=b+1 ; c<n ; c++)
            {
                if(arr[a]+arr[b]+arr[c] == 0)
                {
                    ans[0] = arr[a];
                    ans[1] = arr[b];
                    ans[2] = arr[c];
                    if(ans[0]!=ans[1] && ans[1]!=ans[2])
                    {
                        for(int i=0 ; i<3 ; i++)
                        {
                            if(i==2)
                                cout << ans[i] << endl;
                            else
                                cout << ans[i] << " ";
                        }
                    }
                }
                else if((a == n-3) && (b==n-2) && (c==n-1) && (ans[0]==ans[1] && ans[1]==ans[2]))
                    cout << "0" << endl;
            }
        }
    }
    return 0;
}
