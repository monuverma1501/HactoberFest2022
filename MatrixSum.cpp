#include <iostream.h>
#define p printf
#define s scanf

int m, n, a, b;
int A[10][10], B[10][10], S[10][10];

int matA()
{
	int i, j;

	cout<<"Enter the elements row wise"<<endl;
	for(i=0; i<a; i++)
	{
		p("Enter %d row elements:\n", i+1);
		for(j=0; j<b; j++)
		{
			p(" ");
			s("%d", &A[i][j]);
		}
	}
	p("matrix A is:\n");
	for(i=0; i<a; i++)
	{
	   for(j=0; j<b; j++)
	   {
	   	p("%d  ", A[i][j]);
	   }
	   p("\n");
	}
  return (0);
}

int matB()
{
	int i, j;

	p("Enter the elements row wise\n");
	for(i=0; i<m; i++)
	{
		p("Enter %d row elements:\n", i+1);
		for(j=0; j<n; j++)
		{
			p(" ");
			s("%d", &B[i][j]);
		}
	}
	p("matrix B is:\n");
	for(i=0; i<m; i++)
	{
	   for(j=0; j<n; j++)
	   {
	   	p("%d  ", B[i][j]);
	   }
	   p("\n");
	}
   return (0);	
}

int sum()
{
	int i, j, S[10][10];
	for(i=0; i<a; i++)   
	{
		for(j=0; j<b; j++){
		S[i][j] = A[i][j]  + B[i][j]; }
	}
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			p("%d  ", S[i][j]);
		}
		p("\n");
	}
	return (0);
}
int main()
{
 p("FOR A MATRIX\n");
 	p("Enter no. of rows: ");
	s("%d", &a);
	p("Enter no. of columns: ");
	s("%d", &b);
 p("%d\n", matA() );
 p("FOR B MATRIX\n");
 	p("Enter no. of rows: ");
	s("%d", &m);
	p("Enter no. of columns: ");
	s("%d", &n);
 p("%d\n", matB() );
 
  if (a!= m && b!= n){
    p("Oops!! Addition is not possible.");  
  } 
  else
  { p("Addition is given\n");
  	p("%d", sum() );  }
  	
  return 0;
}
