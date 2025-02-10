// #include<bits/stdc++.h>
// using namespace std;
// void oneclockwiseRot(string & clockwise){
//      char l=clockwise[clockwise.size()-1];
//      int  idx=clockwise.size()-2;
//      while(idx>=0)
//      {  
//        clockwise[idx+1]=clockwise[idx];
//        idx--;
//      }
//      clockwise[0]=l;
// }
// void oneanticlockRot(string & anticlockwise){
//      char f=anticlockwise[0];
//      int idx=1;
//      while(idx<anticlockwise.size())
//      {  
//        anticlockwise[idx]=anticlockwise[idx+1];
//        idx++;
//      }
//      anticlockwise[anticlockwise.size()-1]=f;
// }
// bool checkrotatedby_2(string s1, string s2)
// {
//      string clockwise=s1, anticlockwise=s2;
//      oneclockwiseRot(clockwise);
//      oneclockwiseRot(clockwise);
//      if(clockwise==s2){
//           return true;
//      } 
//      oneanticlockRot(anticlockwise);
//      oneanticlockRot(anticlockwise);
//      if(anticlockwise==s2)
//      {
//           return true;
//      }
//      return false;
    
 
// }
// int main()
// {
//      string s1, s2;
//      cout<<"enter string s1, and s2 to check the string is rotated or not: "<<endl;
//      cin>>s1>>s2;
//      if(checkrotatedby_2(s1, s2)) cout<<s1<<" is rotated by 2 places to form "<<s2<<endl;
//      else cout<<s1<<" is not rotated by 2 places to form "<<s2<<endl;
//      return 0;

// }

#include<bits/stdc++.h>
using namespace std;

// Rotate the string one step clockwise
void oneclockwiseRot(string &s) {
    char last = s[s.size() - 1]; // Store the last character
    for (int i = s.size() - 1; i > 0; i--) {
        s[i] = s[i - 1]; // Shift characters to the right
    }
    s[0] = last; // Place the last character at the front
}

// Rotate the string one step anti-clockwise
void oneanticlockRot(string &s) {
    char first = s[0]; // Store the first character
    for (int i = 0; i < s.size() - 1; i++) {
        s[i] = s[i + 1]; // Shift characters to the left
    }
    s[s.size() - 1] = first; // Place the first character at the end
}

// Check if one string is rotated by 2 places to form another string
bool checkrotatedby_2(string s1, string s2) {
    if (s1.size() != s2.size()) return false; // Check if lengths are equal

    string clockwise = s1, anticlockwise = s1;

   
    oneclockwiseRot(clockwise);
    oneclockwiseRot(clockwise);

    
    if (clockwise == s2) {
        return true;
    }

  
    oneanticlockRot(anticlockwise);
    oneanticlockRot(anticlockwise);

    if (anticlockwise == s2) {
        return true;
    }

    return false;
}

int main() {
    string s1, s2;
    cout << "Enter two strings to check if one is rotated by 2 places: " << endl;
    cin >> s1 >> s2;

    if (checkrotatedby_2(s1, s2)) {
        cout << s1 << " is rotated by 2 places to form " << s2 << endl;
    } else {
        cout << s1 << " is not rotated by 2 places to form " << s2 << endl;
    }

    return 0;
}
