#include <iostream>
using namespace std;
int insertionSort(int arr[], int n)
{
    int counter=0;
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            counter++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return counter;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    int c=1;
    while(t--){
        int n;cin>>n;
        int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mov=insertionSort(a,n);
        for(int i=0;i<n;i++){
            if(a[i]>=1){
                sum+=a[i];
            }
        }
        printf("Case %d: %d %d\n",c++,sum,mov);
    }
}
