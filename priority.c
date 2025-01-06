#include<stdio.h>
struct process
{
	int id;
	int priority;
	int burst_time;
};
void priorityScheduling(struct process processes[],int n)
{
	//sort processes based on priority
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(processes[j].priority>processes[j+1].priority)
			{
				//swap processes
				struct process temp = processes[j];
				processes[j]=processes[j+1];
				processes[j+1]=temp;
			}
		}
	}
	//display the order of execution
	printf("order of execution:");
	for(int i=0;i<n;i++)
	{
		printf("P%d",processes[i].id);
		
	}
	printf("\n");
}
int main()
{
	int n;
	//input number of processes
	printf("enter the number of processes:");
	scanf("%d",&n);
	struct process processes[n];
	//input details for each processes
	for(int i=0;i<n;i++)
	{
		processes[i].id=i+1;
		printf("enter the priority of process P%d:",i+1);
		scanf("%d",&processes[i].priority);
		printf("enter burst time for process P%d:",i+1);
		scanf("%d",&processes[i].burst_time);
		
	}
	//performs priority scheduling
	priorityScheduling(processes,n);
	return 0;
}
