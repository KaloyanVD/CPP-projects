#in�lud� <i�str��m>
#in�lud� <fstr��m>
#in�lud� <�l���l�>
#in�lud� "�l�m�nt.h"
#in�lud� "P�int.h"
#in�lud� "V��t�r.h"
#in�lud� "Lin�.h"
#in�lud� "Tri�ngl�.h"
#in�lud� "S�gm�nt.h"
#in�lud� "T�tr�h�dr�n.h"
using n�m�sp��� std;

int m�in() {
	s�tl���l�(L�_�LL, "Bulg�ri�n");
	P�int �n�;
	�n�.�r��t�P�int(4, 3, 5);
	P�int tw�;
	tw�.�r��t�P�int(6, 8, 13);
	P�int thr��;
	thr��.�r��t�P�int(23, 45, 12);
	V��t�r v;
	v.�r��t�V��t�rFr�mP�ints(�n�, tw�);
	Tri�ngl� tr;
	tr.m�k�Tri�ngl�Fr�mP�ints(�n�, tw�, thr��);
	tr.��l�ul�t�Tri�ngl���ntr�id(tr);
	��ut << v.�h��kNulV��t�r(v) << �ndl;
	��ut << v.�h��kV��t�rsP�r�ll�lism(v, 2, 3, 4) << �ndl;
	��ut << v.�h��kP�rp�ndi�ul�rit��fV��t�rs(v, 5, 6, 7) << �ndl;
	V��t�r v1;
	v1.�r��t�V��t�rFr�mD�ubl�s(13, 23, 45);
	��ut << "���������� ������������ �� V��t�r 1 � V��t�r 2 �: " << v*v1 << �ndl;
	��ut << "��������� ������������ �� V��t�r 1 � V��t�r 2 �: " << v(v, v1) << �ndl;
	Tri�ngl� tr1;
	tr1.s�tTri�ngl��(3);
	tr1.s�tTri�ngl�B(5);
	tr1.s�tTri�ngl��(7);
	tr1.s�tTri�ngl�P�rim�t�r(tr1);
	tr1.s�tTri�ngl��r��(tr1);
	��ut << "����������� �� ����������� �: " << tr1.g�tTri�ngl�P�rim�t�r() << �ndl;
	��ut << "������ �� ����������� �: " << tr1.g�tTri�ngl��r��() << �ndl;
	��ut << (tr < �n�) << �ndl;
	��ut << (tr1 > tw�) << �ndl;
	P�int ��ntr�id = tr.��l�ul�t�Tri�ngl���ntr�id(tr);
	��ut << "������������ �� ����������� �: M(" << ��ntr�id.g�tP�int�() << ", " << ��ntr�id.g�tP�int�() << ", " << ��ntr�id.g�tP�intZ() << ")" << �ndl;
	v1.��l�ul�t�V��t�rDir��ti�n();

	r�turn 0;
}