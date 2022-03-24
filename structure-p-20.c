#include<stdio.h>
struct Student{
int id;
float cgpa;
char name[20];
};


int main(){
    struct Student s;
    printf("Enter Your id:\n");
    scanf("%d",&s.id);

    printf("Enter your cgpa:\n");
    scanf("%f",&s.cgpa);

    printf("Enter your Name:\n");
    scanf("%s",s.name);

    printf("Name:%s\n ID: %d\n cgpa:%f",s.name,s.id,s.cgpa);
return 0;
}
