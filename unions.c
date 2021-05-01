#include <stdio.h>

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
 }