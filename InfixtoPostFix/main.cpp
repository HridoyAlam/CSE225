/*
cse225 assignment
Name:Jahidul alam
Id:::1621558042
Section::02




*/

#include <iostream>
#include"StackType.cpp"
#include"stdio.h"
#include"string.h"

using namespace std;
bool isOperand(char c){
  if(c>='0' && c<='9'){
    return true;

  }
  else
    return false;
}
bool isOperator(char c){
 if(c == '+' ||c == '-' ||c == '*' ||c == '/')
    return true;
 else
    return false;

}

int precedece(char c){
 if(c == '*' || c == '/'){
    return (2);
 }
 else if(c =='+' || c=='-'){
    return (1);
 }
 else
    return (0);

}
int checkHigherPrecedence(char c1,char c2){
 int operator1=precedece(c1);
 int operator2=precedece(c2);

 if(operator1== operator2){
    return true;
 }
 return operator1>operator2 ? true: false;
}
string InfixToPostfix(string expression){
 StackType<char>s;
 string postfix="";
 for(int i=0;i<expression.length();i++){
    if(isOperator(expression[i])){
        while(!s.isEmpty() && s.Top() != '(' && checkHigherPrecedence(s.Top(),expression[i])){
                postfix+=s.Top();
                s.Pop();
              }
              s.Push(expression[i]);
    }
    else if(isOperand(expression[i])){
        postfix+=expression[i];
    }
    else if(expression[i] == '('){
                s.Push(expression[i]);
            }
    else if(expression[i] == ')'){
                while(!s.isEmpty() && s.Top() != '('){
                        postfix+=s.Top();
                        s.Pop();
                      }
                      s.Pop();
            }
 }
while(!s.isEmpty()){
    postfix +=s.Top();
    s.Pop();
 }
return postfix;
}

int evalutePostfixForm(string postfix){
  int n1,n2,result;
  StackType<int>e;
  for(int i=0;i<postfix.length();i++){

    if(isOperator(postfix[i])){
        n1=e.Top();
        e.Pop();
        n2=e.Top();
        e.Pop();

        if(postfix[i]== '+')
            result=n2+n1;
        else if(postfix[i] =='-')
            result =n2-n1;
        else if(postfix[i]=='*')
            result =n2*n1;
        else
            result =n2/n1;
        e.Push(char(result));
    }
    else if(isOperand(postfix[i])){
        int operand =0;
        if(i<postfix.length() && isOperand(postfix[i])){
            operand=(operand * 10) + (postfix[i]-'0');
        }
        e.Push(operand);
    }
    else{
        e.Push(postfix[i]);
    }
  }
 return e.Top();
}

int main()
{
    string expression;
    char str[1000];
    cin>>str;
    string postfix=InfixToPostfix(str);
    cout<<postfix<<endl;
    int value=evalutePostfixForm(postfix);

    cout<<value<<endl;
    return 0;
}
