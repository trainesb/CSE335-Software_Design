#include "fontfamily.h"

void FontFamily::FontFamilyChanged(){
    emit iChanged(this);
}
