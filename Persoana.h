#pragma once
class Persoana
{
private:
	double _buget, totalNota = 0;

public:
	Persoana(double);
	~Persoana();

	const double get_buget();
	const double get_nota();
	void adaugaLaNota(double);
};

