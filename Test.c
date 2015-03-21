#include <stdio.h>
#include <stdlib.h>
#include "formula_typedef.h"
#include "mstring.h"
#include <string.h>
#include "formula_core.h"
static FormulaOper oper_test[]={
	{"+",1,1,NULL,NULL,NULL},
	{"-",1,1,NULL,NULL,NULL},
	{"*",2,2,NULL,NULL,NULL},
	{"/",2,2,NULL,NULL,NULL},
	{"%",2,2,NULL,NULL,NULL},
	{"=",1,3,NULL,NULL,NULL},
	{NULL,0,0,NULL,NULL,NULL}
};
static FormulaFunc func_test[]={
	{"sin",NULL,NULL},
	{NULL,NULL,NULL}
};
int main(int agv, char *ags[])
{
	char *s = "5*(2-4)";
	FormulaDict* dict=formuladict_new(NULL,NULL,NULL);
	formuladict_addoperators(dict,oper_test);
	formuladict_addfunctions(dict,func_test);
	//d[5]="(";
	
	Mstring* a=formula_reserve(ags[1],dict);
	for(int i=0;a[i]!=NULL;i++) printf("%s,",a[i]);
	stringarray_free(a);
	// printf("%d",strfin(s,"7"));
	printf("\n");
	
}

