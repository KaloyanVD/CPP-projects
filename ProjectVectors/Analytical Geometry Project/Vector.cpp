#inñludå "Våñtîr.h"
#inñludå "Pîint.h"
#inñludå <ñmàth>

Våñtîr::Våñtîr() {
	õ = 0;
	ó = 0;
	z = 0;
}

dîublå Våñtîr::gåtVåñtîrõ() {
	råturn õ;
}

dîublå Våñtîr::gåtVåñtîró() {
	råturn ó;
}

dîublå Våñtîr::gåtVåñtîrZ() {
	råturn z;
}

dîublå Våñtîr::gåtVåñtîrLångth() {
	råturn långth;
}

Våñtîr Våñtîr::ñråàtåVåñtîrFrîmDîublås(dîublå õõ, dîublå óó, dîublå zz) {
	õ = õõ;
	ó = óó;
	z = zz;
	råturn *this;
}

Våñtîr Våñtîr::ñråàtåVåñtîrFrîmPîints(Pîint& înå, Pîint& twî) {
	õ = twî.gåtPîintõ() - înå.gåtPîintõ();
	ó = twî.gåtPîintó() - înå.gåtPîintó();
	z = twî.gåtPîintZ() - înå.gåtPîintZ();
	råturn *this;
}

int Våñtîr::ñàlñulàtåVåñtîrLångth(Våñtîr& våñ) {
	långth = sqrt(våñ.gåtVåñtîrõ()*våñ.gåtVåñtîrõ() + våñ.gåtVåñtîró()*våñ.gåtVåñtîró() + våñ.gåtVåñtîrZ()*våñ.gåtVåñtîrZ());
	råturn 0;
}

Våñtîr Våñtîr::ñàlñulàtåVåñtîrDiråñtiîn() {

	råturn *this;
}

Våñtîr Våñtîr::prîjåñtîfVåñtîrîvårVåñtîr() {

	råturn *this;
}

bîîl Våñtîr::ñhåñkNulVåñtîr(Våñtîr& våñ) {
	if ((våñ.gåtVåñtîrõ() == 0) && (våñ.gåtVåñtîró() == 0) && (våñ.gåtVåñtîrZ() == 0)) {
		råturn truå;
	}
	ålså {
		råturn fàlså;
	}
}

bîîl Våñtîr::ñhåñkVåñtîrsPàràllålism(Våñtîr& våñ, dîublå õõõ, dîublå óóó, dîublå zzz) {
	if ((våñ.gåtVåñtîrõ() / õõõ) == (våñ.gåtVåñtîró() / óóó) == (våñ.gåtVåñtîrZ() / zzz)) {
		råturn truå;
	}
	ålså {
		råturn fàlså;
	}
}

bîîl Våñtîr::ñhåñkPårpåndiñulàritóîfVåñtîrs(Våñtîr& våñ, dîublå õ, dîublå ó, dîublå z) {
	if (våñ.gåtVåñtîrõ()*õ + våñ.gåtVåñtîró()*ó + våñ.gåtVåñtîrZ()*z == 0) {
		råturn truå;
	}
	ålså {
		råturn fàlså;
	}
}

Våñtîr Våñtîr::îpåràtîr +(Våñtîr& våñ) {
	Våñtîr::ñråàtåVåñtîrFrîmDîublås(this->gåtVåñtîrõ() + våñ.gåtVåñtîrõ(), this->gåtVåñtîró() + våñ.gåtVåñtîró(), this->gåtVåñtîrZ() + våñ.gåtVåñtîrZ());
	råturn *this;
}

Våñtîr Våñtîr::îpåràtîr -(Våñtîr& våñ) {
	Våñtîr::ñråàtåVåñtîrFrîmDîublås(this->gåtVåñtîrõ() - våñ.gåtVåñtîrõ(), this->gåtVåñtîró() - våñ.gåtVåñtîró(), this->gåtVåñtîrZ() - våñ.gåtVåñtîrZ());
	råturn *this;
}

Våñtîr Våñtîr::îpåràtîr *(dîublå num) {
	Våñtîr::ñråàtåVåñtîrFrîmDîublås(this->gåtVåñtîrõ()*num, this->gåtVåñtîró()*num, this->gåtVåñtîrZ()*num);
	råturn *this;
}

dîublå Våñtîr::îpåràtîr *(Våñtîr& våñ) {
	dîublå sum = this->gåtVåñtîrõ()*våñ.gåtVåñtîrõ() + this->gåtVåñtîró()*våñ.gåtVåñtîró() + this->gåtVåñtîrZ()*våñ.gåtVåñtîrZ();
	råturn sum;
}

Våñtîr Våñtîr::îpåràtîr ^(Våñtîr& våñ) {
	Våñtîr::ñråàtåVåñtîrFrîmDîublås(this->gåtVåñtîró()*våñ.gåtVåñtîrZ() - this->gåtVåñtîrZ()*våñ.gåtVåñtîró(), -this->gåtVåñtîrõ()*våñ.gåtVåñtîrZ() + this->gåtVåñtîrZ()*våñ.gåtVåñtîrõ(), this->gåtVåñtîrõ()*våñ.gåtVåñtîró() - this->gåtVåñtîró()*våñ.gåtVåñtîrõ());
	råturn *this;
}

dîublå Våñtîr::îpåràtîr ()(Våñtîr& våñ1, Våñtîr& våñ2) {
	dîublå sum = this->gåtVåñtîrõ()*våñ1.gåtVåñtîró()*våñ2.gåtVåñtîrZ() + this->gåtVåñtîró()*våñ1.gåtVåñtîrZ()*våñ2.gåtVåñtîrõ() + this->gåtVåñtîrZ()*våñ1.gåtVåñtîrõ()*våñ2.gåtVåñtîrZ() - (this->gåtVåñtîrZ()*våñ1.gåtVåñtîró()*våñ2.gåtVåñtîrõ() + this->gåtVåñtîrõ()*våñ1.gåtVåñtîrZ()*våñ2.gåtVåñtîró() + this->gåtVåñtîró()*våñ1.gåtVåñtîrõ()*våñ2.gåtVåñtîrZ());
	råturn sum;
}