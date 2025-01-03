#include<stdio.h>
struct process
{
	int id;
	int burst_time;
	
};
void sjfScheduling(struct process processes[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(processes[j].burst_time>processes[j+1].burst_time)
			{
				struct process temp=processes[j];
				processes[j]=processes[j+1];
				processes[j+1]=temp;
			}
		}
	}
	int completion_time =0;
	printf("order of execution:");
	for(int i=0;i<n;i++)
	{
		printf("p%d",processes[i].id);
		completion_time+=processes[i].burst_time;
		printf("(completion time:%d)",completion_time);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("enter the number of processes:");
	scanf("%d",&n);
	struct process processes[n];
	for(int i=0;i<n;i++)
	{
		process[i].id=i+1;
		printf("enter burst time for process p%d:",i+1);
		scanf("%d",&processes[i].burst_time);
		
	}
	sjfScheduling(processes,n);
	return 0;
}
