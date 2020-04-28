%{
int lineCounter = 1;
%}
variable [a-zi]+
function_name [A-Z][a-z]+
float [+-]?[0-9]*(\.)[0-9]+ 
integer [+-]?[0-9]+
%%
ask return(ASK);
print return(PRINT);
Move return(MOVE_FUNC);
Grab return(GRAB_FUNC);
Release return(RELEASE_FUNC);
Turn return(TURN_FUNC);
Read return(READ_FUNC);
Send return(SEND_FUNC);
Receive return(RECEIVE_FUNC);
int return(INT_TYPE);
float return(FLOAT_TYPE);
string return(STRING_TYPE);
boolean return(BOOLEAN_TYPE);
void return(VOID_TYPE);
const return(CONST_TYPE);
\+ return(PLUS);
\- return(MINUS);
\* return(ASTERISK);
\/ return(SLASH);
\% return(MOD);
if return(IF);
else return(ELSE);
START return(START); 
END return(END);
while return(WHILE); 
for return(FOR);       
, return(COMMA);
\( return(LEFT_P);
\) return(RIGHT_P); 
\<\< return(SCOPE_BEGIN);
\>\> return(SCOPE_END);
\|\| return(OR);
\= return(EQUAL);
\=\? return(IS_EQUAL);
\~\=\? return(IS_NOT_EQUAL);
\<\= return(LESS_OR_EQ);
\>\= return(GREATER_OR_EQ);
\< return(LESS_THAN);
\> return(GREATER_THAN);
\&\& return(AND);
~ return(NOT); 
return return(RETURN);
right|wrong return(BOOLEAN); 
{integer} return(INTEGER);
{float} return(FLOAT); 
\!\!.*\!\! return(COMMENT);
{variable} return(VARIABLE);
{function_name} return(FUNCTION_NAME);
[A-ZIGÜSÖÇ_]+ return(CONST);
\; return(SEMICOLON);
\n {lineCounter++;}
[ \r\t]+ ;
%%
int yywrap() { return 1; }
