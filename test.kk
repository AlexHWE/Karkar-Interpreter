import "printf" from "libc.so.6" as "print";
import "malloc" from "libc.so.6" as "alloc";

function fibonaccilast (int n) => int :
	var int a = 0;
	var int b = 1;
	var int i = 0;
	while i < n-1 :
		var int temp = a;
		a = b;
		b = temp + b;
		i = i + 1;
	return a;

function factorial (int x) => int :
	if x < 2 :
		return 1;
	return factorial(x-1) * x;

function sqaure (int x) => int :
	return x * x;

function multiply(int x,int y) => int:
	return x * y;

function print_char(int chr):
	print(&chr);

function print_hi():
	print_char('h');
	print_char('i');
	print_char(10);

function main () :
	print_hi();
	print_hi();
	# testing multiple nseted arguments and expressions
	multiply(sqaure(3),8); 


# this is a comment
