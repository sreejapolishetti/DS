#include<stdio.h>
struct student {
	int roll_no;
	char name[50];
	int marks[5];
	int total;
};
int main() {
	struct student s;
	s.total=0;
	int i=0;
	printf("enter roll number:");
	scanf("%d",&s.roll_no);
	printf("enter name: ");
	scanf("%[^\n]",s.name);
	for(i=0;i<5;i++) {
		printf("enter marks for subject %d:",i+1);
		scanf("%d",&s.marks[i]);
		s.total +=s.marks[i];
	}
	printf("\n--student details(using structure)---\n");
	printf("roll number: %d\n",s.roll_no);
	printf("name:%s\n",s.name);
	printf("marks: ");
	for(i=0;i<5;i++) { 
	  printf("%d",s.marks[i]);
	}
	printf("\ntotal: %d\n",s.total);
	return 0;
}
