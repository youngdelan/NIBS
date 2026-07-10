#include <iostream>
using namespace std;
float Atriangle,Arectangle,Asquare,Acircle;
float trianglearea(float base,float height)
{
	float a=(1*base*height)/2;
	return a;
}
float rectanglearea(float length,float width)
{
	return length*width;
}	
float squarearea(float side)
{
	return side*side;
}
float circlearea(float pie,float radius)
{
	return 3.142*radius*radius;
}
int main(){
	int choice;
	float base,height,length,width,side,radius,area;
	cout<<"=========AREA OF SHAPES========="<<endl;
	cout<<"1.Triangle"<<endl;
	cout<<"2.Rectangle"<<endl;
	cout<<"3.square"<<endl;
	cout<<"4.circle"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
				cout<<"enter base:";
            	cin>> base;
	            cout<<"enter height:";
	            cin>>height;
	            
	            area= 0.5*base*height; 
	            cout<<"area of triangle="<<area<<endl;
		    	break;
		case 2:
		    cout<<"enter length:";
            	cin>> length;
	            cout<<"enter width:";
	            cin>>width;
	            
	           area=length*width;
	            cout<<"area of rectangle="<<area<<endl;
		    	break;
		case 3:
		        cout<<"enter side:";
            	cin>> side;
	            cout<<"enter side:";
	            cin>>side;
	            
	            area=side*side;
	            cout<<"area of square="<<area<<endl;
		    	break;
			
			
		case 4:
		        cout<<"enter radius:";
            	cin>> radius;
	            
	            area=3.142*radius*radius;
	            cout<<"area of triangle="<<area<<endl;
		    	break;
			
		default:
		 cout<<"invalid choice!"<<endl;			 	
	}

	return 0;
}



