#include <QCoreApplication>
#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString shuru0 = "请输入第";
    qDebug() <<" sdf " << shuru0;
    int num [10] = {0};
    for(int i=0 ;i<10 ;i++)
    {
        qDebug() << "请输入第 %d 个数据" <<i;
        cin >> num[i] ;
    }
    qDebug() << "输入的数值为" << endl;
    for(int i =0 ;i<10; i++)
        qDebug() << *(num+ i);
    system("pause");

    //cout << time(0) << endl;
    return  0;
    return  a.exec();
}
