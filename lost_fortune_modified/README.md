This code is based on the simple program called Lost Fortune from the book "Beginning C++ Through Game Programming" by Michael Dawson.

Lost Fortune could be described as a bare-bones text adventure games fitting for ending the first chapter focused on introducing C++.

It is intended to showcase the basic syntax and functionalities of C++ such as data types, data output, and data input.

The mechanics is to input 3 information that will be used for the story telling: the number of adventurers at the start of journey, the number of those lost along the way (should be lower than the first input), and the name of the character. 

Minor modifications where done by me while following through the code mainly I modified the code for accepting the character name. Instead of the standard cin, the getline function was used with parameters intended to accept whitespace as a valid character input. This way the character can freely input a full name comprising of at least a singular first name and the last name.
