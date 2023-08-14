# include<stdio.h>

struct data{
int roll_no;
char name[50];
int chem_marks;
int maths_marks;
int phy_marks;
};
float cPercentage(int totalMarks) 
{
    return (float)totalMarks / 300  * 100; 
}

void main(){
int i;
int totalMarks;
struct data v[5];
for(i=0;i<=4;i++){
printf("\nEnter details of student %d :-\n",i+1);
printf("Roll No: ");
scanf("%d", &v[i].roll_no);
printf("Name: ");
scanf("%s", &v[i].name);
printf("Chemistry Marks: ");
scanf("%d", &v[i].chem_marks);
printf("Mathematics Marks: ");
scanf("%d", &v[i].maths_marks);
printf("Physics Marks: ");
scanf("%d", &v[i].phy_marks);
}
printf("\n\nMark Sheet:\n");
for (i=0;i<=4;i++){
printf("\nStudent %d:\n", i + 1);
printf("Roll No: %d\n", v[i].roll_no);
printf("Name: %s\n", v[i].name);
printf("Chemistry Marks: %d\n", v[i].chem_marks);
printf("Mathematics Marks: %d\n", v[i].maths_marks);
printf("Physics Marks: %d\n", v[i].phy_marks);
totalMarks = v[i].chem_marks + v[i].maths_marks + v[i].phy_marks;
printf("Total Marks: %d/300\n",totalMarks);
float percentage;
percentage = cPercentage(totalMarks);
printf("Percentage: %.2f%%\n", percentage);}
}
