#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<unistd.h>


double mod(int a, int b);
double mod(int a,int b){
  float i=a%b;
  return i;
}


void style(void);

void style(void){
printf("\e[1;1H\e[2J");

printf("\t ================================\n\t||\t\t\t\t||\n\t\tBasic Calculater\n\t||\t\t\t\t||\n\t ================================\n\n\n");

printf("Operation can perfrom  / * - + %c \n\a\b\t\t\t\n\n\n\t\t\t",37);





}
int ex_itt(){
  char C;
  printf("\n\a\b\t\t\t\n\n\n\t\t\tAre you want to Exit(X) or Reload(r): ");
  scanf("%c",&C);
  switch (C)
  {
    case 'X':
    system("clear");
    printf("\n");
    exit(0);
    system("clear");
   break;
   case 'r':
   system("clear");
   break;
  default:
    return 0;
    break;
  }
}

int process(float a,char C,float b);

int process(float a,char C,float b){
  style();
 
  switch (C)
  {
  case '+':
    return a+b;
    break;
  case '-':
    return a-b;
    break;
  case '/':
    return a/b;
    break;
  
  case '*':
    return a*b;
    break;
  case '%':

    return mod(a,b);
    break;
  default:
    printf("\n\n\t\t\tEror!\n\n\t\t\tReloading the calculater");
    exit(0);
    
    break;
  }
  
  return 0;
}


void main(){
  float a, c;
  char b;
  
  label:
  printf("\n\a\b\t\t\t\n\n\n\t\t\tInput=>");
  scanf("%f %c %f",&a,&b,&c);
 
  printf("\n\n\t\t\tOutput=>%d \n\n\t\t\t",process(a,b,c));
  ex_itt();
  goto label;
}