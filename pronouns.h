#include <stdio.h>
#include <string.h>

struct pronoun(){
 char* subject;
 char* object;
 char* posAdj;
 char* posPnn;
 char* reflex;
}

struct pronoun she;
struct pronoun he;
struct pronoun they;
struct pronoun it;
struct pronoun ae;
struct pronoun xe;

void strcpyall(struct pronoun pronoun, char* sub, char* obj, char* pa, char* pn, char* ref){
 strcpy(pronoun.subject, sub);
 strcpy(pronoun.object, obj);
 strcpy(pronoun.posAdj, pa);
 strcpy(pronoun.posPnn, pn);
 strcpy(pronoun.reflexm ref);
}

strcpyall(she, "she","her","her","hers","herself");
strcpyall(he, "he","him","his","his", "himself");
strcpyall(they, "they","them","their","theirs", "themselves");
strcpyall(it, "it", "it","its", "its", "itself");
strcpyall(ae, "ae","aer","aer","aers", "aerself");
strcpyall(xe, "xe", "xem", "xyr","xyrs", "xemself");

