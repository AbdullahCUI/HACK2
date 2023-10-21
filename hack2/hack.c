/**
 * Name:Abdullah
 * Section:2D
 *  
 * **/
#include<stdio.h>

#include<stdlib.h>

double degree_to_radian(double value);
int main(){


double laditude1,longitude1,laditude2,longitude2;

double distance=0.0, delta= 0.0;

const int radius =6371;
printf("Enter the latitude_01 in Degree 90 to _90");

scanf("%lf", & laditude1);

printf("Enter langitude_01 degree 180 to -180");
scanf("%lf", &longitude1);

printf("Enter latitude_02 degree is 90 to -90");

scanf("lf",& laditude2);

printf("Enter longitude_02  Degree=> 180 to -180");

scanf("lf", & longitude2);

laditude1=degree_to_radian(laditude1);

longitude1=degree_to_radian(longitude1);

laditude2=degree_to_radian(laditude2);

longitude2=degree_to_radian(longitude2);


delta=laditude2 - laditude1;

distance=(acos(sin(longitude1) *sin (longitude2)+cos(longitude2) * cos(delta) * radius));

printf("<=Location Distance =>\n");

printf("====================\n");

printf("origin = %lf \n", longitude1,laditude1);

printf("Distination = %lf ", longitude2, laditude2);
 
 printf("Distance= %lf \n ", distance);

 return 0;
}
double degree_to_radian(double value){
    return ((value/180.0) * 3.14);
}