#include <stdio.h>
#include <math.h>
int main()
{

    double Xa,Ya,Xc,Yc;
    double a,b,a1,b1;  
    double Xm,Ym;

    Xa=24.81670591,Ya=18.91619833, Xc=16.0, Yc=57.0;
    a=25.0, b=30.05179284;
    a1=15.0, b1=13.0;    

    double sinBeta,cosBeta;

    sinBeta = ((Yc-Ya)*b -(Xa-Xc)*a)/sqrt((a*a+b*b)*(pow((Ya-Yc),2)+pow((Xa-Xc),2)));
    cosBeta = ((Yc-Ya)*a +(Xa-Xc)*b)/sqrt((a*a+b*b)*(pow((Ya-Yc),2)+pow((Xa-Xc),2)));

    Xm = Xa-b1*cosBeta + a1*sinBeta;
    Ym = Ya+b1*sinBeta + a1*cosBeta;

    printf("\
            当A点坐标为(%lf, %lf), C点坐标为(%lf, %lf),\n\
            AB边长为%lf, BC边长为%lf, 点M到AD距离为%lf, \n\
            到AB距离为%lf时：----->>>>>", Xa, Ya, Xc, Yc, a, b, a1, b1);
    printf("M点的坐标为(%lf, %lf)。\n", Xm, Ym);

    return 0;
}
