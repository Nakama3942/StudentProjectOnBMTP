program Kalinka_calc1pas;
uses crt;
const c=0.2; d=0.1;
var x,y,z:real;
begin
  x:=(exp(c))-d; y:=d*(exp(3*ln(cos(x)))); z:=(exp((c+1)*ln(y))+x)/tan(y);
  writeln('Начальное значения C: ', c, ' и D: ', d, ' .');
  writeln('Исходя из этих значений я получаю X, Y и Z, а именно:');
  writeln('X=', x);
  writeln('Y=', y);
  writeln('Z=', z);
  writeln('Программа выполнена!');
  readkey;
end.