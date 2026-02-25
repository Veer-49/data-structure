#include<stdio.h>
int main(){
	int a [10], pos, value, n=8;
	printf("Enter the value");
	for (int i=0; i<n; i++){
	scanf("%d",&a[i]);
	}
	printf("Enter the value which you want");
	scanf("%d",&value);
	printf("Enter the value of position which you want");
	scanf("%d",&pos);
    for (int i=n; i<pos; i--)
	{
    	a[i]=a[i-1];
    }
    a[pos-1]=value;
    n++;
    printf("Array after insertion");
    for (int i=0; i<10; i++){
    	printf("%d\n",a[i]);
	}
		
	return 0;
}
