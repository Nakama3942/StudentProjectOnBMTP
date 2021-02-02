program Kalinka_ProgLab21_N1_31102020;
uses crt;
var x,y,z:real; s:char; pri:string;
begin
  write('Назовите свою фамилию: '); read(pri);
  write('Назовите два любых числа: x= '); read(x); write('y= '); read(y);
  writeln;writeln;writeln;
  writeln('Уважаемый(ая) ', pri, '! Для Ваших чисел X(', x:7:2, ') и Y(', y:7:2, ') имеем:');
  writeln(x:7:2, ' + ', y:7:2, ' = ', x+y:7:2);
  writeln(x:7:2, ' - ', y:7:2, ' = ', x-y:7:2);
  writeln(x:7:2, ' * ', y:7:2, ' = ', x*y:7:2);
  writeln(x:7:2, ' / ', y:7:2, ' = ', x/y:7:2);
  writeln('Спасибо за выдержку! Во всём желаю успеха!');
  readkey;
end.