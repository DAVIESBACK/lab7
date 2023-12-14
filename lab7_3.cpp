 #include<iostream>
using namespace std;

char before(char x){
    int i = 0;
    while (i < 26){
        if(  x == 'A'+i){
            if(x == 'A'){
                return 'Z';
            }
           return x-1 ; 
        }
        i++;
    } 
    return '0';
}

int main(){
    cout << before('Z');
    return 0;
} 