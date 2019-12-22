#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main() {

    bind_textdomain_codeset ("calculate", "UTF-8");
    setlocale(LC_ALL, "");
    bindtextdomain("calculate", "locale" );
    textdomain("calculate");

    int turismos, todoterrenos;    
    int capTurismos, capTodot;
    int necesidadesCom;

    printf (_("Introduce el numero de turismos: "));
    scanf ("%d", &turismos);
    printf (_("Introduce el numero de todoterrenos: "));
    scanf ("%d", &todoterrenos);
    printf (_("Introduce la capacidad de los turismos (litros): "));
    scanf ("%d", &capTurismos);
    printf (_("Introduce la capacidad de los todoterrenos (litros): "));
    scanf ("%d", &capTodot);

    necesidadesCom = turismos * capTurismos + todoterrenos * capTodot;
    printf (_("Las necesidades de combustible totales son (litros):"));
    printf("%d\n",necesidadesCom);
    return 0;
}