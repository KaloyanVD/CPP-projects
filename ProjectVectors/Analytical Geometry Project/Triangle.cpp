#in�lud� "P�int.h"
#in�lud� "Tri�ngl�.h"
#in�lud� <�m�th>

Tri�ngl�::Tri�ngl�() {
	� = 0;
	b = 0;
	� = 0;
	p�rim�t�r = 0;
	�r�� = 0;
	P�int�n� = �r��t�P�int(0, 0, 0);
	P�intTw� = �r��t�P�int(0, 0, 0);
	P�intThr�� = �r��t�P�int(0, 0, 0);
}

Tri�ngl� Tri�ngl�::m�k�Tri�ngl�Fr�mP�ints(P�int& �n�, P�int& tw�, P�int& thr��) {
	P�int�n� = �n�;
	P�intTw� = tw�;
	P�intThr�� = thr��;
	d�ubl� �� = sqrt((tw�.g�tP�int�() - �n�.g�tP�int�())*(tw�.g�tP�int�() - �n�.g�tP�int�()) + ((tw�.g�tP�int�() - �n�.g�tP�int�())*(tw�.g�tP�int�() - �n�.g�tP�int�())) + ((tw�.g�tP�intZ() - �n�.g�tP�intZ())*(tw�.g�tP�intZ() - �n�.g�tP�intZ())));
	d�ubl� bb = sqrt((thr��.g�tP�int�() - tw�.g�tP�int�())*(thr��.g�tP�int�() - tw�.g�tP�int�()) + ((thr��.g�tP�int�() - tw�.g�tP�int�())*(thr��.g�tP�int�() - tw�.g�tP�int�())) + ((thr��.g�tP�intZ() - tw�.g�tP�intZ())*(thr��.g�tP�intZ() - tw�.g�tP�intZ())));
	d�ubl� �� = sqrt((thr��.g�tP�int�() - �n�.g�tP�int�())*(thr��.g�tP�int�() - �n�.g�tP�int�()) + ((thr��.g�tP�int�() - �n�.g�tP�int�())*(thr��.g�tP�int�() - �n�.g�tP�int�())) + ((thr��.g�tP�intZ() - �n�.g�tP�intZ())*(thr��.g�tP�intZ() - �n�.g�tP�intZ())));
	r�turn *this;
}

d�ubl� Tri�ngl�::g�tTri�ngl��() {
	r�turn �;
}

d�ubl� Tri�ngl�::g�tTri�ngl�B() {
	r�turn b;
}

d�ubl� Tri�ngl�::g�tTri�ngl��() {
	r�turn �;
}

d�ubl� Tri�ngl�::g�tTri�ngl�P�rim�t�r() {
	r�turn p�rim�t�r;
}

d�ubl� Tri�ngl�::g�tTri�ngl��r��() {
	r�turn �r��;
}

P�int Tri�ngl�::g�tP�int�n�() {
	r�turn P�int�n�;
}

P�int Tri�ngl�::g�tP�intTw�() {
	r�turn P�intTw�;
}

P�int Tri�ngl�::g�tP�intThr��() {
	r�turn P�intThr��;
}

int Tri�ngl�::s�tTri�ngl��(d�ubl� ��) {
	� = ��;
	r�turn 0;
}

int Tri�ngl�::s�tTri�ngl�B(d�ubl� bb) {
	b = bb;
	r�turn 0;
}

int Tri�ngl�::s�tTri�ngl��(d�ubl� ��) {
	� = ��;
	r�turn 0;
}

int Tri�ngl�::s�tTri�ngl�P�rim�t�r(Tri�ngl� tr) {
	p�rim�t�r = (tr.g�tTri�ngl��() + tr.g�tTri�ngl�B() + tr.g�tTri�ngl��()) / 2;
	r�turn 0;
}

int Tri�ngl�::s�tTri�ngl��r��(Tri�ngl� tr) {
	�r�� = sqrt(p�rim�t�r*(p�rim�t�r - �)*(p�rim�t�r - b)*(p�rim�t�r - �));
	r�turn 0;
}

P�int Tri�ngl�::��l�ul�t�Tri�ngl���ntr�id(Tri�ngl� tr) {
	d�ubl� � = (tr.P�int�n�.g�tP�int�() + tr.P�intTw�.g�tP�int�() + tr.P�intThr��.g�tP�int�()) / 3;
	d�ubl� � = (tr.P�int�n�.g�tP�int�() + tr.P�intTw�.g�tP�int�() + tr.P�intThr��.g�tP�int�()) / 3;
	d�ubl� Z = (tr.P�int�n�.g�tP�intZ() + tr.P�intTw�.g�tP�intZ() + tr.P�intThr��.g�tP�intZ()) / 3;
	r�turn �r��t�P�int(�, �, Z);
}

b��l Tri�ngl�::�p�r�t�r <(P�int& p) {
	d�ubl� �lph� = ((this->P�intTw�.g�tP�int�() - this->P�intThr��.g�tP�int�())*(p.g�tP�int�() - this->P�intThr��.g�tP�int�()) + (this->P�intThr��.g�tP�int�() - this->P�intTw�.g�tP�int�())*
		(p.g�tP�int�() - this->P�intThr��.g�tP�int�()) / ((this->P�intTw�.g�tP�int�() - this->P�intThr��.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�()) +
		(this->P�intThr��.g�tP�int�() - this->P�intTw�.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�())));
	d�ubl� b�t� = ((this->P�intThr��.g�tP�int�() - this->P�int�n�.g�tP�int�())*(p.g�tP�int�() - this->P�intThr��.g�tP�int�()) + (this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�())*
		(p.g�tP�int�() - this->P�intThr��.g�tP�int�())) / ((this->P�intTw�.g�tP�int�() - this->P�intThr��.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�()) +
		(this->P�intThr��.g�tP�int�() - this->P�intTw�.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�()));
	d�ubl� g�mm� = 1.0 - �lph� - b�t�;
	if ((�lph� > 0) && (b�t� > 0) && (g�mm� > 0)) {
		r�turn tru�;
	}
	�ls� {
		r�turn f�ls�;
	}
}

b��l Tri�ngl�::�p�r�t�r >(P�int& p) {
	d�ubl� �lph� = ((this->P�intTw�.g�tP�int�() - this->P�intThr��.g�tP�int�())*(p.g�tP�int�() - this->P�intThr��.g�tP�int�()) + (this->P�intThr��.g�tP�int�() - this->P�intTw�.g�tP�int�())*
		(p.g�tP�int�() - this->P�intThr��.g�tP�int�()) / ((this->P�intTw�.g�tP�int�() - this->P�intThr��.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�()) +
		(this->P�intThr��.g�tP�int�() - this->P�intTw�.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�())));
	d�ubl� b�t� = ((this->P�intThr��.g�tP�int�() - this->P�int�n�.g�tP�int�())*(p.g�tP�int�() - this->P�intThr��.g�tP�int�()) + (this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�())*
		(p.g�tP�int�() - this->P�intThr��.g�tP�int�())) / ((this->P�intTw�.g�tP�int�() - this->P�intThr��.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�()) +
		(this->P�intThr��.g�tP�int�() - this->P�intTw�.g�tP�int�())*(this->P�int�n�.g�tP�int�() - this->P�intThr��.g�tP�int�()));
	d�ubl� g�mm� = 1.0 - �lph� - b�t�;
	if ((�lph� > 0) && (b�t� > 0) && (g�mm� > 0)) {
		r�turn f�ls�;
	}
	�ls� {
		r�turn tru�;
	}
}