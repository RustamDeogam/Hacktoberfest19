#include<iostream>
#include<windows.h>
using namespace std;
int main()
{

	int a,b,c,d=0,n,m,x,y,z;

	cout<<"Enter the date from where to start :-)";
	gotoxy(2,2); cin>>a;
	gotoxy(4,2); cout<<" / "; cin>>b;
	gotoxy(9,2); cout<<" / "; cin>>c;

	if(c%4==0)
	{

		d=1;
	}

	else

		d=0;

	cout<<"\n Enter no. of days to know the date :- ";    cin>>n;

	m=a+n;
	up:

	if(b>12)
	{
		b=b-12;
		c++;
	}

	switch(b)
	    {

		case 1:   z=31; if(m<=z){ goto down; }break;
		case 2:	  if(d==0){ z=28; }
    		  if(d==1){ z=29; }
    		  if(m<=z){ goto down; }break;
		case 3:   z=31; if(m<=z){ goto down; }break;
		case 4:   z=30; if(m<=z){ goto down; }break;
		case 5:   z=31; if(m<=z){ goto down; }break;
		case 6:   z=30; if(m<=z){ goto down; }break;
		case 7:   z=31; if(m<=z){ goto down; }break;
		case 8:   z=31; if(m<=z){ goto down; }break;
		case 9:   z=30; if(m<=z){ goto down; }break;
		case 10:  z=31; if(m<=z){ goto down; }break;
		case 11:  z=30; if(m<=z){ goto down; }break;
		case 12:  z=31; if(m<=z){ goto down; }break;

	    }

	    if(m>z)
	    {
		m=m-z;
		b++;
	    }

	    goto up;
       down:

	    	    cout<<"\n DATE "<<m<<" / "<<b<<" / "<<c;

	    return 0;
}
