#in�lud� "T�tr�h�dr�n.h"

T�tr�h�dr�n::T�tr�h�dr�n() {
	d�ubl� � = 0;
	d�ubl� b = 0;
	d�ubl� � = 0;
	d�ubl� d = 0; 
	d�ubl� p�rim�t�r = 0;
	d�ubl� v�lum� = 0;
}

int T�tr�h�dr�n::s�tT�tr�h�dr�n�(d�ubl� ��) {
	� = ��;
	r�turn 0;
}

int T�tr�h�dr�n::s�tT�tr�h�dr�nB(d�ubl� bb) {
	b = bb;
	r�turn 0;
}

int T�tr�h�dr�n::s�tT�tr�h�dr�n�(d�ubl� ��) {
	� = ��;
	r�turn 0;
}

int T�tr�h�dr�n::s�tT�tr�h�dr�nD(d�ubl� dd) {
	d = dd;
	r�turn 0;
}

d�ubl� T�tr�h�dr�n::g�tT�tr�h�dr�n�() {
	r�turn �;
}

d�ubl� T�tr�h�dr�n::g�tT�tr�h�dr�nB() {
	r�turn b;
}

d�ubl� T�tr�h�dr�n::g�tT�tr�h�dr�n�() {
	r�turn �;
}

d�ubl� T�tr�h�dr�n::g�tT�tr�h�dr�nD() {
	r�turn d;
}

T�tr�h�dr�n T�tr�h�dr�n::�r��t�T�tr�h�dr�n(P�int& �n�, P�int& tw�, P�int& thr��, P�int& f�ur) {

	r�turn *this;
}

d�ubl� T�tr�h�dr�n::��l�ul�t�P�rim�t�r�fT�tr�h�dr�n(T�tr�h�dr�n& t�tr�) {
	p�rim�t�r = 0;
	r�turn p�rim�t�r;
}

d�ubl� T�tr�h�dr�n::��l�ul�t�V�lum��fT�tr�h�dr�n(T�tr�h�dr�n& t�tr�) {
	v�lum� = 0;
	r�turn v�lum�;
}

//d�ubl� v�lum� = this->g�tV��t�r�()*v��1.g�tV��t�r�()*v��2.g�tV��t�rZ() + this->g�tV��t�r�()*v��1.g�tV��t�rZ()*v��2.g�tV��t�r�() + this->g�tV��t�rZ()*v��1.g�tV��t�r�()*v��2.g�tV��t�rZ() - 
//(this->g�tV��t�rZ()*v��1.g�tV��t�r�()*v��2.g�tV��t�r�() + this->g�tV��t�r�()*v��1.g�tV��t�rZ()*v��2.g�tV��t�r�() + this->g�tV��t�r�()*v��1.g�tV��t�r�()*v��2.g�tV��t�rZ()); --fr�m V��t�r.h
