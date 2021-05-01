#include<stdio.h>
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
    
}