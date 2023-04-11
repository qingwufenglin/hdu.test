#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	char ch;
	cin>>n;
	getchar();
	while(n--)
	{
		stack<char>s;
		while(1)
		{
			ch = getchar();
			if(ch==' '||ch=='\n'){
				while(!s.empty()){
					printf("%c",s.top());
					s.pop();
				}
				if(ch=='\n')
				break;
				printf(" ");
			}
			else
			s.push(ch);
		}
		printf("\n");
	}
	return 0;
}
