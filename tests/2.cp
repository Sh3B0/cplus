type qword is integer;
type float is real;
type bit is boolean;
type double is float;

type time is record {var hour : integer; var minute : integer; } end;
type duration is time;

var i : integer is 1;
var j is -3;
var k : integer;

var __keyword : integer is 42;
var snake_case is 123;
var camelCase is 234;
var PascalCase is 345;
var GLOBAL_CASE is 456;

var half is 0.5;
var am_i_cool is true;

type color is record {var r : integer; var g : integer; var b : integer; } end;

routine main() : integer is
    var blue : color;
    blue.b := 255;

    println blue.b;

    var fibonacci : array[5] integer;
    fibonacci[1] := 1;
    fibonacci[2] := 2;
    fibonacci[3] := fibonacci[1] + fibonacci[2];
    fibonacci[4] := fibonacci[2] + fibonacci[3];
    fibonacci[5] := fibonacci[3] + fibonacci[4];

    println fibonacci[5];
    return 0;
end