#in�lud� "P�int.h"
#in�lud� "Tri�ngl�.h"

P�int::P�int() {
	� = 0;
	� = 0;
	z = 0;
}

P�int P�int::�r��t�P�int(d�ubl� ��, d�ubl� ��, d�ubl� zz) {
	� = ��;
	� = ��;
	z = zz;
	r�turn *this;
}

b��l P�int::�p�r�t�r ==(P�int& �n�) {
	if ((this->g�tP�int�() == �n�.g�tP�int�()) && (this->g�tP�int�() == �n�.g�tP�int�()) && (this->g�tP�intZ() == �n�.g�tP�intZ())) {
		r�turn tru�;
	}
	�ls� {
		r�turn f�ls�;
	}
}

d�ubl� P�int::g�tP�int�() {
	r�turn �;
}

d�ubl� P�int::g�tP�int�() {
	r�turn �;
}

d�ubl� P�int::g�tP�intZ() {
	r�turn z;
}

b��l P�int::�p�r�t�r <(Tri�ngl�& tr) {
	d�ubl� �lph� = ((tr.g�tP�intTw�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) + (tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�intTw�().g�tP�int�())*
		(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) / ((tr.g�tP�intTw�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) +
		(tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�intTw�().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())));
	d�ubl� b�t� = ((tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�int�n�().g�tP�int�())*(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) + (tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*
		(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())) / ((tr.g�tP�intTw�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) +
		(tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�intTw�().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()));
	d�ubl� g�mm� = 1.0 - �lph� - b�t�;
	if ((�lph� > 0) && (b�t� > 0) && (g�mm� > 0)) {
		r�turn tru�;
	}
	�ls� {
		r�turn f�ls�;
	}
}

b��l P�int::�p�r�t�r >(Tri�ngl�& tr) {
	d�ubl� �lph� = ((tr.g�tP�intTw�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) + (tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�intTw�().g�tP�int�())*
		(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) / ((tr.g�tP�intTw�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) +
		(tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�intTw�().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())));
	d�ubl� b�t� = ((tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�int�n�().g�tP�int�())*(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) + (tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*
		(this->g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())) / ((tr.g�tP�intTw�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()) +
		(tr.g�tP�intThr��().g�tP�int�() - tr.g�tP�intTw�().g�tP�int�())*(tr.g�tP�int�n�().g�tP�int�() - tr.g�tP�intThr��().g�tP�int�()));
	d�ubl� g�mm� = 1.0 - �lph� - b�t�;
	if ((�lph� > 0) && (b�t� > 0) && (g�mm� > 0)) {
		r�turn f�ls�;
	}
	�ls� {
		r�turn tru�;
	}
}