//binary exponentiation
#include <stdio.h>

int recursive(int a,int b) {
	if(b==0) { //recurtion terminator
		return 1;
	}
	int res=recursive(a,b/2);

	if(b%2==1) { //odd number check
		return res*res*a;
	}
	return res*res;
}

int iterative(int a,int b) {
	int res=1;
	while(b>0) {
		if(b%2==1){ //odd number check
		    res*=a;
		}
		a*=a;
		b/=2;
	}
	return res;

}



int main()
{
	printf("%d\n",recursive(9,4));
	printf("%d",iterative(9,4));
	return 0;
}