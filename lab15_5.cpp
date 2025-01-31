#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int arr[] = {50, 100, 500, 1000};
	int num1, num2, num3, num4;
	num1 = rand() % 4;
	num2 = rand() % 4;
	num3 = rand() % 4;
	num4 = rand() % 4;

	for(int i = 0; i < 10; i++){
		if(num1 == num2) num2 = rand() % 4;
		if(num1 == num3) num3 = rand() % 4;
		if(num1 == num4) num4 = rand() % 4;

		if(num2 == num3 || num2 == num1) num3 = rand() % 4;
		if(num2 == num4 || num2 == num1) num4 = rand() % 4;

		if(num3 == num4 || num3 == num1 || num3 == num2) num4 = rand() % 4;
	}
	*a = arr[num1];
	*b = arr[num2];
	*c = arr[num3];
	*d = arr[num4];
}
