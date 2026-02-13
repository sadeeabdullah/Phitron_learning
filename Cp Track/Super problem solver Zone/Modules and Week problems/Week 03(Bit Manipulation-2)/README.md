#Bit Mask
----
*Sequence of bits or combination of bits which represent a subset of set*


Lets take a set {1, 2, 3, 4, 5, 6, 7}

1. subset1 - {1, 5} or {1, 3, 5} or {} or {1, 2, 3, 4, 5, 6, 7}

lets represent it with 0 or 1 
1--> taken
0--> not taken

subset {1, 3, 5} = {1 0 1 0 1 0 0}

Now the issue is how can we get the possible subset using bit masking? ok let's make some connection
-----

suppose we have a set {1, 2, 3} or {a, b, c};
what will be the subset lets rewrite their subset using bit mask

	{1 1 1}
	{1 1 0}
	{1 0 1}
	{1 0 0}
	{0 1 1}			---> 1 MEAN TAKEN 
	{0 1 0}
	{0 0 1}
	{0 0 0}

	can you see any connection or similar something? Tada we get all the combination.

	now let's make it more fantastic.. we have the binary of 0 - 7 as welll..... and more? how many sub set we got 2^n and from what we have to start ? 0 so we have to go until 2^n - 1