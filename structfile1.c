#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    
} 


s[500];
int main()
{
    int count;
    FILE *fp;
    fp = fopen("midterm1.txt", "w");
 
    if(fp == NULL) {
        printf("file can't be opened\n");
        exit(1);
    }
    printf("Enter the Number of students : ");
    scanf("%d",&count);
    printf("Enter information of students:\n");
    // storing information
    for(int i=0; i<count; ++i)
    {
        s[i].roll = i+1;
        printf("\nFor roll number%d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        fprintf(fp, "Name: %s\t Roll no: %d \tMarks: %.1f \n", s[i].name, s[i].roll,s[i].marks);
 
        printf("\n Details successfully written to the file\n\n");
    }
    fclose(fp);
    return 0;
}
