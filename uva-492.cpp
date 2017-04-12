#include<iostream>
#include<string>
#include<cctype>  //isalpha()判断
using namespace std;

int isVowel(char alpa);

int main()
{
	string st="",buf="";  
	int i,j;  
	while(getline(cin,st))//读取cin输入流，到默认终止符（\n）为止
	{
		for(i=0;i<st.length();)
		{
			if(isalpha(st[i]))
			{  
				for(j=0;isalpha(st[i]);)
				{  
					buf[j++]=st[i++];  
				}  
				buf[j]='\0';//记录一个单词  
				if(isVowel(buf[0]))
				{  
					cout<<&buf[0]<<"ay";  
				}  
				else if(!isVowel(buf[0]))
				{  
					cout<<&buf[1]<<buf[0]<<"ay";  
				}                      //输出一个单词  
			}  
			else{  
				cout<<st[i++];  
			}  
		}  
		cout<<endl;  
	}  
	return 0;  
}  
int isVowel(char alpa)
{  
	switch(alpa){  
	case 'a':case 'e':case 'i':case 'o':case 'u':  
	case 'A':case 'E':case 'I':case 'O':case 'U':return 1;  
	default: return 0;  
	};  
}  