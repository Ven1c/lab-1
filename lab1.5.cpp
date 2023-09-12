#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
srand(time(NULL));
int size=0;
int w;
scanf("%d",&size);
scanf("%d",&w);
int* mas;
mas =(int*)malloc(sizeof(int*)*size);
int size1=size;
int i=0;
int j=0;
int s=0;
int* mas1;
int max=0;
int min=1000;
while(size1>i){
	j=0;
	mas1=mas;
	mas1 = (int*)malloc(sizeof(int)*w);
	while(w>j){
		*mas1= rand() % 1000;
		if (max<*mas1){
			max=*mas1;
		}
		if (min>*mas1){
			min=*mas1;
		}
		s+=*mas1;
		printf("%d\t",*mas1);
		j++;
		mas1++;
	}
	printf("| %d",s);
	s=0;
	printf("\n");
	mas1++;
	i++;
}



printf("%d\t%d\n",max,min);
max=max-min;
printf("%d",max);
}