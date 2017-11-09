#include <iostream>

using namespace std;

bool isPuncTag(char word[])
{
   if (word[0] != '<')     // Check for opening <
   {
      return false;
   }
   if (word[1] != '#' &&   // Check for valid symbol
       word[1] != '{' &&
       word[1] != '}' &&
       word[1] != '[' &&
       word[1] != ']')
   {
      return false;
   }
   if (word[2] != '>')     // Check for closing >
   {
      return false;
   }
   if (word[3] != 0)       // Check for NULL (only 3 chars long)
   {
      return false;
   }
   return true;
}

     ┌───────────────────────────────────────────────                                                                          ─────────────────────┐
     │                        • MobaXterm 10.2 •                                                                                                    │
     │            (SSH client, X-server and networkin                                                                          g tools)             │
     │                                                                                                                                              │
     │ ➤ SSH session to macbethc@157.201.194.209                                                                                                    │
     │   • SSH compression : ✔                                                                                                                      │
     │   • SSH-browser     : ✔                                                                                                                      │
     │   • X11-forwarding  : ✔  (remote display is fo                                                                          rwarded through SSH) │
     │   • DISPLAY         : ✔  (automatically set on                                                                           remote server)      │
     │                                                                                                                                              │
     │ ➤ For more info, ctrl+click on help or visit o                                                                          ur website           │
     └───────────────────────────────────────────────                                                                          ─────────────────────┘

Last login: Wed Nov  8 08:35:48 2017 from 10.25.164.2                                                                          06
[macbethc@LinuxLab09 ~]$ cd class
[macbethc@LinuxLab09 class]$ cd cs124
[macbethc@LinuxLab09 cs124]$ clear
[macbethc@LinuxLab09 cs124]$ vi punctuation.cpp
[macbethc@LinuxLab09 cs124]$ g++ punctuation.cpp
[macbethc@LinuxLab09 cs124]$ a.out
1
0
[macbethc@LinuxLab09 cs124]$ vi punctuation.cpp
[macbethc@LinuxLab09 cs124]$ g++ punctuation.cpp
[macbethc@LinuxLab09 cs124]$ a.out
<
61
1
0
[macbethc@LinuxLab09 cs124]$ vi punctuation.cpp
[macbethc@LinuxLab09 cs124]$ g++ punctuation.cpp
[macbethc@LinuxLab09 cs124]$ a.out
<
#
1
0
[macbethc@LinuxLab09 cs124]$ vi punctuation.cpp
[macbethc@LinuxLab09 cs124]$ ls
age.cpp           assignment21.cpp  calendar.cpp          inputs_soln.cpp      project03.cpp        tictactoe.cpp
a.out             assignment23.cpp  case.cpp              lastletter.cpp       project04.cpp        traverse.cpp
arrays.cpp        assignment24.cpp  conditional.cpp       ldl.cpp              project07_class.cpp  unit1_practice1.cpp
assignment10.cpp  assignment25.cpp  everything.cpp        mandelbrot           project07.cpp        unit1_practice2.cpp
assignment10.s    assignment26.cpp  example.cpp           memory.cpp           project10.cpp        unit1_practice3.cpp
assignment11.cpp  assignment30.cpp  file.cpp              memoryfunc2.cpp      punctuation.cpp      unit1test.cpp
assignment12.cpp  assignment31.cpp  findreplace.cpp       memoryfunc.cpp       sleep.cpp            unit2_practice1.cpp
assignment13.cpp  assignment32.cpp  findreplace_soln.cpp  numbers.txt          string.cpp           unit2_practice2.cpp
assignment14.cpp  assignment33.cpp  golden.cpp            output.cpp           template.cpp         unit2_practice3.cpp
assignment15.cpp  assignment34.cpp  hello.cpp             project02_class.cpp  test3.cpp            unit2test.cpp
assignment16.cpp  assignment35.cpp  inputs.cpp            project02.cpp        test.cpp             weather.cpp
[macbethc@LinuxLab09 cs124]$ vi traverse.cpp
[macbethc@LinuxLab09 cs124]$ g++ traverse.cpp
[macbethc@LinuxLab09 cs124]$ a.out
Merry Christmas
Merry Christmas
Merry Christmas
[macbethc@LinuxLab09 cs124]$ vi traverse.cpp
[macbethc@LinuxLab09 cs124]$ g++ traverse.cpp
[macbethc@LinuxLab09 cs124]$ a.out
Merry Christmas
Merry Christmas
Merry Christmas
[macbethc@LinuxLab09 cs124]$ vi traverse.cpp
[macbethc@LinuxLab09 cs124]$ g++ traverse.cpp
[macbethc@LinuxLab09 cs124]$ a.out
Merry Christmas
Merry Christmas
Merry Christmas
Merry Christmas[macbethc@LinuxLab09 cs124]$ vi assignment34.cpp
[macbethc@LinuxLab09 cs124]$ vi punctuation.cpp
#include <iostream>

using namespace std;

bool isPuncTag2(char word[])
{
   if (*word != '<')     // Check for opening <
   {
      return false;
   }
   if (*word + 1 != '#' &&   // Check for valid symbol
       word[1] != '{' &&
       word[1] != '}' &&
       word[1] != '[' &&
       word[1] != ']')
   {
      return false;
   }
   if (word[2] != '>')     // Check for closing >
   {
      return false;
   }
   if (word[3] != 0)       // Check for NULL (only 3 chars long)
   {
      return false;
   }
   return true;
}


int main()
{
   char word[32] = "<#>";
   cout << *word << endl;
   cout << *word + 1 << endl;
   cout << isPuncTag(word) << endl;
   return 0;
}
                                                                                                             36,1          Top



int main()
{
   char word[32] = "<#>";
   cout << isPuncTag(word) << endl;
   return 0;
}


