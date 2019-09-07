#include "fontsizecombo.h"

void FontSizeCombo::CurrentSizeChanged(const QString&){
    emit iChanged(this);
}
