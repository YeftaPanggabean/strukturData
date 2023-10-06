#include<iostream>
using namespace std;

//fungsi untuk menampilkan isi dar array
void display(int array[], int size){
    for(int i=0; i<size;i++){
        cout<<"["<<array[i]<<"] ";
    }
}

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selectionSort(int array[], int size){
    for(int i=0; i<size;i++){
        //ambil nilai dari i dan simpan sebagai elemen terkecil
        int min=i;
        for(int j=i+1; j<size; j++){
            //lakukan perbandingan 
            if(array[j]<array[i]){
                min=j;
            }
        }
        swap(&array[min], &array[i]);
    }
}

int main(){
    int array[]={20,12,10,15,2};
    int size = sizeof(array)/sizeof(array[0]);

    cout<<"Isi array sebelum diurutkan: \n";
    display(array,size);

    selectionSort(array,size);

    cout<<"\nIsi array setelah diurutkan: \n";
    display(array,size);

    return 0;
}