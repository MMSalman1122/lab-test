#include <iostream>
#include <cmath>
using namespace std;
class AudioClip
{
private:

    double channel,resolution,sampleRate;


public:
    AudioClip()
    {
        channel=1;
        resolution=8;
        sampleRate=22050;

    }

    void setter(double ch,double res,double sr)
    {
        channel=ch;
        resolution=res;
        sampleRate=sr;

    }
    double getchannel()
    {
        return channel;
    }
    double getresolution()
    {
        return resolution;
    }
    double getsampleRate()
    {
        return sampleRate;
    }
    bool StudioQuality()
    {
        if (resolution ==24 && channel ==2 && sampleRate ==88200)
            return true;
        else
            return false;

    }
    double datasize(double duration)
    {
        double d=duration,bytes=0;
        bytes=d*channel*(resolution/8)*sampleRate;
        return bytes;

    }
};

int main()
{
    AudioClip ob;
    double ch=0.0,res=0.0,sr=0.0,duration=0.0;
    cout<<" \nEnter the channel: \n";
    cin>>ch;
    cout<<" \nEnter the resolution: \n";
    cin>>res;
    cout<<" \nEnter the sample rate: \n";
    cin>>sr;
    ob.setter(ch,res,sr);
    cout<<" \n channel is "<<ob.getchannel()<<"\n resolution is "<<ob.getresolution()<<"\n sample rate is "
    <<ob.getsampleRate();

    if (ob.StudioQuality()==true)
    {cout<<" \n Quality is maximum. \n";}
    else
        cout<<" \n Quality is not maximum. \n ";

    cout<<"Enter duration: \n";
    cin>>duration;
    cout<<"data size is:"<<ob.datasize(duration);








    return 0;
}
