/*-----------------------------------------*
 *         fichier ssuites.h               *
 *         version MUTABLE                 *
 *-----------------------------------------*/
#include "suites.h"

#ifndef __S_SUITES__
#define __S_SUITES__

typedef struct s_ssuite {
                    suite ms;
                    int prem;
                    int ch[LG_MAX];
                } *sous_suite;
                
sous_suite ss_vide(suite u);
void ss_del(sous_suite su);
int ss_longueur(sous_suite su);
int ss_ieme(sous_suite su, int i);
/* prec
effet de bord */
sous_suite ss_modifie_suiv(sous_suite su, int i, int n_suiv);
/*prec 
effet de bord*/

sous_suite ss_insere(sous_suite su, int ind_of_u);

void ss_print(sous_suite su);

#endif
