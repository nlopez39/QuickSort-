#include<iostream>

using namespace std;

int randomizedPartition(int * A, int p, int r){
    int pivot = A[r];
    int i = (p-1);
    for(int j = p; j<= r -1; j++){
        if(A[j]< pivot){
            i= i+1; //increment
            swap(A[i],A[j]);
        }
    }
            swap(A[i+1],A[r]);
            return(i+1);

}
void QuickSort(int *A, int p, int r){
    if(p < r){
        int q = randomizedPartition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}
int main(int argc, char **argv){
    int length = 0;
    cin>>length;

    int A[length];

    for(int i = 0; i < length; i++){
        cin>>A[i];
    }
    int n = sizeof(A)/sizeof(A[0]);
    QuickSort(A,0,n-1);

    for(int j = 0; j< length; j++){
        cout<<A[j]<<";";
    }
}



