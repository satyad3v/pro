#include <stdio.h>

int main(){
	int matA[10][10], matB[10][10], matC[10][10];
	int r, c, i, j, k;
	
	printf("enter Row & Col size : \n");
	scanf("%d%d", &r, &c);
	
	printf("Enter elemets of Matrix A: \n");
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &matA[i][j]);
}
}
    printf("Enter elemets of Matrix B: \n");
    for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			scanf("%d", &matB[i][j]);
}
}
    for(i=0; i<r; i++){
		for(j=0; j<c; j++){
		 matC[i][j] = 0;
			for(k=0; k<c; k++){
				matC[i][j] += matA[i][k]*matB[k][j];
}
}
}
   for(i=0; i<r; i++){
   	for(j=0; j<c; j++){
   	printf("%d\t", matC[i][j]);
}
printf("\n");

}
printf("Iam satya Sai Nallam");
}
