#include <iostream>
#include <ctime>

using namespace std;

int s2mrndm( )
{
   time_t now = time(0);


   tm *ltm = localtime(&now); 
   int s=1 + ltm->tm_sec;
   int y=1900 + ltm->tm_year;
   int h=1 + ltm->tm_hour;
   int m=1 + ltm->tm_min;
   int r;
   
   if((s%2==0)&&(s%3==0))
   {
      r=0.345678*s+8.1+h-m+10*4*(0.9)+2.98*m;
   }
   else if((s<50)&&(s%2==0))
   {
      r=m+y/19+20/7+12.1*0.253652+s*y+14.6-200+s*98+m*10+h*9;
   }
   else if((s%2==1)&&(s%3==0))
   {
	   r=1.232*s+0.34567/m+0.5678*10*h+m-y;
   }
   else if (s<20)
   {
      r=m*s*12+20+1.45678*s*m/s*(h*m)+19*s+h+10+(y/2.123); 
   }
   else if ((s%20)&&(m<30))
   {
	   r=s+0.36*h+(29.3)+y/s+m*m*m*(0.98122);
   }
   else if (m%2==0)
   {
	   r=23+s+0.5678+9*h+y*y*y*y*(0.001227)+2*m+h*h;
   }
   else if(s%3==0)
   {
	   r=m*s*y*h*h*h*h*(0.00001233)+s*s+y+h;
   }
   else if(s%2==1)
   {
	   r=2+2+2+2+h*y*(0.0098)*8*m*s/s/h;
   }
   else if(s%4==0)
   {
	   r=(s-23)*h*(m-1)*m*(y*60-299)+10;
   }
   else{
	   r=(s-1)*(h-s)*(h+y)*(0.3456)+s*h+22+79.43*(h-m-4567);
   }
   return r;
}
int main()
{
   int x,random;
   char ch;
   random=s2mrndm();
   cout<<random;
   return 0;
   cin>>ch;
}

