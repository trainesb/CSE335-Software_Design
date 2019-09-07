#include "mycombobox.h"

void mycombobox::myComboBoxChanged(){
    emit iChanged(this);
}
