
#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{

}

void Source::emit_sig()
{
    emit my_signal("signal emited");
}

