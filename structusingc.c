#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char grade;
    float percentage;
};
  int main(){
    struct student s;
    printf("Enter the roll number,grade,percentage\n");
    scanf("%d %c %f",&s.roll,&s.grade,&s.percentage);
    printf("\n %d %c %f",s.roll,s.grade,s.percentage);
    return 0;
}