#include <sizeslider.h>

void SizeSlider::CurrentSizeSliderChanged(int num){
    emit iChanged(this);
}
