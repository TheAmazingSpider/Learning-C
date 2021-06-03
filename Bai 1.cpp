#include <stdio.h>
#include <string.h>

int FrontSum(int arr[100], int n);
int BackSum(int arr[100],int n);
int PrimeCheck(int x);
int PrimeSum(int arr[100]);


//Sum of the first n value
int FrontSum(int arr[100],int n){ //Providing arguments as Array and N
	int sum = 0;
	for (int i = 0;i<n;i++){
		sum += arr[i];
	}
	return sum;
}

//Sum of the last n value
int BackSum(int arr[100],int n){
	int sum = 0;
	for (int i = 99;i> (99-n-1);i--){ //3 last value will have index 99,98,97
		sum += arr[i];
	}
	return sum;
}

//Prime number check
int PrimeCheck(int x){
	if (x == 1 || x == 2) { //1 and 2 are prime numbers
		return 1;  
	}
	for (int i = 2; i++; i*i<x){ //Check whether x is dividable by some i smaller than square(x) 
 		if (x % i != 0){
			return 1; //If not -> Prime number
		}
		if (x % i ==0) {
			return 0; //If able -> Not prime number
		}
	}
}

//Sum of prime numbers
int PrimeSum(int arr[100]){
	int sum = 0;
	for (int i = 0;i<100; i++){
		if (PrimeCheck(arr[i]) == 1) {
			sum += arr[i];
		}
	}
	return sum;	
}

int main(){
	int arr[100]; //Allocating memory for a 100-element array
	for (int i = 0;i<100; i++){ //looping to create 1->100 array
		arr[i] = i+1;
	}
	//Cau 1 tong 10 gia tri dau
	int cau1 = FrontSum(arr,10);
	printf("Tong cua 10 gia tri dau la: %d\n", cau1);
	//Cau 2 tong 20 gia tri cuoi
	int cau2 = BackSum(arr,20);
	printf("Tong cua 20 gia tri cuoi la: %d\n", cau2);
	//Cau 3 tong so nguyen to
	int cau3 = PrimeSum(arr);
	printf("Tong cua tat ca cac so nguyen to la: %d", cau3);
	
}
