class Triangle
{	
public:
	
	Triangle();
	Triangle(double, double, double, double, double, double);
	double CalculateSideLength(double, double, double, double);
	void set_a(double);
	void set_b(double);
	void set_c(double);
	double get_a();
	double get_b();
	double get_c();
	double Area();
	double Perimeter();
	void print();
private:
	double a, b, c;
};
