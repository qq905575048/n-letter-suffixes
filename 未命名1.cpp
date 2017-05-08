#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
	ifstream in("C:\\Users\\dell\\Desktop\\github\\EnglishWords.txt");
	vector<string> dic;
	string line;
	while (getline(in, line))
	{
		line += '\n';
		dic.push_back(line);
	}
	int n,n1;
	cin >> n1 >> n;
	map <string, int> suffixM;
	for (int i2 = 0; i2 < dic.size(); i2++)
	{
		if (dic[i2].length() >= n)
		{
			string suffixes = dic[i2].substr(dic[i2].length() - n, dic[i2].length());
			if (suffixM.count(suffixes) > 0)
				suffixM[suffixes] += 1;
			else
				suffixM.insert(pair<string, int>(suffixes, 0));
		}
	}

}


