#include <stdio.h>
void main ()
{
	float Mdvp, Mdsp, Mderevo, M;
	float Pdsp, Pdvp, Pderevo;
	float Vzs, Vb,Vd, Vp,Vvnk;
	float h, w,t1=0.005; //накладная задняя стенка из ДВП
	float d, t2=0.015; //2 боковины из ДСП
	float t3=0.015;//верхняя и нижняя крышки из ДСП
	float t4=0.01;//2 накладные двери шкафа из ДЕРЕВА
	float rr, t5= 0.015; //внутренние полки из ДСП
	int r;
	printf("Введите плотность ДСП:\n");
	scanf("%f",&Pdsp);
	printf("Введите плотность ДВП:\n");
	scanf("%f",&Pdvp);
	printf("Введите плотность дерева:\n");
	scanf("%f",&Pderevo);
	printf("Введите высоту шкафа:\n");
	scanf("%f",&h);
	printf("Введите ширину шкафа:\n");
	scanf("%f",&w);
	printf("Введите глубину шкафа:\n");
	scanf("%f",&d);
	if (((h>=1.8)&&(h<=2.2))&&((w>=0.8)&&(w<=1.2))&&((d>=0.5)&&(d<=0.9)))
	{
		rr=h/0.4;
		r=(int) rr; //количество полок
		Vzs=h*w*t1;//ДВП накладная стенка
		Vb=2*h*d*t2;//ДСП боковины
		Vvnk=2*w*d*t3;//ДСП верхняя и нижняя крышки
		Vd=2*h*w*t4;//дерево двери
		Vp=r*w*d*t5;//ДСП полки 
	}
	else
	{
		printf("Такого шкафа не существует \n");
		break;
	}
	Mdsp=(Vb+Vvnk+Vp)*Pdsp; //находим массу всего, что связано с ДСП
	Mdvp=Vzs*Pdvp; //находим массу всего, что связано с ДВП
	Mderevo=Vd*Pderevo;//находим массу всего, что связано с деревом
	M = Mdsp+Mdvp+Mderevo;//находим массу шкафа
	printf("Масса шкафа = %f кг", M );
}
