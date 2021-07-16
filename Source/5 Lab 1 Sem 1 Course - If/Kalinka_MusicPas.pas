Program Kalinka_Music;
uses crt;
var NomMuzZnak:integer;
begin
  writeln('Введите номер нотоного символа, а приложение выведет его название. Номер: ');
  readln(NomMuzZnak);
  case NomMuzZnak of
    1:writeln('Это До.');
    2:writeln('Это Ре.');      
    3:writeln('Это Ми.');      
    4:writeln('Это Фа.');      
    5:writeln('Это Соль.');      
    6:writeln('Это Ля.');      
    7:writeln('Это Си.');      
  end;
  writeln('Программа завершена.');
  readkey;
end.