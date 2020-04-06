#include <QCoreApplication>
#include "const.h"

void print(/* arguments */) {
  /* code */
  qDebug() << "Function work";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
