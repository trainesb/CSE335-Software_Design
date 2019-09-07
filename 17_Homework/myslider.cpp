#include "myslider.h"

void myslider::mySliderChanged(){
    emit iChanged(this);
}
