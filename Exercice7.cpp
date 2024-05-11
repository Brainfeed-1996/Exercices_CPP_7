#include <iostream>
using namespace std ;
main()
{ int n, p, q ;
n = 5 ; p = 2 ; /* cas 1 */
q = n++ >p || p++ != 3 ;
cout << "A : n = " << n << " p = " << p << " q = " << q << "\n" ;
n = 5 ; p = 2 ; /* cas 2 */
q = n++<p || p++ != 3 ;
cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ;
n = 5 ; p = 2 ; /* cas 3 */
q = ++n == 3 && ++p == 3 ;
cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ;
n = 5 ; p = 2 ; /* cas 4 */
q = ++n == 6 && ++p == 3 ;
cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ;
}

/*
A : n = 6 p = 2 q = 1
B : n = 6 p = 3 q = 1
C : n = 6 p = 2 q = 0
D : n = 6 p = 3 q = 1
*/
