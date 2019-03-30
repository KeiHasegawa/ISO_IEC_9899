/*
 * A case or default label shall appear only in a switch statement. Further
 * constraints on such labels are discussed under the switch statement.
 */
void test000(void)
{
 case 0:
   test000();
}

void test001(void)
{
 default:
   test001();
}

