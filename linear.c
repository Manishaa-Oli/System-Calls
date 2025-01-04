#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int hash(int key)
{
	return key%SIZE;
}
void insert(int hashTable[],int key)
{
	int index=hash(key);
	while(hashTable[index]!=-1)
	{
		index=(index+1)%SIZE;
	}
	hashTable[index]=key;
}
void display(int hashTable[])
{
	int i;
	printf("hash table:\n");
	
	for( i=0;i<SIZE;i++)
	{
		printf("%d: %d\n",i,hashTable[i]);
	}
}
int main()
{
	int hashTable[SIZE],i,key;
	for(i=0;i<SIZE;i++)
	{
		hashTable[i]=-1;
	}
	for(i=0;i<SIZE;i++)
	{
		printf("\n enter key:\n");
		scanf("%d",&key);
		insert(hashTable,key);
		
	}
	display(hashTable);
	return 0;
}
