#include<unistd.h>
int main()
{
	char buffer[50];
	//reads input of 8 characters from keyboard
	read(0,buffer,8);
	//writes output of 8 characters on screen
	write(1,buffer,8);
	return 0;
}

//
#include<unistd.h>
int main()
{
	char buffer[50];
	int count;
	//stores the number of characters read from keyboard
	count= read(0,buffer,50);
	//writes output of read characters on screen
	write(1,buffer,count);
	return 0;
}
