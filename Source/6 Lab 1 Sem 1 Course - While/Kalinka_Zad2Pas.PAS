program Kalinka_Zad1Pasv1;
uses crt;
var eps, cosiks, Maklorcosiks, an, oneinn, x2n, fact2n, n, n2, nprov, nprov1, nprov2, nprov3, nprov4:real;
function factorial(n:real):real;
  begin
    if (n=1) then factorial:=1 else factorial:=n*factorial(n-1);
  end;
begin
  eps:=1E-6;
  cosiks:=cos(18);
  Maklorcosiks:=1;
  n:=0;
  repeat
    n:=n+1;
    n2:=2*n;
    
    nprov:=n; nprov:=nprov/1; nprov1:=4; nprov2:=4; nprov3:=4; nprov4:=4;
    
    if nprov/1=1 then nprov1:=5;
    if nprov/2=1 then nprov2:=5;
    if nprov/3=1 then nprov3:=5;
    if nprov/4=1 then nprov4:=5;
    
    if nprov1=5 then oneinn:=-1;
    if nprov2=5 then oneinn:=1;
    if nprov3=5 then oneinn:=-1;
    if nprov4=5 then oneinn:=1;
    
    x2n:=exp(n2*ln(cosiks));
    fact2n:=factorial(n2);
    an:=oneinn*(x2n/fact2n);
    Maklorcosiks:=Maklorcosiks+an;
  until abs(an)<=eps;
  writeln;writeln('Для cos(18)[приблизительно =', cosiks:4:2, '] при точности ', eps ,'; ', cosiks:4:2, ' = ', Maklorcosiks, ' при количестве элементов ', n:2:0);
  readkey;
end.