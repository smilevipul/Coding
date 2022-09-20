#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

struct student s={1,"Vipul",94.4};
void main()
{
    struct student *ptr=&s;
    printf("\nRoll is %d",s.roll); // printting marks 
    printf("\nname is %s",ptr->name); // printing name using str pointer
    //or
    printf("\nmarks is %f",(*ptr).marks);
}
