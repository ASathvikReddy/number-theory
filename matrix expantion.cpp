#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Matrix
{
	int a[2][2];
};
Matrix mul(Matrix A, Matrix B)
{
	Matrix res;
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<2;col++)
		{
			int sum=0;
			for(int i=0;i<2;i++)
			{
				sum+=A.a[row][i]*B.a[i][col];
			}
			res.a[row][col]=sum;
		}
	}
	return res;
} 
Matrix Identity()
{
	Matrix ID;
	ID.a[0][0]=1,ID.a[0][1]=0;
	ID.a[1][0]=0,ID.a[1][1]=1;
	return ID;
}
Matrix Matrix_expo(Matrix A,int exp)
{
	if(exp==0)
	return Identity();
	Matrix ans=Matrix_expo(A,exp/2);
	if(exp%2==0)
	{
		return mul(ans,ans);
	}
	else
	{
		return mul(A,mul(ans,ans));
	}
}
int main()
{
	Matrix A;
	A.a[0][0]=1 , A.a[0][1]=0;
	A.a[1][0]=1 , A.a[1][1]=2;
	Matrix C = Matrix_expo(A,3);
	cout<<C.a[0][0]<<" "<<C.a[0][1]<<endl;
	cout<<C.a[1][0]<<" "<<C.a[1][1]<<endl;
}
