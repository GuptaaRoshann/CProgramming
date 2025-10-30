#include <stdio.h>

int main(){
    printf("Demonstrating escape Sequence in c\n\n");

    printf("1.Newline->Hello \\nWorld:\n");
printf("Hello\nWorld\n\n");

printf("2.Tab->Hello\\tWorld:\n");
printf("hello\tWorld\n\n");

printf("3.Backspace->Helloo \\bWorld:\n");
printf("helloo\b World\n\n");

printf("4.Carriage return->Hello World\\rHi:\n");
printf("hello World\rHip\n\n");

printf("5.Form Feed->Text before\\fText after:\n");
printf("Text before\fText after\n\n");

printf("6.Vertical Tab->Hello \\vWorld:\n");
printf("hello\vworld\n\n");

printf("7.Backlash->\\\\:\n");
printf("\\\n\n");

printf("8.single quote->\\\':n");
printf("\'\n\n");

printf("9.Double quote->\\\":\n");
printf("\"\n\n");

printf("10.Question mark->\\\?:\n");
printf("?\n\n");

printf("11.Null character->End of string here\\o(ignored):\n");
printf("Hello\Oworld\n\n");//"world" won't print

printf("12.Alert->\\a;\n");
printf("\a\n");//may beep if supported

return 0;
}

