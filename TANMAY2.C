#include<stdio.h>
int main(){
float salary;
float DA,HRA,MA,TA,PF,IT=400,GrossSalary,NetSalary;

printf("\nEnter your basic salary=");
scanf ("%f", &salary);
DA= 0.70 * salary;
printf("\nDA of basic salary :%.1f\n",DA);

HRA=0.07 * salary;
printf("HRA of basic salary:%.1f\n",HRA);


MA=0.02 * salary;
printf("MA of basic salary:%.1f\n",MA);

TA=0.04 * salary;
printf("TA of basic salary:%.1f\n",TA);

PF=0.12 * salary;
printf("PF of basic salary:%.1f\n",PF);
printf("IT of basic salary:%.1f\n",IT);

GrossSalary= salary + DA + MA + TA + HRA;
printf("Gross Salary:%.1f\n",GrossSalary);

NetSalary=GrossSalary - PF - IT;
printf("Net Salary:%.1f\n",NetSalary);
printf("23TCE008-TANMAY");

return 0;
}