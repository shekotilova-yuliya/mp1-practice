#include <stdio.h>
#include <math.h>
void main ()
{
float Mdvp, Mdsp, Mderevo, M;
float Pdsp, Pdvp, Pderevo;
float Vzs, Vb,Vd, Vp,Vvnk;
float h, w,t1; //��������� ������ ������ �� ���
float d, t2; //2 �������� �� ���
float t3; //��������� ������� � ������ ������ �� ���
float t4; //2 ��������� ����� ����� �� ������
float r; //���������� ����� �� ���
scanf("%f %f %f %f %f %f %f %f %f %f", &Pdsp, &Pdvp, &Pderevo, &h, &w, &t1, &d, &t2, &t3, &t4);
//��� ��������� ������� � ��, ����� ���������
if ((h>=180)&&(h<=220))
 {
  r=h/40;
 }
else 
	printf("������ ����� �� ����������");
if (((w>=80)&&(w<=120))&&((d>=50)&&(d<=90)))
 {
  Vzs=h*w*t1;//��� ��������� ������
  Vb=2*h*d*t2;//��� ��������
  Vvnk=2*w*d*t3;//��� ������� � ������ ������
  Vd=2*h*w*t4;//������ �����
  Vp=r*w*d;//��� �����
 }
  Mdsp=(Vb+Vvnk+Vp)*Pdsp;
  Mdvp=Vzs*Pdvp;
  Mderevo=Vd*Pderevo;
  M = (Mdsp+Mdvp+Mderevo)/1000000;
  printf("����� ����� = %f ��", M );
}  