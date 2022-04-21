#include<stdio.h>
int sum(int a,int b)
{	return a+b;
}
int product(int a, int b)
{	return a*b;
}
int subtraction (int a,int b)
{	return a-b;
}
float div(float a, float b)
{	return a/b;
}
int main ()
{	int q,r,ch;
	printf("\t\tEnter the choice\n1.Sum\t2.Product\t3.Subraction\t4.Division\n");
	scanf("%d",&ch);
	printf("Enter two Numbers:");
	scanf("%d%d",&q,&r);
	switch (ch)
	{	case 1:printf("Sum:%d",sum(q,r));	
			break;
		case 2:printf("Product:%d",product(q,r));
			break;
		case 3: printf("Subtraction:%d",subtraction(q,r));
			break;
		case 4: printf("Division:%d",div(q,r));
			break;
		default:printf("Wrong Choice!!");
			break;
	}
return 0;
}