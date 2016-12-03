#include <stdio.h>
#include <stdlib.h>

int size = 14;

int main (){
int tipp[size][6]; //TODO:row of games
char erg[6];
int lsg[6];

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
        erg[j]='_';
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
					erg[j] = 'x';
					}
               		}
	       		printf("%d, ", tipp[i][j]);
		}
		printf("\n");
		for(int l=0; l<6; l++){
                     printf("%c   ", erg[l]);
                }
		for(int l=0; l<6; l++){
                     erg[l]='_';
                }
		printf("\n");
        }
}
