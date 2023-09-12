#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
	char famil[20];
	char name[20],facult[20];
	int Nomzach;
}stud[3];

int main(){
	for(int i=0;i<3;i++){
	scanf("%20s",stud[i].famil);
	scanf("%20s",stud[i].name);
	scanf("%20s",stud[i].facult);
	scanf("%d",&stud[i].Nomzach);
	}

	for(int i=0;i<3;i++){
	printf("%20s ",stud[i].famil);
	printf("%20s ",stud[i].name);
	printf("%20s ",stud[i].facult);
	printf("%d\n",stud[i].Nomzach);
	}
	int j=0;
	char fam[20];
	char nam[20];
	char fac[20];
	int momer=0;
	int flagclown=0;
	scanf("%20s",&fam);
	scanf("%20s",&nam);
	scanf("%20s",&fac);
	scanf("%d",&momer);
	while(j<3){
		if (!strcmp(fam,stud[j].famil)) 
		{
			if(!strcmp(nam,stud[j].name)){
				if(!strcmp(fac,stud[j].facult)){
					if (momer==stud[j].Nomzach){
			
						printf("%20s ",stud[j].famil);
						printf("%20s ",stud[j].name);
						printf("%20s ",stud[j].facult);
						printf("%d\n",stud[j].Nomzach);
						flagclown=0;
						break;
					} else {
						flagclown=1;
						
					};
				}else {
						flagclown=1;
				};
			}else {
				flagclown=1;
			};
		}else {
			flagclown=1;
		};
		j++;
	}
	if(flagclown==1){
		printf("404 not found");
	}
}