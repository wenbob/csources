/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode172659 tnode172659;
typedef struct ttype172693 ttype172693;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym172689 tsym172689;
typedef struct tident141017 tident141017;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
typedef struct tlib172677 tlib172677;
typedef struct tcontext263019 tcontext263019;
typedef struct tidentiter179106 tidentiter179106;
typedef struct TY172775 TY172775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tpasscontext223003 tpasscontext223003;
typedef struct tproccon263009 tproccon263009;
typedef struct tintset169043 tintset169043;
typedef struct ttrunk169039 ttrunk169039;
typedef struct ttrunkseq169041 ttrunkseq169041;
typedef struct tlinkedlist109020 tlinkedlist109020;
typedef struct tidtable172705 tidtable172705;
typedef struct tidpairseq172703 tidpairseq172703;
typedef struct tidpair172701 tidpair172701;
typedef struct tevalcontext253212 tevalcontext253212;
typedef struct TY263110 TY263110;
typedef struct tinstantiationpair263011 tinstantiationpair263011;
typedef struct tstackframe253204 tstackframe253204;
typedef struct tidnodetable172711 tidnodetable172711;
typedef struct tidnodepairseq172709 tidnodepairseq172709;
typedef struct tidnodepair172707 tidnodepair172707;
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode172659 {
ttype172693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym172689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq172653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY172865[20];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable172663 {
NI Counter;
tsymseq172661* Data;
};
struct tloc172673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype172693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym172689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq172691* Typeinstcache;
tscope172683* Typscope;
} S1;
struct {TY172786* Procinstcache;
tscope172683* Scope;
} S2;
struct {TY172786* Usedgenerics;
tstrtable172663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype172693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym172689* Owner;
NU32 Flags;
tnode172659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc172673 Loc;
tlib172677* Annex;
tnode172659* Constraint;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tidentiter179106 {
NI H;
tident141017* Name;
};
struct tscope172683 {
NI Depthlevel;
tstrtable172663 Symbols;
tnodeseq172653* Usingsyms;
tscope172683* Parent;
};
struct ttype172693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq172691* Sons;
tnode172659* N;
tsym172689* Destructor;
tsym172689* Owner;
tsym172689* Sym;
NI64 Size;
NI Align;
tloc172673 Loc;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tinstantiation172679 {
tsym172689* Sym;
ttypeseq172691* Concretetypes;
TY172775* Usedby;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
};
struct tpasscontext223003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tintset169043 {
NI Counter;
NI Max;
ttrunk169039* Head;
ttrunkseq169041* Data;
};
struct tlinkedlist109020 {
tlistentry109014* Head;
tlistentry109014* Tail;
NI Counter;
};
struct tidpair172701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable172705 {
NI Counter;
tidpairseq172703* Data;
};
typedef N_NIMCALL_PTR(tnode172659*, TY263058) (tcontext263019* c, tnode172659* n);
typedef N_NIMCALL_PTR(tnode172659*, TY263063) (tcontext263019* c, tnode172659* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode172659*, TY263071) (tcontext263019* c, tnode172659* n, NU8 flags, NIM_BOOL buffererrors);
typedef N_NIMCALL_PTR(tnode172659*, TY263080) (tcontext263019* c, tnode172659* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode172659*, TY263088) (tcontext263019* c, tnode172659* n);
typedef N_NIMCALL_PTR(tnode172659*, TY263093) (tcontext263019* c, tnode172659* n, tnode172659* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype172693*, TY263100) (tcontext263019* c, tnode172659* n, ttype172693* prev);
struct tinstantiationpair263011 {
tsym172689* Genericsym;
tinstantiation172679* Inst;
};
struct tcontext263019 {
  tpasscontext223003 Sup;
tsym172689* Module;
tscope172683* Currentscope;
tscope172683* Importtable;
tscope172683* Toplevelscope;
tproccon263009* P;
tsym172689* Friendmodule;
NI Instcounter;
tsymseq172661* Threadentries;
tintset169043 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq172661* Converters;
tsymseq172661* Patterns;
tlinkedlist109020 Optionstack;
tidtable172705 Symmapping;
tlinkedlist109020 Libs;
TY263058 Semconstexpr;
TY263063 Semexpr;
TY263071 Semtryexpr;
TY263080 Semoperand;
TY263088 Semconstboolexpr;
TY263093 Semoverloadedcall;
TY263100 Semtypenode;
tintset169043 Includedfiles;
tstrtable172663 Userpragmas;
tevalcontext253212* Evalcontext;
tintset169043 Unknownidents;
TY263110* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
};
struct tproccon263009 {
tsym172689* Owner;
tsym172689* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon263009* Next;
};
typedef NI TY21418[16];
struct ttrunk169039 {
ttrunk169039* Next;
NI Key;
TY21418 Bits;
};
struct tidnodepair172707 {
tidobj141011* Key;
tnode172659* Val;
};
struct tidnodetable172711 {
NI Counter;
tidnodepairseq172709* Data;
};
typedef struct {
N_NIMCALL_PTR(tnode172659*, ClPrc) (tnode172659* n, void* ClEnv);
void* ClEnv;
} TY253237;
struct tevalcontext253212 {
  tpasscontext223003 Sup;
tsym172689* Module;
tstackframe253204* Tos;
tnode172659* Lastexception;
tnode172659* Callsite;
NU8 Mode;
NU8 Features;
tidnodetable172711 Globals;
TY253237 Gettype;
TY253237 Handleisoperator;
};
struct tstackframe253204 {
tsym172689* Prc;
tnodeseq172653* Slots;
tnode172659* Call;
tstackframe253204* Next;
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct ttrunkseq169041 {
  TGenericSeq Sup;
  ttrunk169039* data[SEQ_DECL_SIZE];
};
struct tidpairseq172703 {
  TGenericSeq Sup;
  tidpair172701 data[SEQ_DECL_SIZE];
};
struct TY263110 {
  TGenericSeq Sup;
  tinstantiationpair263011 data[SEQ_DECL_SIZE];
};
struct tidnodepairseq172709 {
  TGenericSeq Sup;
  tidnodepair172707 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_270010)(tnode172659* proca, tnode172659* procb);
static N_INLINE(NI, sonslen_173022)(tnode172659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_139369)(tlineinfo137509 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_205663)(ttype172693* a, ttype172693* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_199122)(tnode172659* a, tnode172659* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym172689*, searchforproc_270141)(tcontext263019* c, tscope172683* scope, tsym172689* fn);
N_NIMCALL(tsym172689*, initidentiter_179110)(tidentiter179106* ti, tstrtable172663 tab, tident141017* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_177791)(tsym172689* s);
N_NIMCALL(tsym172689*, nextidentiter_179117)(tidentiter179106* ti, tstrtable172663 tab);
N_NIMCALL(NU8, equalparams_201066)(tnode172659* a, tnode172659* b);
N_NIMCALL(void, localerror_139349)(tlineinfo137509 info, NU16 msg, NimStringDesc* arg);
static NIM_CONST TY172865 TMP3696 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3697, "sons", 4);
STRING_LITERAL(TMP3699, "equalGenericParams", 18);
static NIM_CONST TY172865 TMP3700 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3701, "sym", 3);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, sonslen_173022)(tnode172659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3696[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3696[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, equalgenericparams_270010)(tnode172659* proca, tnode172659* procb) {
	NIM_BOOL result;
	NI i_270024;
	NI HEX3Atmp_270134;
	NI LOC7;
	NI TMP3698;
	NI res_270136;
	nimfr("equalGenericParams", "procfind.nim")
	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(17, "procfind.nim");
		LOC3 = 0;
		LOC3 = sonslen_173022(proca);
		nimln(17, "procfind.nim");
		LOC4 = 0;
		LOC4 = sonslen_173022(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		nimln(17, "procfind.nim");
		goto BeforeRet;
	}	LA5: ;
	i_270024 = 0;
	HEX3Atmp_270134 = 0;
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	LOC7 = 0;
	LOC7 = sonslen_173022(proca);
	TMP3698 = subInt(LOC7, 1);
	HEX3Atmp_270134 = (NI32)(TMP3698);
	nimln(1301, "system.nim");
	res_270136 = 0;
	nimln(1302, "system.nim");
	while (1) {
		tsym172689* a;
		tsym172689* b;
		nimln(1302, "system.nim");
		if (!(res_270136 <= HEX3Atmp_270134)) goto LA8;
		nimln(1301, "system.nim");
		i_270024 = res_270136;
		nimln(19, "procfind.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (((TMP3696[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
			if ((NU)(i_270024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*proca).kindU.S6.Sons->data[i_270024]).Kind == ((NU8) 3)))) goto LA11;
			nimln(20, "procfind.nim");
			internalerror_139369((*proca).Info, ((NimStringDesc*) &TMP3699));			nimln(21, "procfind.nim");
			goto BeforeRet;
		}		LA11: ;
		nimln(22, "procfind.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (((TMP3696[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
			if ((NU)(i_270024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*procb).kindU.S6.Sons->data[i_270024]).Kind == ((NU8) 3)))) goto LA15;
			nimln(23, "procfind.nim");
			internalerror_139369((*procb).Info, ((NimStringDesc*) &TMP3699));			nimln(24, "procfind.nim");
			goto BeforeRet;
		}		LA15: ;
		nimln(25, "procfind.nim");
		if (((TMP3696[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
		if ((NU)(i_270024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3700[(*(*proca).kindU.S6.Sons->data[i_270024]).Kind/8] &(1<<((*(*proca).kindU.S6.Sons->data[i_270024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3701));
		a = (*(*proca).kindU.S6.Sons->data[i_270024]).kindU.S4.Sym;
		nimln(26, "procfind.nim");
		if (((TMP3696[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
		if ((NU)(i_270024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3700[(*(*procb).kindU.S6.Sons->data[i_270024]).Kind/8] &(1<<((*(*procb).kindU.S6.Sons->data[i_270024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3701));
		b = (*(*procb).kindU.S6.Sons->data[i_270024]).kindU.S4.Sym;
		nimln(27, "procfind.nim");
		{
			NIM_BOOL LOC19;
			NIM_BOOL LOC21;
			nimln(27, "procfind.nim");
			LOC19 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC19 = !(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id));
			if (LOC19) goto LA20;
			nimln(28, "procfind.nim");
			nimln(28, "procfind.nim");
			LOC21 = 0;
			LOC21 = sametypeornil_205663((*a).Typ, (*b).Typ, 2);
			LOC19 = !(LOC21);
			LA20: ;
			if (!LOC19) goto LA22;
			nimln(28, "procfind.nim");
			goto BeforeRet;
		}		LA22: ;
		nimln(29, "procfind.nim");
		{
			NIM_BOOL LOC26;
			nimln(29, "procfind.nim");
			LOC26 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !(((*a).Ast == NIM_NIL));
			if (!(LOC26)) goto LA27;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !(((*b).Ast == NIM_NIL));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(30, "procfind.nim");
			{
				NIM_BOOL LOC32;
				nimln(30, "procfind.nim");
				nimln(30, "procfind.nim");
				LOC32 = 0;
				LOC32 = exprstructuralequivalent_199122((*a).Ast, (*b).Ast);
				if (!!(LOC32)) goto LA33;
				nimln(30, "procfind.nim");
				goto BeforeRet;
			}			LA33: ;
		}		LA28: ;
		nimln(1304, "system.nim");
		res_270136 = addInt(res_270136, 1);
	} LA8: ;
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tsym172689*, searchforproc_270141)(tcontext263019* c, tscope172683* scope, tsym172689* fn) {
	tsym172689* result;
	tidentiter179106 it;
	nimfr("SearchForProc", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_179110(&it, (*scope).Symbols, (*fn).Name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		nimln(39, "procfind.nim");
		LOC3 = 0;
		LOC3 = isgenericroutine_177791(fn);
		if (!LOC3) goto LA4;
		nimln(43, "procfind.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA6;
			nimln(44, "procfind.nim");
			{
				NIM_BOOL LOC9;
				tnode172659* genr;
				tnode172659* genf;
				nimln(44, "procfind.nim");
				LOC9 = 0;
				nimln(44, "procfind.nim");
				LOC9 = ((*result).Kind == (*fn).Kind);
				if (!(LOC9)) goto LA10;
				nimln(44, "procfind.nim");
				LOC9 = isgenericroutine_177791(result);
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(45, "procfind.nim");
				if (((TMP3696[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
				if ((NU)(2) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genr = (*(*result).Ast).kindU.S6.Sons->data[2];
				nimln(46, "procfind.nim");
				if (((TMP3696[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
				if ((NU)(2) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genf = (*(*fn).Ast).kindU.S6.Sons->data[2];
				nimln(47, "procfind.nim");
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					nimln(49, "procfind.nim");
					LOC15 = 0;
					nimln(47, "procfind.nim");
					LOC16 = 0;
					nimln(47, "procfind.nim");
					LOC16 = exprstructuralequivalent_199122(genr, genf);
					if (!(LOC16)) goto LA17;
					nimln(48, "procfind.nim");
					if (((TMP3696[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
					if ((NU)(3) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if (((TMP3696[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3697));
					if ((NU)(3) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					LOC16 = exprstructuralequivalent_199122((*(*result).Ast).kindU.S6.Sons->data[3], (*(*fn).Ast).kindU.S6.Sons->data[3]);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					nimln(50, "procfind.nim");
					LOC15 = equalgenericparams_270010(genr, genf);
					LA18: ;
					if (!LOC15) goto LA19;
					nimln(51, "procfind.nim");
					goto BeforeRet;
				}				LA19: ;
			}			LA11: ;
			nimln(52, "procfind.nim");
			result = nextidentiter_179117(&it, (*scope).Symbols);
		} LA6: ;
	}	goto LA1;
	LA4: ;
	{
		nimln(54, "procfind.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA22;
			nimln(55, "procfind.nim");
			{
				NIM_BOOL LOC25;
				NIM_BOOL LOC27;
				NU8 LOC30;
				nimln(55, "procfind.nim");
				LOC25 = 0;
				nimln(55, "procfind.nim");
				LOC25 = ((*result).Kind == (*fn).Kind);
				if (!(LOC25)) goto LA26;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC27 = 0;
				LOC27 = isgenericroutine_177791(result);
				LOC25 = !(LOC27);
				LA26: ;
				if (!LOC25) goto LA28;
				nimln(56, "procfind.nim");
				nimln(56, "procfind.nim");
				LOC30 = 0;
				LOC30 = equalparams_201066((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC30) {
				case ((NU8) 1):
				{
					nimln(58, "procfind.nim");
					goto BeforeRet;
				}				break;
				case ((NU8) 2):
				{
					nimln(60, "procfind.nim");
					localerror_139349((*fn).Info, ((NU16) 66), (*(*fn).Name).S);					nimln(61, "procfind.nim");
					goto BeforeRet;
				}				break;
				case ((NU8) 0):
				{
				}				break;
				}
			}			LA28: ;
			nimln(64, "procfind.nim");
			result = nextidentiter_179117(&it, (*scope).Symbols);
		} LA22: ;
	}	LA1: ;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerprocfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

N_NOINLINE(void, compilerprocfindDatInit)(void) {
}
