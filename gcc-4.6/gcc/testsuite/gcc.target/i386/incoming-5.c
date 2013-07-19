/* PR middle-end/37009 */
/* { dg-do compile { target { { ! *-*-darwin* } && ilp32 } } } */
/* { dg-options "-m32 -mincoming-stack-boundary=2 -mpreferred-stack-boundary=2" } */

extern void bar (double *);

double
foo(double x)
{
  double xxx = x + 13.0;

  bar (&xxx);
  return xxx;
}

/* { dg-final { scan-assembler "andl\[\\t \]*\\$-8,\[\\t \]*%esp" } } */
