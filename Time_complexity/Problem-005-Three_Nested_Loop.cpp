#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int cnt=0;

    for( int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for( int k=0; k<n; k++){
                cnt = cnt + 1;
            }
        }
    }
    printf("%d\n",cnt);

    return 0;
}
