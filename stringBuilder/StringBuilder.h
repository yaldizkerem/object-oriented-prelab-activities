#pragma once
#include<sstream>
#include<string>
using namespace std;
class StringBuilder{
public:
  StringBuilder();
	~StringBuilder();
	StringBuilder& Append(const string& data);
	StringBuilder& Append(const int data);
	StringBuilder& Append(const float data);
	StringBuilder& Append(const double data);
	StringBuilder& Append(const char data);
	StringBuilder& AppendNewLineCharacter();
	StringBuilder& Clear();
	bool Contains(const string& str);
	string GetData();
	StringBuilder& Remove(char removeChar);
	StringBuilder& Remove(int startIndex, int charCount);
	StringBuilder& Remove(const string& removeString);
	StringBuilder& RemoveAt(int index);
	StringBuilder& Replace(const string& replacedString, const string& newString);
private:
  stringstream stream;
};
