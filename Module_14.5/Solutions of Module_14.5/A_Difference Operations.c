
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i, a;
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        a = 1;
        for (i = 1; i < n; i++)
        {
            if(arr[i] % arr[0]){
                a = 0;
                break;
            }
        }
        if(a==1){
            printf("YES\n");
        }
        else{
             printf("NO\n");
        }
    }
    return 0;
}
