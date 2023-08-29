all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Yigin.cpp -o ./lib/Yigin.o
	g++ -c -I "./include" ./src/BST.cpp -o ./lib/BST.o
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o
	g++ -c -I "./include" ./src/Dosya.cpp -o ./lib/Dosya.o
	g++ -c -I "./include" ./src/findHighestHeightBST.cpp -o ./lib/findHighestHeightBST.o



	





bagla:
	g++ ./lib/main.o ./lib/Dosya.o ./lib/findHighestHeightBST.o ./lib/BST.o ./lib/Node.o ./lib/Yigin.o -o ./bin/program

calistir:
	./bin/program