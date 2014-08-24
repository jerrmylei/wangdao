#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <string.h>
using namespace std;
class String
{   friend bool operator <(const String &s1,const String &s2);  
    friend bool operator >(const String &s1,const String &s2);  
    friend bool operator <=(const String &s1,const String &s2);  
    friend bool operator !=(const String &s1,const String &s2);  
    friend bool operator ==(const String &s1,const String &s2);  
    friend ostream &operator<<(ostream &,const String &);
    friend istream &operator>>(istream &, String &);
    private:
        char *str_;
    public:
        String()
        {
            str_ = new char[1];
            str_[0]=0;

        }
        String(const char*  s)
        {
            str_ = new char[strlen(s)+1];
            strcpy(str_,s);
        }
        int size()
        {

            return strlen(str_); 
        }
        String( String &s)
        {
            str_ = new char[s.size()+1];
            strcpy(str_,s.str_);


        }

        void print()
        {

            cout<<str_<<endl;
        }
        String &operator =( String &s)
        {
            if(this != &s)
            {
                delete[] str_;
                str_ = new char[s.size()+1];
                strcpy(str_,s.str_);
            }
            return *this;
        }
        String &operator =( char* s)
        {
           if(str_!=s){
               delete[] str_;
           str_ = new char[strlen(s)+1];
           strcpy(str_,s);
           }
           return *this;
            
        
       }
        /*bool operator <(const String &s1,const String &s2)
        {
         
            return strcmp(s1.str_,s2.str_)<0;
        
        }
        bool operator >(const String &s1,const String &s2)
        {
            return s2<s1;
           
        }
        bool operator >=(const String &s1,const String &s2)
        {
         
          return !(s1<s2); 
        }
        bool operator ==(const String &s1,const String &s2)
        {
          return( strcmp(s1.str_,s2.str)==0);

        }
        bool operator !=(const String &s1,const String &s2)
        {
           return !(s1=s1);
        }*/
        ~String()
        {
            delete[] str_;

        }
};
       inline bool operator <(const String &s1,const String &s2)
        {
         
            return strcmp(s1.str_,s2.str_)<0;
        
        }
        inline bool operator >(const String &s1,const String &s2)
        {
            return s2<s1;
           
        }
        inline bool operator >=(const String &s1,const String &s2)
        {
         
          return !(s1<s2); 
        }
       inline bool operator ==(const String &s1,const String &s2)
        {
          return( strcmp(s1.str_,s2.str_)==0);

        }
       inline bool operator !=(const String &s1,const String &s2)
        {
           return !(s1==s1);
        }
        
inline ostream &operator<<(ostream &os,const String &s)
{

    return  os<<s.str_;



}
inline istream &operator>>(istream &in,String &s)
{
   char buf[1024];
   in>>buf;
   if(in)
   {
      s= buf;
      
   }

return in;

}
       
int main(int argc, const char *argv[])
{
    String S1("leiyu");
    String S2;
    cin>>S2;
    int ret;
    ret = (S1==S2);
    cout<<S1<<"1(=),0(!=)"<<ret<<S2<<endl;
    return 0;
    
}






