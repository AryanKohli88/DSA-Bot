#include <bits/stdc++.h>
using namespace std;

void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

// the bubble sort algorithm
void bubbleSort(int ar[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)	
	
	// to optimize our code, we run the loop only n-i-1 times
	for (j = 0; j < n-i-1; j++)
		if (ar[j] > ar[j+1])
			swap(&ar[j], &ar[j+1]);
}

// to print any array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int A[] = {32, 43, 10, 65, 34, 23, 49};
	int n = sizeof(A)/sizeof(A[0]);
	bubbleSort(A, n);
	cout<<"Our sorted array is: \n";
	printArray(A, n);
	return 0;
}