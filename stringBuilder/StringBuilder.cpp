#include"StringBuilder.h"
using namespace std;

StringBuilder::StringBuilder(){

}
StringBuilder::~StringBuilder(){

}
StringBuilder & StringBuilder::Append(const string& data){
  stream<<data;
  return *this;
}
StringBuilder & StringBuilder::Append(const int data){
  stream<<data;
  return *this;
}
StringBuilder & StringBuilder::Append(const float data){
  stream<<data;
  return *this;
}
StringBuilder & StringBuilder::Append(const double data){
  stream<<data;
  return *this;
}
StringBuilder & StringBuilder::Append(const char data){
  stream<<data;
  return *this;
}
StringBuilder & StringBuilder::AppendNewLineCharacter(){
  stream<<endl;
  return *this;
}
StringBuilder & StringBuilder::Clear(){
  stream.str("");
  return *this;
}
bool StringBuilder::Contains(const string& str){
  size_t found=stream.str().find(str);
  if(found!=string::npos)
    return true;
  return false;
}
string StringBuilder::GetData(){
  return stream.str();
}
StringBuilder & StringBuilder::Remove(char removeChar){
  string temp=stream.str();
  stream.str("");
  for(int i=0;temp[i]!='\0';i++)
    if(temp[i]!=removeChar)
      stream<<temp[i];
  return *this;
}
StringBuilder & StringBuilder::Remove(int startIndex,int charCount){
  string temp=stream.str();
  temp.erase(startIndex,charCount);
  stream.str(temp);
  return *this;
}
StringBuilder & StringBuilder::Remove(const string& removeString){
  string temp=stream.str();
  while(1){
    size_t found=temp.find(removeString);
    if(found!=string::npos)
      temp.erase(found,removeString.length());
    else
      break;
  }
  stream.str(temp);
  return *this;
}
StringBuilder & StringBuilder::RemoveAt(int index){
  string temp=stream.str();
  temp.erase(index,1);
  stream.str(temp);
  return *this;
}
StringBuilder & StringBuilder::Replace(const string&replacedString,const string& newString){
  string temp=stream.str();
  while(1){
  size_t found=temp.find(replacedString);
  if(found!=string::npos)
    temp.replace(found,replacedString.length(),newString);
  else
    break;
  }
  stream.str(temp);
  return *this;
}
