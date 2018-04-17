#include<stdio.h>
int main()
{
    int BurstTime[20], process[20],WaitingTime[20],TurnAroundTime[20],ArrivalTime[20];
	int Temp,Total,pos;
	int n,i,p[20],c[20],b[20];
	int timequantum1=6;
	int timequantum2=10;
    printf("Enter the count of processes : ");
    scanf("%d",&n);
    printf("\nEnter Arrival Time & Burst Time & Priorities.\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter Arrival Time : ");
        scanf("%d",&ArrivalTime[i]);
        printf("Enter Burst Time : ");
        scanf("%d",&BurstTime[i]);
        printf("\n");
        b[i]=BurstTime[i];
    }
    if(BurstTime[0]>=timequantum1&&BurstTime[1]>=timequantum2)
    {
	b[0]=timequantum1-BurstTime[0];
    b[1]=timequantum2-BurstTime[1];
	}
	else
	{
		b[0]=0;
		b[1]=0;
	}
    for(i=0;i<n;i++)
    {
        p[i]=b[i];
    }
	Sorting(p,n);
	
    c[0]=ArrivalTime[0]+BurstTime[0];
    
	for(i=1;i<n;i++)
    {
    	c[i]=c[i-1]+BurstTime[i];
    }
    int T=0,W=0;
	for(i=0;i<n;i++)
    {
    TurnAroundTime[i]=c[i]-ArrivalTime[i];
	WaitingTime[i]=TurnAroundTime[i]-BurstTime[i];
	T=TurnAroundTime[i]+T;
	W=WaitingTime[i]+W;
	}
    printf("\nArrivalTime\tBurstTime\tWaitingTime\tTurnAroundTime\tCompletion_Time");
	for(i=0;i<n;i++)
    {
	printf("\n\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",ArrivalTime[i],BurstTime[i],WaitingTime[i],TurnAroundTime[i],c[i]);
	}
	printf("Average Waiting Time: %d\n",W/n);
	printf("Average Turn Around Time :%d\n",T/n);
}
int Sorting(int a[], int n)
{
   int i, j,temp;
   for (i = 1; i < n; i++)
   {
       temp = a[i];
       j = i-1;
       while (j >= 0 && a[j] > temp)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = temp;
   }
}
