/*-------------------------------------*
 *    fichier ssuites_extended.h       *
 *    version MUTABLE                  *
 *-------------------------------------*/

#include <stdbool.j>
#include "suies.h"
#include "ssuites.h"

sous_suite ss_suprime (sous-suite su, int ind_of_u);
//suprime le terme u_(ind-of-u) de la sous_suite su
// si ce terme n'est pas dans su celle ci reste inchangé
// prec: à compléter
// effet de vord su modif

suite ss_ss2s(sous_suite su);
//produit une suite dont les termes sont ceux de su
// prec: aucune (on doit bien aavoir une sous-suite
//effet de bord aucun

sous_suite ss_id(suite u);
//produit la sous-suites dont les termes sont ceux u
//effet de bord aucun

sous_suite ss_n_prem (suite u, int n);
//prod la sous_suites des n premiers termes de u
//prec: 0<n<=s_longueur (u)
//effet de bord aucun

sous_suite ss_1_sur_2(suite u);
//prod la sous_suites des termes de u pris un sur deux à partir de u_0
//prec aucune
//effet de bord aucun

sous_suite ss_croissante_de_u0(suite u);
//produit la plus grande sous_suite strictement croissante de termes consecutifs
//depuis u_0
//prec : aucune 
//effet de bord : aucun

sous_suite ss_croissante(suite_u);
//produit la plus grande sous_suite strictement croissante de termes consecutifs
//prec : aucune
//effet de bord : aucun

bool s_strict_croissant(suite u );
//retourne vrai si et seulement si la sous_suite est strictement croissante

sous_suite ss_extract(suite u, suite mod);
//produit la sous_suite des termes u_(mod_i)
//prec : la suite mod est strictement croissante et 0<s_longueur(mod) <= s_longueur(u) et 0<mod_i<=s_longueur(u)

