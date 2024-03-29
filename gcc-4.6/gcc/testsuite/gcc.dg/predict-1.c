/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-profile_estimate" } */

extern int global;

int bar(int);

void foo (int bound)
{
  int i, ret = 0;
  for (i = 0; i < bound; i++)
    {
      if (i > bound - 2)
	global += bar (i);
    }
}

/* { dg-final { scan-tree-dump "loop iv compare heuristics" "profile_estimate"} } */
/* { dg-final { cleanup-tree-dump "profile_estimate" } } */
