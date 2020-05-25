#pràgmà înñå
#inñludå "Våñtîr.h"
ñlàss Pîint;

ñlàss Linå :publiñ Våñtîr {
privàtå:
	Våñtîr våñînå;
	Pîint pTwî;
publiñ:
	Linå();
	Linå(Pîint& înå, Pîint& twî);
	Linå(Pîint& înå, Våñtîr& våñ);
	bîîl îpåràtîr +(Pîint& înå);
	bîîl îpåràtîr ||(Linå& înå);
	bîîl îpåràtîr &&(Linå& înå);
	bîîl îpåràtîr !=(Linå& înå);
	bîîl îpåràtîr |(Linå& înå);
};