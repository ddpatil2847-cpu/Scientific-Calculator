........Scientific Calculator......

#include<iostream>
#include<cmath>
 using namespace std;
     const double PI = 3.1415;
    
  void solveQuadratic(double a,double b,double c) {
            if (a == 0){
                cout<<"Roots never be zero....";
                return;
            }
            
            
            
            double D = b*b-4*a*c;
             if(D>0){
                double root1 = (-b + sqrt(D)) / (2*a);
                double root2 = (-b + sqrt(D)) / (2*a);
                cout<<"The roots are real but different.."<<endl;
                cout<<"Root 1:- "<<root1;
                cout<<"Root 2:- "<<root2;
             }
            else if(D == 0){
                double root = -b /(2*a);
                cout<<"The roots are real and equal"<<endl;
                cout<<"Root = "<<root;
                
            }   
            else {
                double realPart = -b/(2*a);
                double imagePart = sqrt(-D)/(2*a);
                cout<<"The roots are imaginary "<<endl;
                cout<<"Root 1 = "<<realPart<<" + "<<imagePart<<" i "<<endl;
                cout<<"Root 2 = "<<realPart<<" - "<<imagePart<<" i "<<endl;
            }
             
           
         }
     
    int main() {
    
    
     int function;
         
    cout<<"1. Addition:- "<<endl;
    cout<<"2. Subtract:- "<<endl;
    cout<<"3. Multiply:- "<<endl;    
    cout<<"4. Divide:- "<<endl;
    cout<<"5. Square Root:- "<<endl;    
    cout<<"6. log10(x):- "<<endl;    
    cout<<"7. Cube Root:- "<<endl;    
    cout<<"8. Exponent:- "<<endl;    
    cout<<"9. ln(x):- "<<endl;    
    cout<<"10. sin(x):- "<<endl;    
    cout<<"11. cos(x):- "<<endl; 
    cout<<"12. tan(x):- "<<endl;
    cout<<"13. Power(a^b):- "<<endl;
    cout<<"14. Absoulate Solution:- "<<endl;
    cout<<"15. Quadratic Equation:- "<<endl;
    cout<<"Entre the function(1-14):- ";
    cin>>function;
    
        double a,b,c,result;
    switch(function){
     
     case 1:
      cout<<"Entre two numbers:- ";  
      cin>>a>>b;
       
      result = a+b;
      cout<<"Result = "<<result;
     break;
     
     case 2:     
     
      cout<<"Entre two numbers:- ";  
      cin>>a>>b;
       
      result = a-b;
      cout<<"Result = "<<result;
     break;
     
     case 3:
     
     cout<<"Entre two numbers:- ";  
      cin>>a>>b;
       
      result = a*b;
      cout<<"Result = "<<result;
     break;
     
     case 4:
     cout<<"Entre two numbers:- ";
     cin>>a>>b;
      if(b>0)
       cout<<"Result = "<<a/b;
      else
      cout<<"Please entre 'b' positive....";
     break;
     
      case 5:
      cout<<"Entre the number:- ";
      cin>>a;
        if(a>0){
         result = sqrt(a);
         cout<<"Result = "<<result;
}
        else 
        cout<<"Please entre 'a' positive.......";
     break;
     
      case 6:    
        cout<<"Entre the number:- ";
        cin>>a;
        
        if(a>0){
            result = log10(a);
            cout<<"Result = "<<result;
        }
        else
        cout<<"Please entre positive number......";
        break;
        
        case 7:
         cout<<"Entre the number:- ";
         cin>>a;
         result = cbrt(a);
         cout<<"Result = "<<result;
         break;
         
        case 8:
         cout<<"Entre the number:- ";
         cin>>a;
         result = exp(a);
         cout<<"Result = "<<result;
         break;
         
         case 9:
         cout<<"Entre the number:- ";
         cin>>a;
          result = log(a);
         cout<<"Result = "<<result;
         break;
         
         case 10:
         cout<<"Entre the angle in degree:- ";
         cin>>a;
         result = sin(a*PI/180);
         cout<<"Result = "<<result;
         break;
         
         case 11:
         cout<<"Entre the angle in degree:- ";
         cin>>a;
         result = cos(a*PI/180);
         cout<<"Result = "<<result;
         break;
         
         case 12:
         {
         cout<<"Entre the angle in degree:- ";
         cin>>a;
          int  identify = cos(a*PI/180);
           if (identify <=0) {
            cout<<"Please entre proper degree....";
           }
          
           else{
               result = tan(a*PI/180);
               cout<<"Result = "<<result;
           }
    }
           
         case 13: 
         cout<<"Entre the base and Power:- ";
         cin>>a>>b;
         result = pow(a,b);
         cout<<"Result = "<<result;
         break;
         
         case 14:
         cout<<"Entre any number:- ";
         cin>>a;
         result = abs(a);
         cout<<"Result = "<<result;
         break;
         
         case 15:
         cout<<"Solve quadratic eqution ax^2+bx+c = 0"<<endl;
         cin>>a>>b>>c;
         solveQuadratic (a,b,c);
         break;
}
   
         return 0;
    }