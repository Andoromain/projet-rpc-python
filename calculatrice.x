struct variable{
	double a;
	double b;
};
typedef struct variable variable;
program CALCUL{
	version PROG_V1{
		double ADDITION(variable)=1;
		double SOUSTRACT(variable)=2;
		double MULTIPLICAT(variable)=3;
		double DIVIS(variable)=4;
	}=1;
}=0x20000001;
