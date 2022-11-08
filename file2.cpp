#include <stdio.h>
int main(){
	unsigned long ulsm=0;
	unsigned long ulcount=5;
	while(1<=ulcount){
		ulsm += ulcount;
		ulcount--;
	}
	printf("%lu\n",ulsm);
	return 0;
}
