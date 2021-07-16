program Kalinka_ProgLab21_N2_31102020;
uses crt;
var x,y,z:real; s:char; pri:string;
begin
  writeln('Представьтесь: '); read(pri);
  writeln('Задайте переменные:');
  write('x= '); read(x); write('y= '); read(y);
  writeln('Уважаемый(ая) ', pri, '! Расчёты проведены!');
  writeln('Ваши результаты: '); write(x+y:7:2, ' ,',x-y:7:2, ' ,',x*y:7:2, ' ,',x/y:7:2);
  readkey;
end.