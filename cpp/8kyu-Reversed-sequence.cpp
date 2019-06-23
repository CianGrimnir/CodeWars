/*
 * Get the number n (n>0) to return the reversed sequence from n to 1.
 *
 * Example : n=5 >> [5,4,3,2,1]
 *
 */

std::vector<int> reverseSeq(int n) {
	std::vector<int> Seq;
	for(int i=n;i>0;i--)
		Seq.push_back(i);
	return(Seq);
}
