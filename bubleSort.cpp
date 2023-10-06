/*
Program untuk implementasi buble sort sederhana
*/
#include<iostream>
using namespace std;
int main(){
	int array[]={77,42,35,12,101,5};
	cout<<"Nilai sebelum diurutkan: \n";
    for(int i=0;i<6;i++){
        cout<<array[i]<<" ";
    }cout<<endl;

	for(int i=0; i<6;i++){
		//pair-wise comparison
		for(int j=i+1;j<6;j++){
			//compare and swap
			if(array[j]<array[i]){
				int temp=array[i];//temporary variabel
				array[i]=array[j];//
				array[j]=temp;
				
			}
		}
	}
    cout<<"Elemen setelah diurutkan: \n";
    for(int i=0;i<6;i++){
cout<<array[i]<<" ";
    }


	return 0;
}