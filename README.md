#
For this machine problem, you are to program a solution to the Towers of
Hanoi problem. Instead of a recursive program, you must implement a
solution using a loop and a stack. The algorithm you are to implement is:

PROCEDURE HANOI

  /* Move n disks from pole 1 to pole 2 using pole 3 */
  S ←− empty stack
  S ⇐ (n, 1, 2, 3)
  while (S ̸= empty )
    (n, i, j, k) ⇐ S
    if n = 1 then
        move the top disk from pole i to pole k
    else
        S ⇐ (n − 1, j, i, k)
        S ⇐ (1, i, j, k)
        S ⇐ (n − 1, i, k, j)
end HANOI
