    // in backtrack printing happens after recursive call
    
    #include<iostream>
    using namespace std;

    void backtrack(int i){
        if(i<1) return;

        backtrack(i-1);
        cout<<i<<endl;
    }

       void backtrackreverse(int i,int n){
        if(i>n) return;

        backtrackreverse(i+1,n);
        cout<<i<<endl;
    }

    
    int main(){
        
        int n;
        cin>>n;

       int i=n;
        backtrack(i);

        i=1;
cout<<endl<<"reverse"<<endl;
        backtrackreverse(i,n);
    
        return 0;
    }