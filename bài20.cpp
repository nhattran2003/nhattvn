#include<stdio.h>
	#include<conio.h>
	#include<math.h>
	#define MAX 100
	

	void nhap (float a[], int &n)
	{
	    do
	    {
	        printf("\nNhap so phan tu: ");
	        scanf("%d", &n);
	        if(n <= 0 || n > MAX)
	        {
	            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	        }
	    }while(n <= 0 || n > MAX);
	    for(int i = 0; i < n; i++)
	    {
	        printf("\nNhap a[%d]: ", i);
	        scanf("%f", &a[i]);
	    }
	}
	

	void xuat(float a[], int n)
	{
	    for(int i = 0; i < n; i++)
	    {
	        printf("%8.3f", a[i]);
	    }
	}
	

	void saptang(float a[], int n)
	{
	    for(int i = 0; i < n - 1; i++)
	    {
	        for(int j = i + 1; j < n; j++)
	        {
	            if(a[i] > a[j])
	            {
	                float temp = a[i];
	                a[i] = a[j];
	                a[j] = temp;
	            }
	        }
	    }
	}
	int main()
	{
	    int n;
	    float a[MAX];
	

	    nhap(a, n);
	    xuat(a, n);
	

	    saptang(a, n);
	    printf("\nMang sau khi sap xep tang");
	    xuat(a, n);
	

	    getch();
	    return 0;
	}