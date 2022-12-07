//kavindu lakmal

#include<stdio.h>
//function prototype
floatcalculateWeeklySalary(int grade,float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

//function main 
int main(void){

  int grade;
  float hrsWorked;

  //input grade
  printf("Enter grade");
  scanf("%d",&grade);
  //input hours worked
  printf("Enter hours worked");
  scanf("%f",&hrsWorked);

  //display details
  printDetails(grade,hrsWorked,calculateWeeklySalary( grade,hrsWorked));


return 0;
}

//function function declaration

floatcalculateWeeklySalary(int grade,float hrsWorked){
  float hourlyRate;

  if(grade==1)
    hourlyRate=100.0;
  else if (grade ==2)
    hourlyRate=200.0;
  else if (grade ==3)
    hourlyRate=300.0;

    return hrsWorked*hourlyRate;
}

void printDetails(int grade, float hrsWorked, float salary){
  printf("Entered grade :%d\nEntered workhours:%.2f\nweekly salary:%.2f\n",grade,hrsWorked,salary);
}
