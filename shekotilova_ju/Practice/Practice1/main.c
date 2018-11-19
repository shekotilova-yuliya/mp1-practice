#include <stdio.h>
#include <math.h>
void main ()
{
	float Mdvp, Mdsp, Mderevo, M;
	float Pdsp, Pdvp, Pderevo;
	float Vzs, Vb,Vd, Vp,Vvnk;
	float h, w,t1=0.5; //накладная задняя стенка из ДВП
	float d, t2=1.5; //2 боковины из ДСП
	float t3=1.5;//верхняя и нижняя крышки из ДСП
	float t4=1.0;//2 накладные двери шкафа из ДЕРЕВА
	float r; //внутренние полки из ДСП
	scanf("%f %f %f %f %f %f", &Pdsp, &Pdvp, &Pderevo, &h, &w, &d);
		if (((h>=180)&&(h<=220))&&((w>=80)&&(w<=120))&&((d>=50)&&(d<=90)))
		{
			r=h/40;	//количество полок
			Vzs=h*w*t1;//ДВП накладная стенка
			Vb=2*h*d*t2;//ДСП боковины
			Vvnk=2*w*d*t3;//ДСП верхняя и нижняя крышки
			Vd=2*h*w*t4;//дерево двери
			Vp=r*w*d;//ДСП полки
		}
		else
			printf("Такого шкафа не существует \n");
	//масса шкафа = объем * плотность

		Mdsp=(Vb+Vvnk+Vp)*Pdsp; //находим массу всего, что связано с ДСП
		Mdvp=Vzs*Pdvp; //находим массу всего, что связано с ДВП
		Mderevo=Vd*Pderevo;//находим массу всего, что связано с деревом
		M = (Mdsp+Mdvp+Mderevo)/1000000;//находим массу шкафа
		printf("Масса шкафа = %f кг", M );
}
