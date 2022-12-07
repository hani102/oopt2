#include <iostream>
using namespace std;

class String {
private:
	char* a;
	char* b;
	char l;
	char x;
	int z;
	string j;
	int h;
	int v;

public:
	String();
	String(const String& str);
	String(const String& str, int pos, int len);
	String(const char* s);
	String(const char* s, int n);
	String(int n, char c);
	int length();
	char at(int i);
	String substr(int pos, int len) ;
	friend ostream& operator<< (ostream& os, const String& str);




};

