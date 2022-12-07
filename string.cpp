#include "String.h"

String::String() {
	String k;
	k = nullptr;

}
String::String(const  String&str ) {

	j = str.j;

}
String::String(const String& str, int pos, int len) {
	j = str.j;
	z = pos;
	v = len;

}
String::String(const char* s) {
	int length = 0;
	
	while (true) {
		if (s[length] == '\0')
			break;
		else
			length++;
	}
	s = new char[length + 1];
	
}
String::String(const char* s, int n) {

	int length = 0;

	while (true) {
		if (s[length] == '\0')
			break;
		else
			length++;
	}
	s = new char[length + 1];
	
}
String::String(int n, char c){

	cout << "Input length";
	cin >> n;
	v = n;
	cout << "character of string";
	cin >> c;
	for (int i = 0; i < n; i++)
		string str = str + c;

	
	cout << str;
}
int String:: length() {
	int n;
	v = n;
	return v;
}
char String::at(int i) {
	h = i;
	return h;


}
 String String:: substr(int pos, int len){

	 z = pos;
	 v = len;
}
 ostream& String::  operator<< (ostream& os, const String& str) {
	 os << obj.os << '/' << obj.str;


 }

