//contributed by ankit
#include <stdio.h>


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[]){
    int n = 3;
    int i, j;
    for (i = 0; i < n-1; i++)
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}
 

int main(){
    int t;
    scanf("%d",&t);
    int i;
    for ( i = 0; i < t; i++){
        int a[3];
        int j;
        for(j = 0; j<3;j++){
            scanf("%d",&a[j]);
        }
        bubbleSort(a);
        printf("%d\n",a[1]);
    }
    
}
