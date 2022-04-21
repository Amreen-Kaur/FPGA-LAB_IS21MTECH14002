module helloworldfpga(

input  wire X,
input  wire Y,
input  wire Z,

output wire O
);

always @(*)
begin

O=(X|!Y)&(!Y|Z)&(!X|Y|!Z);

end
endmodule
