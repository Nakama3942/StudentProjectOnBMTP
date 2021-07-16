program Kalinka_ProgLab21_Registra_31102020;
uses crt;
var data:string; s:char; pri,im,otec,adress,spec:string;
begin
  write('Назовите свою фамилию: '); readln(pri);
  write('Назовите своё имя: '); readln(im);
  write('Назовите своё отчество: '); readln(otec);
  writeln('Введите год рождения: '); readln(data);
  writeln('Введите адресс проживания: '); readln(adress);
  writeln('Укажите свою специальность: '); readln(spec);
  writeln(pri, ' ', im, ' ', otec, ', Вы зарегистрированы в системе! Ваши данные:');
  writeln('Вы родились в ', data, ' году, живёте в ', adress, ' и работаете ', spec, 'ом.');
  readkey;
end.