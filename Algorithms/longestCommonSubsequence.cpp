#include <iostream>
#include <string.h>
using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}

void LCS(char* A, char* B, int m, int n)
{
	int T[m+1][n+1];
	for(int i=0; i<=m; i++)
	{
		for(int j=0; j<=n; j++)
		{
			if(i==0 || j==0)
				T[i][j]=0;
			else if(A[i-1] == B[j-1])
				T[i][j] = T[i-1][j-1]+1;
			else
				T[i][j] = max(T[i-1][j],T[i][j-1]);
		}
	}
	
	cout<<T[m][n];
}

int main() {
	char A[] = "ABCDEF";
	char B[] = "ABCEFG";
	int m=strlen(A);
	int n=strlen(B);
	LCS(A,B,m,n);
	return 0;
}
