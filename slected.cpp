#include <bits/stdc++.h> 
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
}

void selection(int arr[],int j){
	int min;
	for(int i=0;i<6;i++){
		min=i;
		for(int j=i+1;j<6;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
}

int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = 6; 
selection(arr,0);

for(int i =0;i<6;i++){
	cout<<arr[i]<<endl;
}

	return 0; 
} 
