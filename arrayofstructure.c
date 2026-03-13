// Online C compiler to run C program online
#include <stdio.h>
struct cricket{
  char name[20];
  int age;
  int nom;
  float avgrun;
};
struct cricket p1;
int main() {
    int i;
    for(i=0;i<11;i++){
        
        printf("type name of cricketer : ");
        scanf("%s",&p1.name);
        printf("type the age of cricketer :");
        scanf("%d",&p1.age);
         printf("type the number of match :");
         scanf("%d",&p1.nom);
         printf("type the avgrun :");
         scanf("%d",&p1.avgrun);
         
    }
  for(int i=0;i<11;i++){
      printf("Name = %s\n",p1.name);
       printf("age = %d\n",p1.age);
        printf("number of match played = %d\n",p1.nom);
         printf("average run = %d\n",p1.avgrun);
  }
   
    return 0;
}
