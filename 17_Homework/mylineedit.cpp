#include "mylineedit.h"

void mylineedit::myTextChanged(){
    emit iChanged(this);
}
