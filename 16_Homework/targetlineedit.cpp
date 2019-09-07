#include "targetlineedit.h"

void TargetLineEdit::myEditingFinished(){
    emit iChanged(this);
}
