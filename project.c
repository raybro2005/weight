
#include <stdio.h>




int main()
{
   int hour = -45;
   int min = -10;
   printf("Enter a 24-hour time:   ");
   scanf("%d:%d",&hour, &min);
   if (hour >=13 && hour <=23)
   {
    hour = hour - 12;
    if (min <= 9)
    {
        printf("Equivalent 12-hour time: %d:0%d PM\n", hour, min);
    }
    else{
    printf("Equivalent 12-hour time: %d:%d PM\n", hour, min);
    }
   }
   else if (hour >=1 && hour <=11){
    if (min <= 9)
    {
        printf("Equivalent 12-hour time: %d:0%d AM\n", hour, min);
    }
    else{
    printf("Equivalent 12-hour time: %d:%d AM\n", hour, min);
    }
}
   else if (hour == 0 ||hour == 00){
    hour = 12;
    if (min <= 9)
    {
        printf("Equivalent 12-hour time: %d:0%d AM\n", hour, min);
    }
    else{
    printf("Equivalent 12-hour time: %d:%d AM\n", hour, min);
    }
   }
   else if (hour ==12){
    if (min <= 9)
    {
        printf("Equivalent 12-hour time: %d:0%d PM\n", hour, min);
    }
    else{
    printf("Equivalent 12-hour time: %d:%d PM\n", hour, min);
    }
   }
   

   
    return 0;

}
