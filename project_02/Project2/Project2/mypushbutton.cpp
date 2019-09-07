#include "mypushbutton.h"

void MyPushButton::iClicked() {
    emit iChanged(this);
}
