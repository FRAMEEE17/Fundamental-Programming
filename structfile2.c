#include <stdio.h>
#include<stdlib.h>
struct student {
   float marks;
   int roll;
   char name[50];
};

int main(){
   struct student *ptr ;
   FILE *fp;
   fp = fopen("midterm2.txt", "w");
   int count;
   if(fp == NULL) {
        printf("file can't be opened\n");
        exit(1);
   }
   printf("Enter the Number of students : ");
   scanf("%d",&count);
   printf("Enter information of students:\n");
    /* Allocates the memory for n structures with pointer ptr pointing to the base address. */
   ptr=(struct student*)malloc(count*sizeof(struct student));
   
   for(int i=0;i<count;++i){
       (ptr+i)->roll = i+1;
       printf("\nFor roll number : %d\n",(ptr+i)->roll);
       
       printf("Enter name :");
       scanf("%s",&(ptr+i)->name);
       
       printf("Enter marks :");
       scanf("%f",&(ptr+i)->marks);
       
       fprintf(fp, "Name: %s\t Roll no: %d \tMarks: %.1f \n", (ptr+i)->name,(ptr+i)->roll, (ptr+i)->marks);
       printf("\n Details successfully written to the file\n\n");
   }
   fclose(fp);
   return 0;

}
