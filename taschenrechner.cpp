#include <QtCore>
#include <QtGui>
#include <cstdio>
#include <iostream>
 
class MainWindow : public QWidget
{
 public:
   MainWindow();
 
 private:
   QLineEdit *ausgabe;
   double zahl_1=0,zahl_2=0,ergebnis;
   char math;
   bool mathe;
   void Zahl1_pressed();
   void Zahl2_pressed();
   void EQ_pressed();
   void minus_pressed();
   void plus_pressed();
};

MainWindow::MainWindow()
{
   setMinimumSize(700, 350);

   QLineEdit *ausgabe= new QLineEdit();
   ausgabe->setText("Viel Spass beim Rechnen");
   ausgabe->setMaxLength(40);
   
   QPushButton *zahl_0_pb = new QPushButton();
   zahl_0_pb->setText("0");
   
   QPushButton *zahl_1_pb = new QPushButton();
   zahl_1_pb->setText("1");
   
   QPushButton *zahl_2_pb = new QPushButton();
   zahl_2_pb->setText("2");
   
   QPushButton *zahl_3_pb = new QPushButton();
   zahl_3_pb->setText("3");

   QPushButton *zahl_4_pb = new QPushButton();
   zahl_4_pb->setText("4");
   
   QPushButton *zahl_5_pb = new QPushButton();
   zahl_5_pb->setText("5");
   
   QPushButton *zahl_6_pb = new QPushButton();
   zahl_6_pb->setText("6");

   QPushButton *zahl_7_pb = new QPushButton();
   zahl_7_pb->setText("7");

   QPushButton *zahl_8_pb = new QPushButton();
   zahl_8_pb->setText("8");
   QPushButton *zahl_9_pb = new QPushButton();
   zahl_9_pb->setText("9");
   QPushButton *math_p_pb = new QPushButton();
   math_p_pb->setText("+");
   QPushButton *math_s_pb = new QPushButton();
   math_s_pb->setText("-");
   QPushButton *math_d_pb = new QPushButton();
   math_d_pb->setText("/");
   QPushButton *math_m_pb = new QPushButton();
   math_m_pb->setText("*");
   QPushButton *math_eq_pb = new QPushButton();
   math_eq_pb->setText("=");
   QPushButton *math_dez_pb = new QPushButton();
   math_dez_pb->setText(".");
   QPushButton *close_pb = new QPushButton();
   close_pb->setText("Close");
 

 
   QGridLayout *layout1 = new QGridLayout();
   layout1->addWidget(ausgabe,0,0,1,4);  
   layout1->addWidget(zahl_7_pb,1,0);
   layout1->addWidget(zahl_8_pb,1,1);
   layout1->addWidget(zahl_9_pb,1,2);
   layout1->addWidget(math_p_pb,1,3);
   layout1->addWidget(zahl_4_pb,2,0);
   layout1->addWidget(zahl_5_pb,2,1);
   layout1->addWidget(zahl_6_pb,2,2);
   layout1->addWidget(math_s_pb,2,3);
   layout1->addWidget(zahl_1_pb,3,0);
   layout1->addWidget(zahl_2_pb,3,1);
   layout1->addWidget(zahl_3_pb,3,2);
   layout1->addWidget(math_m_pb,3,3);
   layout1->addWidget(zahl_0_pb,4,0);
   layout1->addWidget(math_d_pb,4,1);
   layout1->addWidget(math_eq_pb,4,2);
   layout1->addWidget(math_dez_pb,4,3);
   layout1->addWidget(close_pb,5,0);
 
   QVBoxLayout *layoutMain = new QVBoxLayout(this);
   
   layoutMain->addLayout(layout1);
 
   connect(zahl_0_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=0;
            
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });
   connect(zahl_1_pb, &QPushButton::clicked,this, &MainWindow::Zahl1_pressed);
   connect(zahl_2_pb, &QPushButton::clicked,this, &MainWindow::Zahl2_pressed);
   connect(zahl_3_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=3;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });
   connect(zahl_4_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=4;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });
   connect(zahl_5_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=5;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });
   connect(zahl_6_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=6;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });
   connect(zahl_7_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=7;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });

   connect(zahl_8_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=8;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });

   connect(zahl_9_pb, &QPushButton::clicked, 
         this, [&](){
            zahl_1=9;
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
         });
   connect(math_p_pb, &QPushButton::clicked,this, &MainWindow::plus_pressed);
   connect(math_s_pb, &QPushButton::clicked,this, &MainWindow::minus_pressed);
   connect(math_eq_pb, &QPushButton::clicked,this,&MainWindow::EQ_pressed);
         
         
   
  
   connect(close_pb, &QPushButton::clicked, 
         this, &QWidget::close);
}
      void MainWindow::Zahl1_pressed (){
            zahl_1=1;
            
            if(mathe==true){
            zahl_2=1;
            
            }
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
           
         }
      void MainWindow::Zahl2_pressed(){
            zahl_1=2;
            if(mathe==true){
            zahl_2=2;
            
            }
           std::cout << "Zahl ist:" << zahl_1 <<"\n";
           
         }
      void MainWindow::EQ_pressed(){
            std::cout << "Zahl1" << zahl_1 << math << "Zahl2" << zahl_2 << "=" << "\n";
            if(math=='+')
            {ergebnis=zahl_1+zahl_2;}
            else if(math=='-')
            {ergebnis=zahl_1-zahl_2;}
            std::cout << ergebnis << "\n";
            mathe=false;
            
      }
      void MainWindow::plus_pressed()
      {
            math='+';
            mathe=true;
           
      }
      void MainWindow::minus_pressed()
      {
            math='-';
            mathe=true;
           
      }

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
 
   MainWindow *window = new MainWindow();
   window->show();
 
   return app.exec();
}