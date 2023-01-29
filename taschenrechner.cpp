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
   double zahl_1=0,zahl_2=0,zahl_3=0,ergebnis;
   char math;
   bool mathe,fehler,dez;
   std::vector<double> test,test2,test3;
   void Zahl0_pressed();
   void Zahl1_pressed();
   void Zahl2_pressed();
   void Zahl3_pressed();
   void Zahl4_pressed();
   void Zahl5_pressed();
   void Zahl6_pressed();
   void Zahl7_pressed();
   void Zahl8_pressed();
   void Zahl9_pressed();
   void EQ_pressed();
   void minus_pressed();
   void plus_pressed();
   void divide_pressed();
   void multi_pressed();
   void dez_pressed();
};

MainWindow::MainWindow()
{
   setMinimumSize(700, 350);

   ausgabe= new QLineEdit("0",this);
   ausgabe->setText("Viel Spass beim Rechnen");
   ausgabe->setMaxLength(40);
   ausgabe->setReadOnly(true);
   ausgabe->setAlignment(Qt::AlignRight);
   
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
 
   connect(zahl_0_pb, &QPushButton::clicked,this, &MainWindow::Zahl0_pressed);
   connect(zahl_1_pb, &QPushButton::clicked,this, &MainWindow::Zahl1_pressed);
   connect(zahl_2_pb, &QPushButton::clicked,this, &MainWindow::Zahl2_pressed);
   connect(zahl_3_pb, &QPushButton::clicked,this, &MainWindow::Zahl3_pressed);
   connect(zahl_4_pb, &QPushButton::clicked,this, &MainWindow::Zahl4_pressed);
   connect(zahl_5_pb, &QPushButton::clicked,this, &MainWindow::Zahl5_pressed);
   connect(zahl_6_pb, &QPushButton::clicked,this, &MainWindow::Zahl6_pressed);
   connect(zahl_7_pb, &QPushButton::clicked,this, &MainWindow::Zahl7_pressed);
   connect(zahl_8_pb, &QPushButton::clicked,this, &MainWindow::Zahl8_pressed);
   connect(zahl_9_pb, &QPushButton::clicked,this, &MainWindow::Zahl9_pressed);
   connect(math_p_pb, &QPushButton::clicked,this, &MainWindow::plus_pressed);
   connect(math_s_pb, &QPushButton::clicked,this, &MainWindow::minus_pressed);
   connect(math_d_pb, &QPushButton::clicked,this, &MainWindow::divide_pressed);
   connect(math_m_pb, &QPushButton::clicked,this, &MainWindow::multi_pressed);
   connect(math_eq_pb, &QPushButton::clicked,this,&MainWindow::EQ_pressed);
   connect(math_dez_pb, &QPushButton::clicked,this,&MainWindow::dez_pressed);
    
   
  //Close Funktion
   connect(close_pb, &QPushButton::clicked, 
         this, &QWidget::close);
      }
      void MainWindow::Zahl0_pressed (){
            if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.0;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(0);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            std::cout <<"Vector zu double ist:" << zahl_1;
            }
            if(mathe==true){
                 
            zahl_2=0;
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            
            ausgabe->insert("0");
                  
            }
           
           
      }
      void MainWindow::Zahl1_pressed (){
            if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.1;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{      
            test.push_back(1);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.1;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(1);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
           
           
      }
      void MainWindow::Zahl2_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.2;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(2);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.2;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(2);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }
      void MainWindow::Zahl3_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.3;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(3);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.3;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(3);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }
      void MainWindow::Zahl4_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.4;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(4);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.4;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(4);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }
      void MainWindow::Zahl5_pressed(){
          if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.5;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(5);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.5;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(5);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
         } 
                    
      
      void MainWindow::Zahl6_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.6;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(6);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.6;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(6);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }
      void MainWindow::Zahl7_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.7;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(7);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.7;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(7);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }   

      void MainWindow::Zahl8_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.8;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(8);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.8;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(8);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }   
      void MainWindow::Zahl9_pressed(){
           if(mathe==false){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_1=zahl_1+0.9;
                        test.clear();
                        test.push_back(zahl_1);
                        }
                  else{
            test.push_back(9);
            std::cout << "Zahl 1 ist:" << zahl_1 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test.size(); i++)
                  {
                  std::cout<<test[i]<<endl;
                  ausgabe->insert(QString::number(test[i]));
                  }
            zahl_1=ausgabe->text().toDouble();
            }
            if(mathe==true){
                  if(dez==true){
                        ausgabe->clear();
                        zahl_2=zahl_2+0.1;
                        test2.clear();
                        test2.push_back(zahl_2);
                        }
                  else{
            test2.push_back(9);
            std::cout << "Zahl 2 ist:" << zahl_2 <<"\n";
            ausgabe->clear();
                  }
            for(int i = 0; i < test2.size(); i++)
                  {
                  std::cout<<test2[i]<<endl;
                  ausgabe->insert(QString::number(test2[i]));
                  }
            zahl_2=ausgabe->text().toDouble();
            }
      }
      void MainWindow::dez_pressed(){
           
            ausgabe->insert(".");
            dez=true;
            
      
      }
      void MainWindow::plus_pressed()
      {
            math='+';
            mathe=true;
            ausgabe->insert("+");
            dez=false;
           
      }
      void MainWindow::minus_pressed()
      {
            math='-';
            mathe=true;
            ausgabe->insert("-");
            dez=false;
           
      }
      void MainWindow::multi_pressed()
      {
            math='*';
            mathe=true;
            ausgabe->insert("*");
            dez=false;
           
      }
      void MainWindow::divide_pressed()
      {
            math='/';
            mathe=true;
            ausgabe->insert("/");
            dez=false;
           
      }

      void MainWindow::EQ_pressed(){
            std::cout << "Zahl1" << zahl_1 << math << "Zahl2" << zahl_2 << "=" << "\n";
            if(math=='+')
            {ergebnis=zahl_1+zahl_2;}
            else if(math=='-')
            {ergebnis=zahl_1-zahl_2;}
            else if(math=='*')
            {ergebnis=zahl_1*zahl_2;}
            else if(math=='/')
            {ergebnis=zahl_1/zahl_2;}
                  if(zahl_2 ==0)
                  {
                  std::cout <<"Du kannst nicht durch 0 teilen" <<"\n";
                  ausgabe->setText("Du kannst nicht durch 0 teilen");
                  fehler=true;
                  };
            std::cout << ergebnis << "\n";
            if(fehler==false){
                  ausgabe->setText(QString::number(ergebnis));
                  }
            mathe=false;
            test.clear();
            test2.clear();
            fehler=false;
            dez=false;
      }
      

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
 
   MainWindow *window = new MainWindow();
   window->show();
 
   return app.exec();
}