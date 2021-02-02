program kalinka_CalcVInLab5;
uses crt;
var c,d,x,y,z,v:real;
begin
  c:=0.2; d:=0.1;
  x:=c-d;
  y:=d*(sqr(cos(x)*cos(x)));
  z:=(exp(y*ln(c+1)))+(x/y);
  if (y<z) then v:=x+y else v:=exp(y*ln(2*z));
  if (y<z) then writeln('Входные данные: C = ', c, ', D = ', d, '. Выходныее данные: X = ', x, ', Y = ', y, ', Z = ', z, ', V1 = ', v) else writeln('Входные данные: C = ', c, ', D = ', d, '. Выходныее данные: X = ', x, ', Y = ', y, ', Z = ', z, ', V2 = ', v);
  readkey;
end.