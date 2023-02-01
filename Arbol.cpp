#include<stdio.h>

main(){
	int i,j,M[100][100],P[100][100];
	int med;
	med = (5-1)/2;
	//impar
	for(i=0;i<5;i++){
		printf("\t");
		for(j=0;j<5;j++){
			if(i>=j){
				M[i][j]=j+10;
			//	P[i][j+med]=M[i][j];
				printf(" %d ",M[i][j]);
			}else{
				M[i][j]=0;
				//P[i][j]=7;
			}	
		}
		printf("\n");
	}
	printf("\n-----------\n\n");
	int va;
	med=5;
	for(i=0;i<5;i++){
		va=med;
		//printf("\t");
		for(j=0;j<5;j++){
			if(i>=j){
			do{
				printf("_");//,va);
				va--;
			}while(va>0);
				printf("*");//,M[i][j]);
			}
		}
		printf("\n");
		med--;
	}
	//par
	
	for(i=0;i<6;i++){
		printf("\t");
		for(j=0;j<6;j++){
			if(i>=j){
				M[i][j]=j+10;
			//	P[i][j+med]=M[i][j];
				printf(" %d ",M[i][j]);
			}else{
				M[i][j]=0;
				//P[i][j]=7;
			}	
		}
		printf("\n");
	}
	printf("\n-----------\n\n");
	med=6;
	for(i=0;i<6;i++){
		va=med;
		//printf("\t");
		for(j=0;j<6;j++){
			if(i>=j){
			do{
				printf("_");//,va);
				va--;
			}while(va>0);
				printf("*");//,M[i][j]);
			}
		}
		printf("\n");
		med--;
	}
	
	
}
