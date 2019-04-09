#include<iostream>
using namespace std;
class distance{
int feet;
float inches;
public:
    distance() { feet=0; inches=0;}
    distance(float fltfeet){
    feet=int(fltfeet);
    inches=12*(fltfeet-feet);
    }
distance(int ft,float in) {feet=ft; inches=in; }
void show(){ cout<<feet<<"\'-"<<inches;
distance operator + (distance);
}
friend distance operator + (distance distance );
};
 distance ::operator +( distance d1,distance d2){
int f=d1.feet+d2.feet;
float i=d1.inches+d2.inches;
if(i>=12){ i-=12;f++;}
return distance(f,i);
}
void main(){
distance d1=2.5; distance d2=1.25; distance d3;
cout<<"d1 ="; d1.show();

}
