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
            printf("%d\n",value[index]);
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
    void del()
    {
        if(size<maxsize/2)
        {
            maxsize=2*maxsize;
            value=(int*)realloc(value,size*sizeof(int));
        }
        value[size]=NULL;
       size--;
    }
};

int main()
{
    Vector v=Vector();
    int t;
    printf("Your Operation= ");
    scanf("%d",&t);

    while(t--)
    {
        int select;
        printf("Press 1 for add\nPress 2 delete \nPress 3 for find\n");
        scanf("%d",&select);
        if(select==1)
        {
            int x;
            scanf("%d",&x);
            v.add(x);
        }
        else if(select==2)
        {
            v.del();
        }
        else if(select==3)
        {
            int x;
            scanf("%d",&x);
            v.getvalue(x);
        }

    for(int i=0;i<v.size;i++)
    {
        printf("%d ",v.value[i]);
    }
    printf("\n");

    }


}
