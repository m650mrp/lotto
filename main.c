#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size = 14;
int main (){
int tipp[size][6]; //TODO:row of games
char *erg[6];
int lsg[6];
int counter = 0;

for(int i=0;i<6;i++) {
	erg[i] = malloc(2);
	erg[i][1] = '\0';
}

printf("Lotto Tippschein eingeben: \n");
	for(int i=0; i<size;i++){
		for(int j=0; j<6; j++){
			scanf("%d", &tipp[i][j]);
			printf("Zahl %d, ", j);
			printf("Ihre Zahl %d\n", tipp[i][j]);
		}
	}
	printf("Gewinn Zahlen eingeben: \n");
	for(int j=0; j<6; j++){
                        scanf("%d", &lsg[j]);
                        printf("Zahl %d, ", j);
                        printf("Ihre Zahl %d\n", lsg[j]);
        erg[j][0]='_';
	}
	printf("Ihre Gewinn Zahlen: \n");
	for(int j=0; j<6; j++){
                        printf("Zahl %d, ", lsg[j]);
                }
	printf("\n");
	for(int i=0;i<size;i++){
		for(int j=0; j<6; j++){
			for (int k=0;k<6;k++){
				if(lsg[k]==tipp[i][j]){
					erg[j][0] = 'x';
					}
               		}
	       		printf("%d, ", tipp[i][j]);
		}
		printf("\n");
		for(int l=0; l<6; l++){
                     printf("%c   ", erg[l][0]);
                }

		int len = sizeof(erg)/sizeof(erg[0]);
		int i;
		int localctr = 0;

		for(i = 0; i < len; ++i)
		{
		    if(!strcmp(erg[i], "x"))
		    {
			localctr++;
		    }
		}
		if(localctr>counter){
			counter++;
		}
		for(int l=0; l<6; l++){
                     erg[l][0]='_';
                }
		printf("\n");
        }
	if(counter == 0){
		printf("Leider keine richtige Zahl, bitte spielen Sie öfter\n");
	}else{
		printf("Gewinn, %d richtige Zahlen. Herzlichen GlÜckwunsch!!!\n", counter);
	}
}
