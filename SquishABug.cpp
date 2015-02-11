#include <iostream>

using namespace std;

int main()
{
	char b;
	cout<<"Should i squish the bug?"<< endl;
	cout<<"Is it freaking you out?[y/n]"<< endl; 
	cin>>b;
	if (b =='y'|| b=='Y')
	{
		cout<<"Does it bite or suck Blood?[y/n]"<< endl;
		cin>>b;
		if (b =='y'|| b=='Y')
		{
			cout<<"Will it make an unfortunate noise or mess if squished?[y/n]"<<endl;
			cin>>b;
			if (b =='y'|| b=='Y')
			{
				cout<<"Put it in a cup or flush it down the toilet"<<endl;
			}
			else
			{
				cout<<"Will you feel bad if you squish it?[y/n]"<<endl;
				cin>>b;
				if (b=='y' || b=='Y')
				{
					cout<<"Put it in a cup or flush it down the toilet"<<endl;
				}
				else
				{
					cout<<"Squish"<<endl;
				}
			}
		}
		else 
		{
			int c;
			cout<<"How many legs?"<<endl;
			cin>>c;
			if (c==0)
			{
				cout<<"Leave the poor thing alone"<<endl;
			}
			else if(c<=7 && c>=1)
			{
				cout<<"Does it hiss? [y/n]"<<endl;
				cin>>b;
				if (b=='y' || b=='Y')
				{
					cout<<"Squish"<<endl;
				}
				else
				{
					cout<<"Is it a ladybug or a praying mantis?[y/n]"<<endl;
					cin>>b;
					if (b=='y' || b=='Y')
					{
						cout<<"Put it in a cup and take it outside"<<endl;
					}
					else
					{
						cout<<"Do you believe in reincarnation?[y/n]"<<endl;
						cin>>b;
					if (b=='y' || b=='Y')
					{
						cout<<"Put it in a cup and take it outside"<<endl;
					}
					else
					{
						cout<<"Squish"<<endl;
					}
					}
				}
			}
			else if(c>=8)
			{
				cout<<"Is it a caterpillar?[y/n]"<<endl;
				cin>>b;
			if (b=='y' || b=='Y')
			{
				cout<<"Make a nice home for it in a shoebox"<<endl; 
			}
			else
			{
				cout<<"Has it spelled out words in a web?[y/n]"<<endl;
				cin>>b;
				if (b=='y' || b=='Y')
				{
					cout<<"Some bug"<<endl;
				}
				else
				{
					cout<<"Squish"<<endl;
				}
			}
			}
			}
		}
		else
		{
			cout<<"Why not?[I'm an entomologist(enter 1)/I'm mine(enter 2)]"<<endl;
			cin>>b;
				if (b=='1')
				{
					cout<<"Cool. Dont look over there"<<endl;

				
				}
				else
					{
						cout<<"Put it in the cup and freak someone out with it"<<endl;
					}
		}
	return 0;		
}