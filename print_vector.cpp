/my self funciton to print a vector
//In C++ you have to be very specific what variable you are passing
void print_vector(vector<double>vec) {
	for (int vi=0;vi<vec.size();++vi)
			cout << vec[vi] << " ";
			cout << "\n";
}

int main() {
	//now let's try start with an empty vector and then use
	//push_back to grow up the vector
	vector<double>vem;
	vem.push_back(2.7);
	vem.push_back(5.6);
	vem.push_back(7.9);
	print_vector(vem);
  //same as below;
	// for (int vi=0;vi<vem.size();++vi)
	// 		cout << vem[vi] << " ";
	// 		cout << "\n";
}


