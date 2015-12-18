#include <iostream>
#include <vector>

class Say
{
private:
	std::string name;
public:
	Say(std::string _name)
	{
		this->name = _name;

		std::cout << ("Hi there, I'm instance " + _name + "!");
		std::cout << "\tAddress:" << this << std::endl;
	}

	std::string whatIsYourName()const{ return name; }
};

int main()
{
	Say *p;

	std::vector<Say*> objects_Instances;
	
	objects_Instances.push_back( new Say("Loke"));
	objects_Instances.push_back( new Say("Ramon"));
		// That's my great trick :D
		p = objects_Instances.front(); // Catching first instance of vector
		std::cout << "node: "p->whatIsYourName() << std::endl; // Printing its name

	objects_Instances.push_back( new Say("Peter"));
	objects_Instances.push_back( new Say("Marcos"));
	objects_Instances.push_back( new Say("Estella"));
	objects_Instances.push_back( new Say("Jhon"));

	std::cout << new Say("Test") << std::endl;

	for(auto &element : objects_Instances)
	{
		// Memory Saved with Success! Chuck Norris approves ;)
		objects_Instances.erase(objects_Instances.begin());
		delete p;
		p = objects_Instances.front();

		// That is really hilarious, but this prevents memory leak...
		// Note the node of vector can be erased, but the instance still live
		// in the memory.
	}
}
