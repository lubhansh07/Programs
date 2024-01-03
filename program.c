Program 1 Leap Year

#include<stdio.h>
int main()
{
    int year,result;
    printf("enter a year \n");
    scanf("%d",&year);
    result=(year%4==0&&year%100!=0||year%400==0)?printf("%d is a leap year",year):printf("%d is not a leap year",year);
    return 0;
}
Program 2 Tallest Person

#include<stdio.h>
int main()
{
    int p1,p2,p3,tallest;
    printf("enter 3 persons height in cm \n");
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1<p2)
    if(p2>p3)
    {
        tallest=p2;
    }
    else
    {
        tallest=p3;
    }
    else
    {
        if(p1>p3)
        {
            tallest=p1;
        }
        else
        {
            tallest=p3;
        }
    }
    printf("%d is tallest",tallest);
    return 0;
}
Program 3 GCD and LCM

#include<stdio.h>
void main()
{
    int num1,num2,gcd,lcm,remainder,numerator,denominator;
    printf("enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    //to find numerator and denominator
    numerator=(num1>num2)?num1:num2;
    denominator=(num1<num2)?num1:num2;
    remainder=numerator%denominator;
    while(remainder!=0)
    {
        numerator=denominator;
        denominator=remainder;
        remainder=numerator%denominator;
    }
    gcd=denominator;
    lcm=num1*num2/gcd;
    printf("gcd of %d&%d=%d\n",num1,num2,gcd);
    printf("lcm of %d&%d=%d\n",num1,num2,lcm);
    
}
Program 4 Palindrom

#include<stdio.h>
void main()
{
    int m,n,rev,digit;
    printf("enter a number\n");
    scanf("%d",&n);
    m=n;
    rev=0;
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev=rev*10+digit;
    }
    printf("the reverse of %d is %d\n",m,rev);
    if(m==rev)
        printf("it is a palindrome\n");
    else
        printf("it is not a palindrome\n");
}
Program 5 Bubble Sort

#include<stdio.h>
void main()
{
    int a[10],n,i,j,temp;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted elements are\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

Program 6 Binary Search

#include<stdio.h>
void main()
{
    int a[10],n,i,key,low=0,high,mid,pos=0,c=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched\n");
    scanf("%d",&key);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            pos=mid;
            c=1;
            break;
        }
        else if(a[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    if(c==0)
    printf("element not found\n");
    else
    printf("element found at position %d\n",pos);
}
Program 7 String

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[100];
    char substr[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a sub string to find: ");
    scanf("%s" ,substr);

    if(strstr(str,substr)!= NULL)
    printf("%s is found in the string", substr);

    else
    printf("%s is not found in the string", substr);

    return 0;
}
Program 8 Marrix

//matrix multiplication
#include <stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int m,n,p,q;

    printf("Enter the number of rows and columns for matrix A:\n");
    scanf("%d%d",&m,&n);

    printf("Enter the elemnets of A:\n");
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
    }

    printf("Enter the number of rows and columns for matrix B:\n");
    scanf("%d%d",&p,&q);

    printf("Enter the elements of B:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }

    if (n!=p){
        printf("ERROR!");
        return 1;
    }

    else
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            C[i][j]=0;
            for (int k=0;k<n;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t", C[i][j]);
        }
    }
    printf("\n");
    return 0;
}
Program 9 Call by value, refference

//call by value,reference
#include <stdio.h>

void swap1(int a,int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    printf("after swap 1 a=%d,b=%d\n",a,b);
}

void swap2(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void main()
{
    int a,b;
    printf("Enter the two no:\n");
    scanf("%d%d",&a,&b);

    printf("before swap a=%d,b=%d\n",a,b);
    swap1(a,b);
    swap2(&a,&b);

    printf("after swap2 a=%d,b=%d\n",a,b);
}
Program 10 Prime No.
//prime no.
#include <stdio.h>
void prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Its not a prime number.\n");
            return;
        }
    }
    printf("Its a prime no.\n");
}

void main()
{
    int N;
    printf("Enter the number to check:\n");
    scanf("%d",&N);
    prime(N);
}

Program 11 

 #include <stdio.h>
 struct Student {
 int rollNumber;
 char name[50];
 int marks[3];
 int totalMarks;
 };
 int main() {
 int n;
 printf("Enter the number of students: ");
 scanf("%d", &n);
 struct Student s1[n];
 for (int i = 0; i < n; i++) {
 printf("Enter details for Student %d:\n", i + 1);
 printf("Roll Number: ");
 scanf("%d", &s1[i].rollNumber);
 printf("Name: ");
 scanf(" %[^\n]s", s1[i].name);
 printf("Enter marks for three subjects:\n");
 for (int j = 0; j < 3; j++) {
 printf("Subject %d: ", j + 1);
 scanf("%d", &s1[i].marks[j]);
 }
 }
 printf("\nStudent Details and Total Marks:\n");
 for (int i = 0; i < n; i++) {
 s1[i].totalMarks = 0;
 printf("Student %d:\n", i + 1);
 printf("Roll Number: %d\n", s1[i].rollNumber);
 printf("Name: %s\n", s1[i].name);
 printf("Enter marks for three subjects: ");
 for (int j = 0; j < 3; j++) {
 s1[i].totalMarks += s1[i].marks[j];
 printf("%d ", s1[i].marks[j]);
 }
 printf("\nTotal Marks: %d\n", s1[i].totalMarks);
 }
 return 0;
}
Program 14 
#include<stdio.h>
#include<string.h>
struct Employee {
int EMPID;
char EMPNAME[100];
float EMPSAL;
char DEPARTMENT[100];
}emp;
int main() {
struct Employee emp1={100, “Nimmy”, 30000, “HR”}, emp2={200, “Binny”, 30000, “HR”};
printf("\nPrinting before call by value\n");
display(emp1);
CallByValue(emp1);
printf("\nEmployee details after modification using call by value:\n");
display(emp1);
printf("\n");
printf("\nPrinting before call by reference\n");
display(emp2);
CallByReference(&emp2);
printf("\nEmployee details after modification using call by reference:\n");
display(emp2);
printf("\n");
return 0;
}
void CallByValue(struct Employee emp)
{
emp.EMPID = 1001;
strcpy(emp.EMPNAME, "Chethana");
emp.EMPSAL = 15000.0;
strcpy(emp.DEPARTMENT, "IT");
}
void CallByReference(struct Employee *emp)
{ emp->EMPID = 1002;
strcpy(emp->EMPNAME, "Janhavi");
emp->EMPSAL = 6000.0;
strcpy(emp->DEPARTMENT, "IT");
}
void display(struct Employee emp)
{
printf("EMPID: %d;", emp.EMPID);
printf("\nEMPNAME: %s\n",emp.EMPNAME);
printf("EMPSAL: %.2f\n", emp.EMPSAL);
printf("DEPARTMENT: %s\n", emp.DEPARTMENT);
}
