#ifndef _COKGEN_H
#define _COKGEN_H
#include <iostream>
using namespace std;


enum Tip {kare, dikdortgen};
class cokgen
{
private:
    int width;
    int height;
public:
    cokgen(){
        width = 1;
        height = 1;
    }
    void setHeight(int h){
        height = h;
    }
    void setWidth(int w){
        width = w;
    }
    double alan(){
        return width * height;
    }
    friend class Dortgen;
};
class Ucgen: public cokgen{
    private:
    int width;
    int height;
    public:
        Ucgen(int h,int w){
            height=h;
            width=w;
        };
        int getYukseklik(){
        return width;
    }
    int getGenislik(){
        return height;
    }
    double alan(){
        return (double)width * height/2;
    }
};
class Dortgen: public cokgen {
private:
    Tip type;
public:
    Dortgen(int h, int w){
        height = h;
        width = w;
    };
    void setTip(){
        if(width == height){
            type = kare;
        }
        else{
            type = dikdortgen;
        }
    }
    Tip getTip(){
        return type;
    }

    int getYukseklik(){
        return height;
    }
    int getGenislik(){
        return width;
    }
};
ostream &operator << (ostream& os, Dortgen u)
    {
            os <<"yukseklik: " << u.getYukseklik() << ", genislik: " << u.getGenislik();
            return os;
    }
#endif
