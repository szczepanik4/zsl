#include <iostream>
using namespace std;

class Rectangle{
	public:
		int a;
		int b;
		
	void showFieldAndCircuit(){
		int Field=a*b; 
		int Circuit=a*2+b*2;
		cout << "pole i obwod prostokata: " << Field << " " << Circuit;
	};
};



int main(int argc, char** argv) {
	setlocale (LC_CTYPE, "Polish");
	Rectangle side;
	cout <<"wprowadz bok a";
	cin >> side.a;
	cout <<"wprowadz bok b";
	cin >> side.b;
	
	side.showFieldAndCircuit();
	return 0;
}
