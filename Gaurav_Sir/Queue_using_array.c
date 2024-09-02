#include<stdio.h>
#include<assert.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int enqueue(int x)
{
    if(rear==N-1)
    {
        return 0;
    }
    else if(rear==-1&&front==-1)
    {
        rear=front=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
        }
    return 1;}
int dequeue()
{
    if(rear==-1&&front==-1)
    {
        return 0;
    }
    else if(rear==front)
    {
        rear=front=-1;
    }
    else{
        front++;
        }
    return 1;
}
int main()
{
        for(int i=0;i<N;i++)
        {
                int x;
                scanf("%d",&x);
                assert(enqueue(x)!=0);
        }
        assert(dequeue()!=0);
        assert(dequeue()!=0);
         assert(dequeue()!=0);
          assert(dequeue()!=0);
           assert(dequeue()!=0);
           assert(dequeue()!=0);
}

