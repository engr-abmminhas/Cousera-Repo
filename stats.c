/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <it is the implementation file that can find statistics value and print those values of a given array> 
 * 
 *
 * 
 *
 * @author <Abdul Basit>
 * @date <21-12-2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

int max, min;
float mean, median;
unsigned char *a;
a=test;


printf(" The origional array is given below: \n");
print_array(SIZE,a);
printf("\nThe sorted array is given below: \n");
sort_array(SIZE,a);
median = find_median(SIZE,a);
mean=find_mean(SIZE,a);
max=find_maximum(SIZE,a);
min=find_minimum(SIZE,a);
print_statistics(median,mean,max,min);


return 0 ;
}


void print_array(int a, unsigned char *b)
{
	for (int i=0;i<a;i++)
	{
		printf("\nArray Element %d is %d \n", i,*(b+i));
	}
}

void sort_array(int a,unsigned char *b)
{ 
int t;
	for (int k=0;k<a;k++)
	{
		for (int l=k+1; l<a; l++)
		{
			if (*(b+k)<*(b+l))
			{
				t=*(b+k);
				*(b+k)=*(b+l);
				*(b+l)=t; 
			}
		}
	printf("\nArray Element %d is %d \n", k,*(b+k));
	}

}
float find_median(int a, unsigned char *b)
{
	float median=0;
	int t;
	for (int k=0;k<a;k++)
	{
		for (int l=k+1; l<a; l++)
		{
			if (*(b+k)>*(b+l))
			{
				t=*(b+k);
				*(b+k)=*(b+l);
				*(b+l)=t; 
			}
		}
	}
		if (a%2==0)
		{
			median=( b[(a-1)/2] + b[a/2] )/2.0;  
		}else
			{
			median = b[a/2];
			}
		return median;
}

float find_mean(int a, unsigned char *b)
{
float avg=0;
float sum=0;
for (int i=0; i<a; i++)
{
sum=sum+b[i];
}
avg = sum/a;
return avg;
}

int find_maximum(int a, unsigned char *b)
{
	int t, max;
	for (int k=0;k<a;k++)
	{
		for (int l=k+1; l<a; l++)
		{
			if (*(b+k)>*(b+l))
			{
				t=*(b+k);
				*(b+k)=*(b+l);
				*(b+l)=t; 
			}
		}
	}
	max=b[a-1];
	return max;
}

int find_minimum(int a, unsigned char *b)
{
	int t, min;
	for (int k=0;k<a;k++)
	{
		for (int l=k+1; l<a; l++)
		{
			if (*(b+k)>*(b+l))
			{
				t=*(b+k);
				*(b+k)=*(b+l);
				*(b+l)=t; 
			}
		}
	}
	min=b[0];
	return min;
}
void print_statistics(float median, float mean, int max, int min)
{
printf("\nThe statistics data is given below: \n");
printf("\nmedian is %f", median);

printf("\nmean is %f", mean);

printf("\nmaximum is %d", max);

printf("\nminimum is %d", min);
}
/* Add other Implementation File Code Here */
