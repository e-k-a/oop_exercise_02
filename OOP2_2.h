//М8О-201Б-19 Батова Екатерина 2 вариант
class Complex {
private:
	double r, j;
public:
	Complex();
	Complex(double r, double j);
	Complex operator+(Complex add);
	Complex operator-(Complex sub);
	Complex operator*(Complex mul);
	Complex operator/(Complex div);
	bool operator==(Complex const equ);
	Complex operator--();
	void input();
	void output(std::ostream& ch);
};