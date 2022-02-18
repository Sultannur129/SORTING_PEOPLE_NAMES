/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//personellerin isimlerini a dan zye kadar sıralayan program;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personal{
    
    int password;
    char name[10];
    char surname[10];
    int age;
    float salary;
    char gender[10];
    
    
    
    
    
}people;

void sort(people x[],int m);
void list(people x[],int m);

int main()
{
    int numberOfPeople;
    printf("How many people will you input:");
    scanf("%d",&numberOfPeople);
    people x[numberOfPeople];
    int i;
    for(i=0;i<numberOfPeople;i++){
        
        printf("%d. please enter the name of person:",i+1);
        scanf("%s",x[i].name);
        printf("%d. please enter the surname of person:",i+1);
        scanf("%s",x[i].surname);
        printf("%d. please enter the age of person:",i+1);
        scanf("%d",&x[i].age);
        printf("%d. please enter the salary of person:",i+1);
        scanf("%f",&x[i].salary);
        printf("%d. please enter the gender of person:",i+1);
        scanf("%s",x[i].gender);
        printf("%d. please enter the password of person:",i+1);
        scanf("%d",&x[i].password);
        
        
        
        
        
        
    }
    sort(x,numberOfPeople);
    list(x,numberOfPeople);
    
    

    return 0;
}

void sort(people x[],int m){
    
    int i,j;
    people t;
    //temp[0]=x[0];
    for(i=0;i<m-1;i++){
        for(j=i+1;j<m;j++){
        if(strcmp(x[i].name,x[j].name)>0){
            t=x[i];
            x[i]=x[j];
            x[j]=t;
        }
        
        
    }
    }
    
    
    
    
    
    
}
void list (people x[],int m){
    
    int i;
    for(i=0;i<m;i++){
        printf("\n\n");
        printf("%d person's name::%s\n",i+1,x[i].name);
        printf("%d person's surname:%s\n",i+1,x[i].surname);
        printf("%d person's age:%d\n",i+1,x[i].age);
        printf("%d person's salary:%f\n",i+1,x[i].salary);
        printf("%d person's gender::%s\n",i+1,x[i].gender);
        printf("%d person's password::%d\n",i+1,x[i].password);
        printf("\n\n");
        
    }
    
    
    
    
    
    
}

