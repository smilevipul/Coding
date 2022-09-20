#include<stdio.h>

struct student
{
    int roll;
    char name[30];
    float marks;
} s = {1, "Vipul", 57.4};

// struct student s1 = {2, "Rahul", 67.7};
// struct student s2 = {3};
void main()
{  // compile time initialization
    struct student s1; // ={2, "Rahul", 67.7};
    
    // or
      
    // printf("%d " ,s.roll); 
    // printf("%s " ,s.name); 
    // printf("%f " ,s.marks); 
    // printf("\n"); 

    // run time initilation
    struct student s2;
    // enter details of s2
    scanf("%d %s %f" ,&s2.roll,s2.name,&s2.marks); 
    s1=s2; // coping value  
    printf("\nInformation for s2\n");
    printf("%d %s %f " ,s2.roll,s2.name,s2.marks); 

    printf("\nInformation for s1\n");
    printf("%d %s %f " ,s1.roll,s1.name,s1.marks); 

}
 