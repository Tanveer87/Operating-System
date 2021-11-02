// C++ program to demonstrate creating processes using fork()
#include <unistd.h>
#include <stdio.h>

int main()
{
	// Creating first child
	int n1 = fork();

	// Creating second child. First child
	// also executes this line and creates
	// grandchild.
	int n2 = fork();

  	int n3 = fork();
  	int n4 = fork();
	int arr[5] = {2,4,8,6,10};

	if (n1 > 0 && n2 > 0 && n3>0 && n4>0) {
	printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);

		printf("\n my id is %d \n", getpid());
	}
	else if (n1 == 0 && n2 > 0 && n3>0 && n4>0)
	{
		printf("First child\n");
		printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
		printf("\n my id is %d \n", getpid());
	}
	else if (n1 > 0 && n2 == 0 && n3>0 && n4>0 )
	{
		printf("Second child\n");
		printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
		printf("\n my id is %d \n", getpid());
	}
	else if(n1 > 0 && n2 > 0 && n3 == 0 && n4>0 )
    {
		printf("third child\n");
		printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
		printf("\n my id is %d \n", getpid());
	}
  else if (n1 > 0 && n2 > 0 && n3 > 0 && n4==0 ){
  	printf("fourth child\n");
    printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
		printf("\n my id is %d \n", getpid());
  }
	return 0;
}
