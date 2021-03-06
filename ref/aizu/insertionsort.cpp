/*
 * insertionsort.cpp
 */

//include files
#include <iostream>

using namespace std;

//DEFINE MACROS


//DEFINE CONSTANT

//DEFINE PROTOTYPE

void trace(int A[],int N){
  for (int i = 0; i <N; ++i){
	cout << A[i] <<" ";
  }
  cout << endl;
}

void insertionsort(int A[],int N){
  for (int i = 1;  i < N	; ++ i) {
    int v=A[i];
	int j=i-1;
	while (j>=0 && A[j]>v) {
      A[j+1] = A[j];
	  j--;
	}
	A[j+1] = v;
	trace(A,N);
  }  
}

int main(){
  int N,A[100];
  cin >> N;
  for (int i = 0; i <N ; ++i) cin >> A[i];
  trace(A,N);
  insertionsort(A,N);
  return 0;
}

