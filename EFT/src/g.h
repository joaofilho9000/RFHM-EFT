/*
 * g.h
 *
 *  Created on: 26 de ago de 2015
 *      Author: joao
 */

 MapleGenVar6 = -0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(-a/t+1/t)*cosh(u+H/
t-1.0*v))-0.125*sinh(-1.0*u+2.0*H/t-1.0*v)/(cosh(-1.0*u+2.0*H/t-1.0*v)+phi(a/t+
1/t)*cosh(u-1.0*v))+0.125*sinh(u+2.0*H/t+v)/(cosh(u+2.0*H/t+v)+phi(-a/t+1/t)*
cosh(u-1.0*v))+0.5*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh(u-1.0*v));
      MapleGenVar5 = MapleGenVar6+0.125*sinh(u+v)/(cosh(u+v)+phi(a/t+1/t)*cosh(
-1.0*u+2.0*H/t+v))+0.25*sinh(-1.0*u+H/t-1.0*v)/(cosh(-1.0*u+H/t-1.0*v)+phi(a/t+
1/t)*cosh(-1.0*u+H/t+v))+0.125*sinh(u+2.0*H/t+v)/(cosh(u+2.0*H/t+v)+phi(a/t+1/t
)*cosh(u-1.0*v))+0.125*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh(u+2.0*H/t-1.0*v)
)+0.5*sinh(u+v)/(cosh(u+v)+phi(a/t+1/t)*cosh(u-1.0*v));
      MapleGenVar6 = MapleGenVar5-0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(a/t+1/t
)*cosh(u+H/t-1.0*v))-0.125*sinh(-1.0*u+2.0*H/t-1.0*v)/(cosh(-1.0*u+2.0*H/t-1.0*
v)+phi(-a/t+1/t)*cosh(u-1.0*v))+0.25*sinh(-1.0*u+H/t-1.0*v)/(cosh(-1.0*u+H/t
-1.0*v)+phi(a/t+1/t)*cosh(u+H/t-1.0*v))+0.25*sinh(-1.0*u+H/t-1.0*v)/(cosh(-1.0*
u+H/t-1.0*v)+phi(-a/t+1/t)*cosh(u+H/t-1.0*v));
      MapleGenVar4 = MapleGenVar6-0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(-a/t+1/
t)*cosh(-1.0*u+H/t+v))+0.125*sinh(u+v)/(cosh(u+v)+phi(a/t+1/t)*cosh(u+2.0*H/t
-1.0*v))+0.25*sinh(-1.0*u+H/t-1.0*v)/(cosh(-1.0*u+H/t-1.0*v)+phi(-a/t+1/t)*cosh
(-1.0*u+H/t+v))+0.125*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh(-1.0*u+2.0*H/t+v)
)-0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(a/t+1/t)*cosh(-1.0*u+H/t+v));
      MapleGenVar5 = p*p;
      MapleGenVar3 = MapleGenVar4*MapleGenVar5;
      MapleGenVar7 = -0.25*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh(-1.0*u+2.0*H
/t+v))+0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(-a/t+1/t)*cosh(u+H/t-1.0*v))-0.25*
sinh(-1.0*u+H/t-1.0*v)/(cosh(-1.0*u+H/t-1.0*v)+phi(a/t+1/t)*cosh(u+H/t-1.0*v))+
0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(a/t+1/t)*cosh(-1.0*u+H/t+v));
      MapleGenVar6 = MapleGenVar7-0.25*sinh(-1.0*u+H/t-1.0*v)/(cosh(-1.0*u+H/t
-1.0*v)+phi(a/t+1/t)*cosh(-1.0*u+H/t+v))+0.25*sinh(-1.0*u+2.0*H/t-1.0*v)/(cosh(
-1.0*u+2.0*H/t-1.0*v)+phi(a/t+1/t)*cosh(u-1.0*v))-0.25*sinh(u+v)/(cosh(u+v)+phi
(a/t+1/t)*cosh(-1.0*u+2.0*H/t+v))-0.25*sinh(u+v)/(cosh(u+v)+phi(a/t+1/t)*cosh(u
+2.0*H/t-1.0*v));
      MapleGenVar7 = MapleGenVar6+0.25*sinh(-1.0*u+2.0*H/t-1.0*v)/(cosh(-1.0*u+
2.0*H/t-1.0*v)+phi(-a/t+1/t)*cosh(u-1.0*v))-0.25*sinh(-1.0*u+H/t-1.0*v)/(cosh(
-1.0*u+H/t-1.0*v)+phi(-a/t+1/t)*cosh(-1.0*u+H/t+v))-0.25*sinh(u+2.0*H/t+v)/(
cosh(u+2.0*H/t+v)+phi(-a/t+1/t)*cosh(u-1.0*v));
      MapleGenVar5 = MapleGenVar7+0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(a/t+1/t
)*cosh(u+H/t-1.0*v))-0.25*sinh(u+2.0*H/t+v)/(cosh(u+2.0*H/t+v)+phi(a/t+1/t)*
cosh(u-1.0*v))+0.25*sinh(u+H/t+v)/(cosh(u+H/t+v)+phi(-a/t+1/t)*cosh(-1.0*u+H/t+
v))-0.25*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh(u+2.0*H/t-1.0*v))-0.25*sinh(
-1.0*u+H/t-1.0*v)/(cosh(-1.0*u+H/t-1.0*v)+phi(-a/t+1/t)*cosh(u+H/t-1.0*v));
      MapleGenVar6 = p;
      MapleGenVar4 = MapleGenVar5*MapleGenVar6;
      MapleGenVar2 = MapleGenVar3+MapleGenVar4;
      MapleGenVar1 = MapleGenVar2+0.125*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh
(-1.0*u+2.0*H/t+v))+0.125*sinh(u+v)/(cosh(u+v)+phi(-a/t+1/t)*cosh(u+2.0*H/t-1.0
*v))+0.125*sinh(u+v)/(cosh(u+v)+phi(a/t+1/t)*cosh(u+2.0*H/t-1.0*v));
      t0 = MapleGenVar1+0.125*sinh(u+2.0*H/t+v)/(cosh(u+2.0*H/t+v)+phi(a/t+1/t)
*cosh(u-1.0*v))-0.125*sinh(-1.0*u+2.0*H/t-1.0*v)/(cosh(-1.0*u+2.0*H/t-1.0*v)+
phi(a/t+1/t)*cosh(u-1.0*v))+0.125*sinh(u+v)/(cosh(u+v)+phi(a/t+1/t)*cosh(-1.0*u
+2.0*H/t+v))+0.125*sinh(u+2.0*H/t+v)/(cosh(u+2.0*H/t+v)+phi(-a/t+1/t)*cosh(u
-1.0*v))-0.125*sinh(-1.0*u+2.0*H/t-1.0*v)/(cosh(-1.0*u+2.0*H/t-1.0*v)+phi(-a/t+
1/t)*cosh(u-1.0*v));




