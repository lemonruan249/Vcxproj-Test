void BadIndirectionOperandFunction()
{
	int data[] = { 0 };
	int* pointer = *data[0];
}