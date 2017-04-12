#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cctype>

using namespace std;

char temp[100];
bool isvowel(char c)
{
	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		return 1;
    else
        return 0;
}

int main()
{
	while(cin.getline(temp,100))
        {
		int s = 0,t = 0;
		while(temp[s])
			if (!isalpha(temp[s]))
			{
				printf("%c",temp[s++]);
				t=s;
			}
			else if(isalpha(temp[t]))
				t++;
			else
                {
				if(!isvowel(temp[s]))
                    {
					for(int i=s+1;i<t;++i)
						printf("%c",temp[i]);
					printf("%c",temp[s]);
				}
				else
					for(int i=s;i<t;++i)
						printf("%c",temp[i]);
				printf("ay");
				s=t;
			}
		printf("\n");
	}
	return 0;
}
