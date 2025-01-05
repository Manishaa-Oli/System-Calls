#include<unistd.h>
int main()
{
	//writes hello on screen
	write(1,"hello",5);
	//writes he on screen
	write(1,"hello",2);
	//writes garbage on screen
	write(1,"hello",50);
	return 0;
}
//
***
//
#include<unistd.h>
#include<stdio.h>
int main()
{
	int count;
	count=write(1,"hello",5);
	printf("\nThe write system call wrote %d characters",count);
	return 0;
	
}

