#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main(){

    float x1,y1,x2,y2,x3,y3;
    printf("Enter first co-ordinate : \n");
    scanf("%f %f",&x1, &y1);
    printf("Enter second co-ordinate : \n");
    scanf("%f %f",&x2, &y2);
    printf("Enter third co-ordinate : \n");
    scanf("%f %f",&x3, &y3);

    float s1,s2,s3;
    s1 = fabs(y2-y1)/fabs(x2-x1);
    s2 = fabs(y2-y3)/fabs(x2-x3);
    s3 = fabs(y3-y1)/fabs(x3-x1);

    printf("s1=%f\ns2=%f\ns3=%f\n",s1,s2,s3);

    if(s1==s2 && s2==s3){
        printf("Points are Collinear points");
    }else{
        printf("Points are Non-coillinear points");
    }
    printf("\n23aiml042_panchal vedant\n");
}
