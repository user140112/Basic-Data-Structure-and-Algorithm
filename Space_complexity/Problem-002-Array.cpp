#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,even[101];

    for( int i=0; i<101; i++){
        even[i]=0;
    }

    for( int j=0; j<101; j+=2){
        even[j]=1;
    }

    scanf("%d",&n);

    if( even[n] )
        printf("This is an even number\n");
    else
        printf("This is an odd number\n");

    return 0;
}
