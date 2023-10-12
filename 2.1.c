#include<stdio.h>
int main()
{
    
long int tp=80000;
float tl=0.48*tp;
float total_man=0.52 * tp;
float total_women=tp - total_man;
float tlman=0.35 * tp;
float totalilitrateman=total_man -tlman;
float tlwomen=(0.48*tp) - (0.35*tp);
float ilitrate_women=total_women - tlwomen;

printf("%c Total population=%ld\n",988,tp);
printf("%c Number of litrate man and women=%.1f\n",988,tl);
printf("%c Number of man=%.1f\n",988,total_man);
printf("%c Number of women=%.1f\n",988,total_women);
printf("%c Number of litrate man=%.1f\n",988,tlman);
printf("%c Number of ilitrate man=%.1f\n",988,totalilitrateman);
printf("%c Number of litrate women=%.1f\n",988,tlwomen);
printf("%c Number of ilitrate women=%.1f\n",988,ilitrate_women);
printf("\n23TCE008-TANMAY");
return 0;
}