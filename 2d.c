#include<stdio.h>
int main()
{
int a[10][10], b[10][10], c[10][10],i,j,k,n,m,p,q;
printf("Enter order of matrix1\n");
scanf("%d%d",&n,&m);
printf("Enter order of matrix2\n");
scanf("%d%d",&p,&q);
if(m!=p)
{
	printf("Matrix Multiplication\n");
	return -1;
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
{
	printf("Enter the values\n");
	scanf("%d",&a[i][j]);
}
}

for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
{
printf("Enter the values\n");
scanf("%d",&b[i][j]);
}
}
	for(i=0;i<n;i++)
{
	for(j=0;j<q;j++)
{
	c[i][j]=0;
	for(k=0;k<p;k++)
{
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("matrix1\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("matrix 2\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("Resultant matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

return 0;
}
