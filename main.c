#include <stdio.h>
#include <stdlib.h>

int main (){
int tipp[10][5]; //TODO:row of games
char erg[5];
int lsg[5];

printf("Lotto Tippschein eingeben: ");
	for(int i=1; i<=10;i++){
		for(int j=1; j<=6; j++){
			scanf("%d", &tipp[i][j]);
			printf("Zahl %d, ", j);
			printf("Ihre Zahl %d\n", tipp[i][j]);
		}
		erg[i]='0';			

	}
	printf("Gewinn Zahlen eingeben: \n");
	for(int j=1; j<=6; j++){
                        scanf("%d", &lsg[j]);
                        printf("Zahl %d, ", j);
                        printf("Ihre Zahl %d\n", lsg[j]);
                }
	printf("Ihre Gewinn Zahlen: \n");
	for(int j=1; j<=6; j++){
                        printf("Zahl %d, ", lsg[j]);
                }
	printf("\n");
	for(int i=1; i<=10;i++){
                for(int j=1; j<=6; j++){
			if(lsg[j]==tipp[i][j]){
				erg[j] = 'x';
			} 
		       	printf("%d, ", tipp[i][j]);
                }
		printf("\n");
		for(int l=1; l<=6; l++){
                     printf("%c, ", erg[l]);
                }
		for(int l=1; l<=6; l++){
                     erg[l]='0';
                }
		printf("\n");
        }
}
