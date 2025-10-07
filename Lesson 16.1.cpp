#include <iostream>
#include <string>

class Figure
{
private:
	int sidesCount;
protected:
	Figure(int count) : sidesCount(count) {}
public:
	Figure() : Figure(0) { }
	virtual ~Figure() = default;
	int sides() const { return sidesCount; }
	virtual std::string name() const { return "Figure";}
};

class Triangle : public Figure
{
public:
	Triangle() : Figure(3) {}
	std::string name() const override { return "Triangle"; }
};

class Quadrone : public Figure
{
public:
	Quadrone() : Figure(4) { }
	std::string name() const override { return "Square"; }
};

int main()
{
	Figure f;
	Triangle t;
	Quadrone s;
	std::cout << "Количество сторон: " << std::endl;
	std::cout << f.name() << ": " << f.sides() << std::endl;
	std::cout << t.name() << ": " << t.sides() << std::endl;
	std::cout << s.name() << ": " << s.sides() << std::endl;
	return EXIT_SUCCESS;
}