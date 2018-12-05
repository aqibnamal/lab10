#include<iostream>
using namespace std;
class audioclip{
private:
int channels;
int resolution;
int samplerate;
public:
audioclip(){
channels=1;
resolution= 8;
samplerate=22050;} 
void set_channel(int c){
if(c==1||c==2)
{channels=c;}
else 
{cout<<"you can enter only 1 or 2"<<endl;}
}
void set_resolution(int r)
{
if(r==8||r==16||r==24)
{resolution=r;}
else 
{cout<<"you can only enter 8 or 16 or 25"<<endl;}
}
void set_samplerate(int s){
if(s==22050||s==44100||s==88200)
{samplerate=s;}
else
{cout<<"you can only enter 22050 or 44100 or 88200"<<endl;}

}
int get_channel(){
cout<<"channels is = "<<channels<<endl;
}
int get_resolution(){
cout<<"resolution is = "<<resolution<<endl;
}
int get_samplerate(){
cout<<"sample  is = "<<samplerate<<endl;
} 
bool studioquality(){ 
if(channels==2&resolution==25&samplerate==88200)
{return true;}
else
{return false;}
}
void set_datasize(int d){ 
datasize=d; 

}

};
int main(){
int ch,tm,rs,ds;
audioclip ac;
cout<<"value for channel "<<endl;
cin>>ch;
ac.set_channel(ch);
ac.get_channel();
cout<<"value for resolution "<<endl;
cin>>rs;
ac.set_resolution(rs);
ac.get_resolution();
cout<<"value for samplerate "<<endl;
cin>>tm;
ac.set_samplerate(tm);
ac.get_samplerate(); 
cout<<"dta size "<<endl;
cin>>ds;
ac.set_datasize();
int b=ds*ch*(rs/8)*tm;


return 0;}
