multi.c                                                                                             0000600 0024072 0024072 00000001313 14043151242 011302  0                                                                                                    ustar   u0_a298                         u0_a298                                                                                                                                                                                                                #include <stdio.h>

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
                                                                                                                                                                                                                                                                                                                     pgm1.c                                                                                              0000600 0024072 0024072 00000001033 14043147605 011023  0                                                                                                    ustar   u0_a298                         u0_a298                                                                                                                                                                                                                #include<stdio.h>
#include<stdlib.h>

struct student_st {
	int id;
	char name[20];
};

int main(){
	struct student_st student;
	int n;
	FILE * fp, * ft;
	
	fp = fopen("stdRecord.dat", "r");
	ft = fopen("temp.dat", "wb+");
	
	printf("enter the student id to delete : ");
	scanf("%d", &n);
	
	rewind(fp);
	
	while(!feof(fp)){
		fscanf(fp, "%d %s", &student.id, student.name);
		if(student.id != n)
		fprintf(ft,  "%d %s\n", student.id, student.name);
}
    fclose(fp);
    fclose(ft);
    
    return 0;
    
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     pgm2.c                                                                                              0000600 0024072 0024072 00000001162 14043147605 011027  0                                                                                                    ustar   u0_a298                         u0_a298                                                                                                                                                                                                                #include<stdio.h>
#include<stdlib.h>

struct student_st {
	int id;
	char name[20];
};

int main(){
	struct student_st student;
	int n;
	FILE * fp, * ft;
	
	fp = fopen("stdRecord.dat", "r");
	ft = fopen("temp.dat", "wb+");
	
	printf("enter the student id to delete : ");
	scanf("%d", &n);
	
	rewind(fp);
	
	while(!feof(fp)){
		fscanf(fp, "%d %s", &student.id, student.name);
		if(student.id != n){
			fprintf(ft,  "%d %s\n", student.id, student.name);
			}
}
    fclose(fp);
    fclose(ft);
    
    remove("stdRecord.dat");
    rename("temp.dat", "stdRecordM.dat");
    
    return 0;
    
}                                                                                                                                                                                                                                                                                                                                                                                                              struct.c                                                                                            0000600 0024072 0024072 00000001305 14043147605 011505  0                                                                                                    ustar   u0_a298                         u0_a298                                                                                                                                                                                                                #include <stdio.h>
#include <string.h>
#define satya main

 int satya (){
     int i, n, totalScore = 0;
     printf("enter no. of students : ");
     scanf("%d", &n);
     struct student {
         char name[20];
         int score;
     };
     struct student students[10];
     for(i=0; i<n; i++){
     	printf("enter Name :");
         scanf("%s", students[i].name);
         printf("enter score :");
         scanf("%d", &students[i].score);
     }
     for(i=0; i<n; i++){
         printf("%d.\t%s\t%d\n",i+1, students[i].name, students[i].score);
         totalScore += students[i].score;
     }
     printf("Total Score of %d students is %d", n, totalScore);
     return 0;
 }                                                                                                                                                                                                                                                                                                                           unions.c                                                                                            0000600 0024072 0024072 00000001230 14043147605 011471  0                                                                                                    ustar   u0_a298                         u0_a298                                                                                                                                                                                                                #include <stdio.h>

 int main(){
     int i, n, totalScore = 0;
     printf("enter no. of students : ");
     scanf("%d", &n);
     union student {
         char name[20];
         int score;
     };
     union student students[10];
     for(i=0; i<n; i++){
     	printf("enter Name :");
         scanf("%s", students[i].name);
         printf("enter score :");
         scanf("%d", &students[i].score);
     }
     for(i=0; i<n; i++){
         printf("%d.\t%s\t%d\n",i+1, students[i].name, students[i].score);
         totalScore += students[i].score;
     }
     printf("Total Score of %d students is %d", n, totalScore);
     return 0;
 }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        