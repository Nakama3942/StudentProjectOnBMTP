program Kalinka_ZadLab7;
Matrix1:array[0..2] of real=(0, -3, 0);
Matrix2:array[0..2] of real=(0, 0, 4);
Matrix3:array[0..2] of real=(1, 5, 0);
Matrix4:array[0..2] of real=(2, 6, 0);
var N1,N2,N3,i:integer;
function NN(i:integer):integer;
begin
  if i=0 then N1:=N1+1;
  if i=1 then N2:=N2+1;
  if i=2 then N3:=N3+1;
end;
begin
  for i=0 to 2 do
  begin
    if Matrix1[i]=0 then NN(i);
    if Matrix2[i]=0 then NN(i);
    if Matrix3[i]=0 then NN(i);
    if Matrix4[i]=0 then NN(i);
  end;
  writeln('Количество нолевых элементов в первом столбце: ', N1, ', во втором: ', N2, ', в третьем: ', N3);
end.