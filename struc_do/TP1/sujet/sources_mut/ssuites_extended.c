/*-----------------------------------------*
 *         fichier ssuites_extended.c               * 
 *         version MUTABLE                 *
 *-----------------------------------------*/
#include <stdbool.h>
#include "suites.h"
#include "ssuites.h"
#include "ssuites_extended.h"

/*sous_suite ss_ (suite)
{
   int i;
   su.prem=0;
   su.ms=u;
   sous_suite su;
   for(i=0 ; i< u->lg ; i++){
	su.ch[i]=i+1;
   }
   su.ch[u-lg -1]=-1;
   return su;
}*/

sous_suite ss_suprime ( sous_suite su, int ind_of_u)
{
	if (ind_of_u == su->prem)
		su->prem=su->ch[su->prem];
	else
	{
		int j = su->prem;
		for(;j!=-1;j=su->ch[j])
		{
			if (j==ind_of_u)
			{
				j=su->ch[ind_of_u];
				su->ch[ind_of_u]=-1;
			}
		}	
	}
	return su;
}



suite ss_ss2s(sous_suite su)
{
	suite u=s_vide;
	int j=su->prem;
	int i;
	for(i=0;j!=-1;i++,j=su->ch[j])
		u->val[i]=su->ms[j];
	return u;
}

sous_suite ss_n_prem(suite u, int n)
{
	sous_suite su=ss_vide(u);
	int i;
	su->prem=0;
	for(i=1;i<n;i++)
		su->ch[i-1]=i;
	return su;
}

sous_suite ss_id(suite u)
{
        sous_suite su=ss_vide(u);
        int i;
        int lg=s_longueur(u);
        su->prem=0;
        for(i=1;i<lg;i++)
                su->ch[i-1]=i;
        return su;
}

sous_suite ss_1_sur_2(suite u){
   sous_suite su=ss_vide(u);
   su->prem=0;
   su->ms=u;
   int i;
   for(i=0 ; i<u->lg-2 ; i+=2){
	su->ch[i]=i+2;
   }
   return su;
}

sous_suite ss_croissante(suite u){
   sous_suite su=ss_vide(u);
   int i;
   for(i=0 ; (i<u->lg-1) && (u->val[i]<u->val[i+1]) ; i++){
	su->ch[i]=i+1;
   }
   return su; 
}

bool s_strict_croissant(suite u){
  int i;
  int j=i-1;
  for(i=1;i<u->lg;i+=1){
    	if((u->val[i]) <= (u->val[j])){
	  return 0;
	}
  return 1;
  }
}

//sous_suite ss_extract(suite u,suite mod){
  
