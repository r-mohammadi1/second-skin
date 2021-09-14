#include <stdio.h>
#include <string.h>

typedef struct {
 char* subject;
 char* object;
 char* posAdj;
 char* posPnn;
 char* reflex;
} pronoun;

pronoun she = {"she","her","her","hers","herself"};
pronoun he = {"he","him","his","his", "himself"};
pronoun they = {"they","them","their","theirs", "themselves"};
pronoun it = {"it", "it","its", "its", "itself"};
pronoun ae = {"ae","aer","aer","aers", "aerself"};
pronoun xe = {"xe", "xem", "xyr","xyrs", "xemself"};
pronoun ze = {"ze", "zir", "zir", "zirs", "zirself"};
pronoun thon = {"thon", "thon","thons","thon's", "thonself"};
pronoun e = {"e", "em", "es", "ems", "emself"};
pronoun co = {"co", "co","cos","co's", "coself"};
pronoun ve = {"ve","ver","vis","vers","verself"};
pronoun vi = {"vi","vir","vis","virs","virself"};
pronoun per = {"per","per","per","pers","perself"};
pronoun ey = {"ey","em","eir","eirs","emself"};
pronoun hu = {"hu","hum","hus","hus","huself"};
pronoun spivak = {"e","em","eir","eirs","emself"};
