## 求平面内M点的极坐标



![](https://github.com/evmn/math/blob/master/images/00.png)

![](https://github.com/evmn/math/blob/master/images/01.png)

![](https://github.com/evmn/math/blob/master/images/02.png)

## 先把极坐标转换成直角坐标:

![](https://github.com/evmn/math/blob/master/images/03.png)

## M点坐标可以表示为:

![](https://github.com/evmn/math/blob/master/images/04.png)

## P点坐标可以表示为:

![](https://github.com/evmn/math/blob/master/images/05.png)

## 设AP与水平轴的夹角β，则有:

![](https://github.com/evmn/math/blob/master/images/06.png)

## 设AC与水平轴(负轴方向,后同)的夹角α，则有:

![](https://github.com/evmn/math/blob/master/images/07.png)

## 设AC与AP的夹角为θ，则有:

![](https://github.com/evmn/math/blob/master/images/08.png)

## 带入计算AP与水平轴的夹角的β:

![](https://github.com/evmn/math/blob/master/images/09.png)

## 计算M点坐标:

![](https://github.com/evmn/math/blob/master/images/10.png)

## 根据下面公式可以得到M点的极坐标:

![](https://github.com/evmn/math/blob/master/images/11.png)



## 写个程序测试一下


```c
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
```







## Reference

 -[AxMath](http://www.amyxun.com/)
 -[HostMath](http://www.hostmath.com/)
