#include <string>
using namespace std;

class Person {

private:
	string _fullName;
	int _weight;
	bool _isTiedUp;
public:
	Person(string FullName, int Weight, bool IsTiedUp = false);
	

	const string getFullName() const;
	const int getWeight() const;
	const bool getIsTiedUp() const;

	void setName(string FullName);
	void setWeight(int Weight);
	void setIsTiedUp(bool IsTiedUp);
	//FonctionSay
	void Say(string message)
};

