#include <iostream>
using namespace std;

int arr[1000000];

void swap(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void QuickSort(int* arr, int start, int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    int pivot = arr[mid];

    swap(&arr[start],&arr[mid]);

    int left = start+1, right = end;
    while(1){
        while(arr[left]<=pivot){left++;}
        while(arr[right]>pivot){right--;}
        if(left>right) break;
        swap(&arr[left],&arr[right]);
    }
    swap(&arr[start],&arr[right]);

    QuickSort(arr,start,right-1);
    QuickSort(arr,right+1,end);
}


int main(int argc, char *argv[])
{
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, N - 1);
    for(int i=0; i<N; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}
