#include <iostream>

int main()
{
    int input=0;
    int sum=0;
    int N=0;
    
    std::cin>>N;
    
    for(int j=1;j<=N;++j)
    {
        sum=0;
       for(int i=0;i<10;++i)
       {
           std::cin>>input;
           sum+= input%2==1 ? input : 0 ;
       } 
        std::cout<<"#"<<j<<" "<<sum<<"\n";
    }
    return 0;
}
