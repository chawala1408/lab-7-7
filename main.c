#include <stdio.h>
int main(void) {
  char name[100];
  int temp[7][2];
  int Max, Min,i,x,y,a,b;
  float SumH, SumL;
  int midH, midL;
  printf("Enter your name : ");
  scanf("%s",name);
  printf("Hello %s\n",name);
  printf("********************************\n");
  for(i=0;i<7;i++){
    if(i==0){
      printf("High Temp Monday    : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Monday    : ");
      scanf("%d",&temp[i][1]);
      Max = temp[i][0];
      Min = temp[i][1];
    }else if(i==1){
      printf("High Temp Tuesday   : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Tuesday   : ");
      scanf("%d",&temp[i][1]);
      if(Max<temp[i][0])
        Max = temp[i][0];
      if(Min>temp[i][1])
        Min = temp[i][1];
    }else if(i==2){
      printf("High Temp Wednesday : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Wednesday : ");
      scanf("%d",&temp[i][1]);
    }else if(i==3){
      printf("High Temp Thursday  : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Thursday  : ");
      scanf("%d",&temp[i][1]);
    }else if(i==4){
      printf("High Temp Friday    : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Friday    : ");
      scanf("%d",&temp[i][1]);
    }else if(i==5){
      printf("High Temp Saturday  : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Saturday  : ");
      scanf("%d",&temp[i][1]);
    }else if(i==6){
      printf("High Temp Sunday    : ");
      scanf("%d",&temp[i][0]);
      printf("Low  Temp Sunday    : ");
      scanf("%d",&temp[i][1]);
    }
    if(Max<temp[i][0])
      Max = temp[i][0];
    if(Min>temp[i][1])
      Min = temp[i][1];
  }
  printf("********************************\n");
  printf("Max Temperature is %d C\n",Max);
  printf("Min Temperature is %d C\n",Min);
  for(i=0;i<7;i++){
     SumH += temp[i][0];
   }
  printf("Average High Temperature is %.2f C\n",SumH/7);
   for(i=0;i<7;i++){
     SumL += temp[i][1];
   }
  printf("Average Low  Temperature is %.2f C\n",SumL/7);
   for(x=0;x<7;x++){
     for(y=0;y<7;y++){
       if(temp[y+1][0] > temp[y][0]){
         a =temp[y+1][0] ;
         temp[y+1][0] = temp[y][0] ;
         temp[y][0] = a ;
       }
       if(temp[y+1][1] > temp[y][1]){
         b =temp[y+1][1] ;
         temp[y+1][1] = temp[y][1] ;
         temp[y][1] = b ;
       }
     }
   }
   midH = temp[3][0];
   midL = temp[3][1];
  printf("Median High Temperature is %d C\n",midH);
  printf("Median Low Temperature is %d C\n",midL);
  return 0;
}