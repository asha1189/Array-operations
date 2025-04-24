#include <stdio.h>
#include <stdlib.h>

void update(int a[],int n)
{

    printf("Before updated : \n");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
    printf("\n");


    int index;
    int value;
    printf("Enter index: \n");
    scanf("%d",&index);

    printf("Enter new value: ");
    scanf("%d",&value);

    a[index]=value;
    printf("\n After updated array : \n");
     for(int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
}

void delete(int a[],int n)
{
    printf("Enter index that you want delete: ");
    int dlt;
    scanf("%d",&dlt);
    for(int i=dlt;i<n-1;i++)
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    a[n-1]=0;
    printf("After deleted: ");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);
    }
    printf("\n");
}
void sorting(int a[],int n)
{
     printf("Before sorted : \n");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

     printf("After sorted : \n");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
    printf("\n");


}
void search(int a[],int n)
{
    printf("Enter a value that you want to search: ");
    int value;
    scanf("%d",&value);
    printf("\n");
    int found =0;
    int position=-1;
    for(int i=0;i<n;i++)
    {
        if(value==a[i])
        {
            found=1;
            position=i;
            break;
        }
    }
    if(found=1)
    {
        printf("found in index: %d\n",position);
    }
    else
    {
        printf("value not found.\n");
    }
}

void display(int a[],int n)
{
    printf("Display Array Value: ");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);
    }
}

int main()
{
    int size,i;
    int a[100];
    printf("\nEnter the array size: ");
    scanf("%d",&size);
    printf("Enter Array Value: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }

    printf("After inserted: ");
     for(int i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");


while (1){

    printf("Select an option (1-6):\n  1.update\n 2.delete\n 3.sorting\n 4.search\n 5.display\n 6.exit\n");
    int num;
    scanf("%d",&num);

    if(num==1)
    {
        update(a,size);
    }
    else if(num==2)
    {
        delete(a,size);
    }
    else if(num==3)
    {
        sorting(a,size);
    }
    else if(num==4)
    {
        search(a,size);
    }
    else if(num==5)
    {
        display(a,size);
    }
    else if(num==6)
    {
        printf("Exit the program.\n");
        break;
    }
    else
    {
        printf("Invalid. Please select a valid number(1-6)");
    }
}
}
