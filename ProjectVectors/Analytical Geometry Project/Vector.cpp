#in�lud� "V��t�r.h"
#in�lud� "P�int.h"
#in�lud� <�m�th>

V��t�r::V��t�r() {
	� = 0;
	� = 0;
	z = 0;
}

d�ubl� V��t�r::g�tV��t�r�() {
	r�turn �;
}

d�ubl� V��t�r::g�tV��t�r�() {
	r�turn �;
}

d�ubl� V��t�r::g�tV��t�rZ() {
	r�turn z;
}

d�ubl� V��t�r::g�tV��t�rL�ngth() {
	r�turn l�ngth;
}

V��t�r V��t�r::�r��t�V��t�rFr�mD�ubl�s(d�ubl� ��, d�ubl� ��, d�ubl� zz) {
	� = ��;
	� = ��;
	z = zz;
	r�turn *this;
}

V��t�r V��t�r::�r��t�V��t�rFr�mP�ints(P�int& �n�, P�int& tw�) {
	� = tw�.g�tP�int�() - �n�.g�tP�int�();
	� = tw�.g�tP�int�() - �n�.g�tP�int�();
	z = tw�.g�tP�intZ() - �n�.g�tP�intZ();
	r�turn *this;
}

int V��t�r::��l�ul�t�V��t�rL�ngth(V��t�r& v��) {
	l�ngth = sqrt(v��.g�tV��t�r�()*v��.g�tV��t�r�() + v��.g�tV��t�r�()*v��.g�tV��t�r�() + v��.g�tV��t�rZ()*v��.g�tV��t�rZ());
	r�turn 0;
}

V��t�r V��t�r::��l�ul�t�V��t�rDir��ti�n() {

	r�turn *this;
}

V��t�r V��t�r::pr�j��t�fV��t�r�v�rV��t�r() {

	r�turn *this;
}

b��l V��t�r::�h��kNulV��t�r(V��t�r& v��) {
	if ((v��.g�tV��t�r�() == 0) && (v��.g�tV��t�r�() == 0) && (v��.g�tV��t�rZ() == 0)) {
		r�turn tru�;
	}
	�ls� {
		r�turn f�ls�;
	}
}

b��l V��t�r::�h��kV��t�rsP�r�ll�lism(V��t�r& v��, d�ubl� ���, d�ubl� ���, d�ubl� zzz) {
	if ((v��.g�tV��t�r�() / ���) == (v��.g�tV��t�r�() / ���) == (v��.g�tV��t�rZ() / zzz)) {
		r�turn tru�;
	}
	�ls� {
		r�turn f�ls�;
	}
}

b��l V��t�r::�h��kP�rp�ndi�ul�rit��fV��t�rs(V��t�r& v��, d�ubl� �, d�ubl� �, d�ubl� z) {
	if (v��.g�tV��t�r�()*� + v��.g�tV��t�r�()*� + v��.g�tV��t�rZ()*z == 0) {
		r�turn tru�;
	}
	�ls� {
		r�turn f�ls�;
	}
}

V��t�r V��t�r::�p�r�t�r +(V��t�r& v��) {
	V��t�r::�r��t�V��t�rFr�mD�ubl�s(this->g�tV��t�r�() + v��.g�tV��t�r�(), this->g�tV��t�r�() + v��.g�tV��t�r�(), this->g�tV��t�rZ() + v��.g�tV��t�rZ());
	r�turn *this;
}

V��t�r V��t�r::�p�r�t�r -(V��t�r& v��) {
	V��t�r::�r��t�V��t�rFr�mD�ubl�s(this->g�tV��t�r�() - v��.g�tV��t�r�(), this->g�tV��t�r�() - v��.g�tV��t�r�(), this->g�tV��t�rZ() - v��.g�tV��t�rZ());
	r�turn *this;
}

V��t�r V��t�r::�p�r�t�r *(d�ubl� num) {
	V��t�r::�r��t�V��t�rFr�mD�ubl�s(this->g�tV��t�r�()*num, this->g�tV��t�r�()*num, this->g�tV��t�rZ()*num);
	r�turn *this;
}

d�ubl� V��t�r::�p�r�t�r *(V��t�r& v��) {
	d�ubl� sum = this->g�tV��t�r�()*v��.g�tV��t�r�() + this->g�tV��t�r�()*v��.g�tV��t�r�() + this->g�tV��t�rZ()*v��.g�tV��t�rZ();
	r�turn sum;
}

V��t�r V��t�r::�p�r�t�r ^(V��t�r& v��) {
	V��t�r::�r��t�V��t�rFr�mD�ubl�s(this->g�tV��t�r�()*v��.g�tV��t�rZ() - this->g�tV��t�rZ()*v��.g�tV��t�r�(), -this->g�tV��t�r�()*v��.g�tV��t�rZ() + this->g�tV��t�rZ()*v��.g�tV��t�r�(), this->g�tV��t�r�()*v��.g�tV��t�r�() - this->g�tV��t�r�()*v��.g�tV��t�r�());
	r�turn *this;
}

d�ubl� V��t�r::�p�r�t�r ()(V��t�r& v��1, V��t�r& v��2) {
	d�ubl� sum = this->g�tV��t�r�()*v��1.g�tV��t�r�()*v��2.g�tV��t�rZ() + this->g�tV��t�r�()*v��1.g�tV��t�rZ()*v��2.g�tV��t�r�() + this->g�tV��t�rZ()*v��1.g�tV��t�r�()*v��2.g�tV��t�rZ() - (this->g�tV��t�rZ()*v��1.g�tV��t�r�()*v��2.g�tV��t�r�() + this->g�tV��t�r�()*v��1.g�tV��t�rZ()*v��2.g�tV��t�r�() + this->g�tV��t�r�()*v��1.g�tV��t�r�()*v��2.g�tV��t�rZ());
	r�turn sum;
}