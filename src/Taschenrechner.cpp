#include <cstdio>
#include <iostream>

#include <QtCore>
#include <QtGui>
 
class MainWindow : public QWidget
{
 public:
   MainWindow();
};

MainWindow::MainWindow()
{
   setMinimumSize(700, 350);
 
   QPushButton *pb_1 = new QPushButton();
   pb_1->setText("Close");
 
   QHBoxLayout *layout1 = new QHBoxLayout();
   layout1->addStretch();
   layout1->addWidget(pb_1);
   layout1->addStretch();
 
   QVBoxLayout *layoutMain = new QVBoxLayout(this);
   layoutMain->addSpacing(75);
   layoutMain->addLayout(layout1);
 
  connect(pb_1, &QPushButton::clicked, 
         this, &QWidget::close);
 
}



int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
 
   MainWindow *window = new MainWindow();
   window->show();
 
   return app.exec();
}
