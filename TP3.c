#include <stdio.h>
#include <math.h>

struct complex_s {
	double a ;
	double b ; 
} ;

typedef struct complex_s complex_t ;

double complex_real ( complex_t x )  {
	return x.a ;
}

double complexe_im( complex_t x ) {
	return x.b ; 
}

complex_t complex_add( complex_t x, complex_t y ) {
	complex_t r ;
	r.a = x.a + y.a ;
	r.b = x.b + y.b ; 
	return r ; 
}

complex_t complex_sub( complex_t x, complex_t y ) {
	complex_t r ;
	r.a = x.a - y.a ;
	r.b = x.b - y.b ; 
	return r ; 
}

complex_t complex_mul( complex_t x, complex_t y ) {
	complex_t r ;
	r.a = x.a * y.a - x.b * y.b ;
	r.b = x.a * y.b + x.b * y.a ; 
	return r ;
}

double complex_abs( complex_t x ) {
	return sqrt( pow(x.a, 2.0) + pow(x.b, 2.0 ) ) ; 
}

complex_t complex_conj( complex_t x ) {
	complex_t r ;
	r.a = x.a ;
	r.b = - x.b ;
	return r ;
}

void complexe_affiche (complex_t x) {
	printf("%lf + j * %lf \n", x.a, x.b ) ;
}

int main() {
	
	complex_t x, y, r ;
	x.a = 2 ;
	x.b = 3 ;
	y.a = 1 ;
	y.b = -5 ;
	
	printf("x vaut : " ) ;
	complexe_affiche( x ) ;
	printf("y vaut : " ) ;
	complexe_affiche( y ) ;
	printf("x+y vaut : " ) ;
	complexe_affiche( complex_add(x,y) ) ;
	printf("x-y vaut : " ) ;
	complexe_affiche( complex_sub(x,y) ) ;
	printf("x*y vaut : " ) ;
	complexe_affiche( complex_mul(x,y) ) ;
	printf("|x| vaut : %lf \n", complex_abs(x) ) ;
	printf(" Le conjugue de x vaut : " ) ;
	complexe_affiche( complex_conj(x) ) ;
	return 0 ;
}
