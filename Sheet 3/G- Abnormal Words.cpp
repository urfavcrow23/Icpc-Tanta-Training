#include <iostream>
using namespace std;

int main(){
      char type;
      int key;
      string w;
      cin >> type >> key >> w;

      for(int i = 0; i < w.size(); i++){
            // if(type == 'E'){
            //       w[i] += key;
            // } 
            // else{
            //       w[i] -= key;
            // }
            if (type == 'E'){
                  for(int j = 0; j < key; j++){
                        if(w[i] == 'z'){
                              w[i] = 'a';
                        }else{
                              w[i]++;
                        }
                  }
            }
            else{
                  for(int j = 0; j < key; j++){
                        if(w[i] == 'a'){
                              w[i] = 'z';
                        }else{
                              w[i]--;
                        }
                  }
            }
      }
      cout << w <<'\n';
      return 0;
}


// Solution Two 
#include <iostream>
using namespace std;

int main(){
      char type;
      int key;
      string w;
      cin >> type >> key >> w;
      for (int i = 0; i < w.size(); i++){
            if(type == 'E'){
                  w[i] -= 'a';
                  w[i] = (w[i] + key) % 26;
                  w[i] += 'a';
            }
            else {
                  w[i] -= 'a';
                  w[i] = ((w[i] - key) % 26 + 26) % 26;
                  w[i] += 'a';
            }
      }
      cout << w << endl;
      return 0;

}