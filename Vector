#include<stdio.h>
#include <stdlib.h>
struct Vector
{
    int size;
    int maxsize;
    int* value;
    Vector()
    {
        maxsize=5;
        size=0;
        value=(int*)malloc(maxsize*sizeof(int));
    }
    int getvalue(int index)
    {
        if(index<size)
        {
            printf("%d",value[index]);
        }
        else
        printf("Not exist\n");
    }
    int add(int x)
    {
        if(size>maxsize)
        {
            maxsize=2*maxsize;
            value=(int*)realloc(value,maxsize*sizeof(int));
        }
        value[size]=x;
        size++;
    }
    int del(int index)
    {
        if(size<maxsize)
        {
            for(int i=0;)
        }
        value[size]=x;
        size++;
    }
};

int main()
{
    Vector v=Vector();
    v.add(6);
    v.add(8);
    v.add(5);
    v.add(7);
    v.add(4);
     v.add(4);

    for(int i=0;i<6;i++)
    {
        printf("%d ",v.value[i]);
    }

}
