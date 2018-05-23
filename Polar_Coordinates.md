## 已知条件

已知ABCD为位于第一象限的长方形，AD长度为a,AB长度为b.\space A点极\hspace{10mm}\hspace{10mm}\hspace{10mm}\hspace{10mm}\\\space \space \space \space 坐标(R_{a},\theta_{a}),C点极坐标(R_{c},\theta_{c}).\space 长方形内一点M距离AD边为a_{1},距\hspace{10mm}\hspace{10mm}\hspace{10mm}\hspace{10mm}\\离AB边为b_{1},a_{1}=\frac{a}{m},b_{1}=\frac{b}{n},求M点极坐标.\hspace{10mm}\hspace{10mm}\hspace{10mm}\hspace{28mm}

=========

过M点做垂直于AD的直线MP交AD于P点，设P点坐标为（x_{p},y_{p}），m点坐标为（x_{m},y_{m}）。\\AC与水平轴(负轴方向，后同)的夹角为\alpha，AC与AP的夹角为\theta，AP与水平轴的夹角为\beta，则\hspace{12mm}\\有\beta=\alpha-\theta.\hspace{98mm}






## 最终要求M点坐标

x_{m}=x_{p}+a_{1}\cdot\sin\beta

y_{m}=y_{p}+a_{1}\cdot\cos\beta


## 需要先求出P点坐标和AP与水平轴夹角


x_{p}=x_{a}-b_{1}\cdot\cos\beta

y_{p}=y_{a}+b_{1}\cdot\sin\beta



## 先计算AC与水平轴的夹角，减去AC与AP的夹角，就是AP与水平轴的夹角

\sin\beta=\sin(\alpha-\theta)=\sin\alpha\cdot\cos\theta-\sin\theta\cdot\cos\alpha
\cos\beta=\cos(\alpha-\theta)=\cos\alpha\cdot\cos\theta+\sin\alpha\cdot\sin\theta



已知条件：

\sin\alpha=\frac{y_{c}-y_{a}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}}
\cos\alpha=\frac{x_{a}-x_{c}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}}

\sin\theta=\frac{a}{\sqrt{a^{2}+b^{2}}}
\cos\theta=\frac{b}{\sqrt{a^{2}+b^{2}}}

b_{1}=\frac{b}{n}

a_{1}=\frac{a}{m}




======================================================================


## 计算AP与水平轴的夹角的sin和cos值

\sin\beta=(\frac{y_{c}-y_{a}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}})\cdot(\frac{b}{\sqrt{a^{2}+b^{2}}})-(\frac{a}{\sqrt{a^{2}+b^{2}}})\cdot(\frac{x_{a}-x_{c}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}})


\cos\beta=(\frac{x_{a}-x_{c}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}})\cdot(\frac{b}{\sqrt{a^{2}+b^{2}}})+(\frac{y_{c}-y_{a}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}})\cdot(\frac{a}{\sqrt{a^{2}+b^{2}}})


=====

化减一下

\sin\beta=\frac{(y_{c}-y_{a})\cdot{b}-(x_{a}-x_{c})\cdot{a}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}\cdot\sqrt{a^{2}+b^{2}}}
\cos\beta=\frac{(y_{c}-y_{a})\cdot{a}+(x_{a}-x_{c})\cdot{b}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}\cdot\sqrt{a^{2}+b^{2}}}





## 计算M点坐标

x_{m}=x_{p}+a_{1}\cdot\sin\beta=x_{a}-b_{1}\cdot\cos\beta+a_{1}\cdot\sin\beta
y_{m}=y_{p}+a_{1}\cdot\cos\beta=y_{a}+b_{1}\cdot\sin\beta+a_{1}\cdot\cos\beta


======把已知量带入后

x_{m}=x_{a}-\frac{b\cdot\cos\beta}{n}+\frac{a\cdot\sin\beta}{m}
y_{m}=y_{a}+\frac{b\cdot\sin\beta}{n}+\frac{a\cdot\cos\beta}{m}

=============
====最终结果
=============

x_{m}=x_{a}-\frac{(y_{c}-y_{a})\cdot{a}\cdot{b}+(x_{a}-x_{c})\cdot{b^2}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}\cdot\sqrt{a^{2}+b^{2}}\cdot{n}}+\frac{(y_{c}-y_{a})\cdot{a}\cdot{b}-(x_{a}-x_{c})\cdot{a^2}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}\cdot\sqrt{a^{2}+b^{2}}\cdot{m}}

y_{m}=y_{a}+\frac{(y_{c}-y_{a})\cdot{b^2}-(x_{a}-x_{c})\cdot{a}\cdot{b}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}\cdot\sqrt{a^{2}+b^{2}}\cdot{n}}+\frac{(y_{c}-y_{a})\cdot{a^2}+(x_{a}-x_{c})\cdot{a}\cdot{b}}{\sqrt{(y_{a}-y_{c})^{2}+(x_{a}-x_{c})^{2}}\cdot\sqrt{a^{2}+b^{2}}\cdot{m}}








=================================================================

用极坐标表示结果A点极坐标为（Ra, θa）,C点极坐标为（Rc, θc），则有：


x_{a}=R_{a}\cdot\cos\theta_{a}
y_{a}=R_{a}\cdot\sin\theta_{a}


x_{c}=R_{c}\cdot\cos\theta_{c}
y_{c}=R_{c}\cdot\sin\theta_{c}



最终结果M点极坐标为（Rm, θm）
R_{m}=\sqrt{x_{m}^2+y_{m}^2}
\hspace{6mm}
\theta_{m}=arctan(\frac{y_{m}}{x_{m}})(注：x_{m}、y_{m}均在第一象限)








## 注释

tab：\hspace{10mm}



















































