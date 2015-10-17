// Example to show member functions, features of unordered_set
#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

void displayProperties(const unordered_set<string> &us)
{
	cout << "size              : " << us.size() << endl;			// the number of elements in the container
	cout << "bucket size       : " << us.bucket_count() << endl;	// the number of buckets in the container
	cout << "load factor       : " << us.load_factor() << endl;		// The load factor is the ratio between the number of elements in the container (its size) and the number of buckets (bucket_count)
	// The load factor influences the probability of collision in the hash table
	// (i.e., the probability of two elements being located in the same bucket). 
	// The container automatically increases the number of buckets to keep the load factor 
	// below a specific threshold(its max_load_factor), causing a rehash each time an expansion is needed.
	cout << "max load factor   : " << us.max_load_factor() << endl;	// same methods gets and sets the max load factor
	// traverse through buckets
	for (size_t i = 0; i < us.bucket_count(); ++i) {
		cout << "bucket[" << i << "] (" << us.bucket_size(i) << ") = ";	// the number of elements in bucket i.
		for (auto iter = us.cbegin(i); iter != us.cend(i); ++iter)
			cout << *iter << " ";
		cout << endl;
	}

	cout << "**********************************************************" << endl;
}

int main()
{
	unordered_set<string> names{ "ali", "hakan", "turgut", "suleyman", "macide", "taylan", "recep", "devlet", "dogu",
		"helin", "selin", "salim", "tijen" };

	displayProperties(names);

	cout << names.bucket("suleyman") << endl;	// Returns the bucket number where the element with value k is located.
	//size_type bucket ( const key_type& k ) const;

	return 0;
}