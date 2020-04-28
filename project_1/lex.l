%option main
variable [a-z]+
function_name [A-Z][a-z]+
float [+-]?[0-9]*(\.)[0-9]+ 
integer [+-]?[0-9]+
%%
Move|Grab|Release|Turn|Read|Read|Send|Receive printf("PRIMITIVE_FUNC_NAME");
int|float|string|boolean|void printf("TYPE");
\+|\-|\*|\/ printf("ARITHMETIC_OP");
if printf("IF");
else printf("ELSE");
start printf("START"); 
end printf("END");
while printf("WHILE"); 
for printf("FOR");       
, printf("COMMA");
\( printf("LEFT_P");
\) printf("RIGHT_P"); 
\[ printf("LEFT_SQUARE_P");
\] printf("RIGHT_SQUARE_P");
\<\< printf("SCOPE_BEGIN");
\>\> printf("SCOPE_END");
\|\| printf("OR");
\= printf("EQUAL");
\=\? printf("IS_EQUAL");
\~\=\? printf("IS_NOT_EQUAL");
\? printf("QUESTION_MARK");
\<\= printf("LESS_OR_EQ");
\>\= printf("GREATER_OR_EQ");
\< printf("LESS_THAN");
\> printf("GREATER_THAN");
\&\& printf("AND");
~ printf("NOT"); 
return printf("RETURN");
right|wrong printf("BOOLEAN"); 
{integer} printf("INTEGER");
{float} printf("FLOAT"); 
\!\!.*\!\! printf("COMMENT");
{variable} printf("VARIABLE");
{function_name} printf("FUNCTION_NAME");
%%


