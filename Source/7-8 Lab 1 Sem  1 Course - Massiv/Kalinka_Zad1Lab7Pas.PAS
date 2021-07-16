program Kalinka_ZadLab7;
MassivX:array[0..22] of real=(-12.4, 0, 12.3, -1, 0.01, 0, 123.3, -18.97, 0, 0.8, 10.01, -1.2, 11.2, 12.3, 13.6, 0, -5.2, 12.3, -111.3, 45.7, -6.7, 0, 2.1);
var ZnachMass1,ZnachMass2:real; i,k,n:integer;
begin
  ZnachMass1:=MassivX[0];
  for i=0 to 22 do
  begin
    ZnachMass2:=MassivX[i];
    if ZnachMass1<ZnachMass2 then ZnachMass1=ZnachMass2;
    writeln('Проверка: Первое значение: ', ZnachMass1 ,'; второе значение: ', ZnachMass2);
  end;
  if i=22 then for k=0 to 22 do
  begin
    ZnachMass2:=MassivX[k];
    if ZnachMass2=ZnachMass1 then MassivX[k] = MassivX[23];
  end;
  MassivX[22]=ZnachMass1;
  writeln;writeln('Массив: ');
  for n=0 to 22 do
  begin
    writeln(MassivX[n], ' ');
  end;
  writeln;wriyeln;writeln('Последнее число - самое большое: ', ZnachMass1);
  readkey;
end.