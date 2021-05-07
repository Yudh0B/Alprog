clear
clc

disp("Diferensial Numerik Metode Selisih Maju")
fprintf("\n")
disp("x0 = 0")
disp("h = 0.05")
disp("range = [0,1]")
disp("f(x) = e^-x * sin*(2*x) + 1")
disp("f'(x) = [f(x+h)-f(x)]/h")
disp("e(f) = -[f(x+2h)-2f(x+h)+f(x)]/2h")
fprintf("\n")

syms x;
x0 = 0;
h = 0.05;
y = exp(-x) * sin(2*x) + 1;
disp("   x         f(x)      f(x+h)    f(x+2h)     f'(x)      e(f)")
while x0 <= 1.05
    fprintf("%f",x0)
    y0 = subs(y,x,x0);
    x0 = x0+h;
    y1 = subs(y,x,x0);
    y2 = subs(y,x,x0+h);
    yt = (y1-y0)/h;
    e = ((-y2)+(2*y1)-y0)/(2*h);
    disp(sprintf("  %f  %f  %f  %f  %f",y0,y1,y2,yt,e))
end
