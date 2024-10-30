#include "pch.h"
#include "CppUnitTest.h"
#include <string>  
#include "../Project1/main.h"

extern "C" char* RPSGame(const char* player1, const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TDD
{
	TEST_CLASS(TDD)
	{
	public:
		
		TEST_METHOD(TestPlayer1WinsWithRock)
		{
			Assert::AreEqual(RPSGame("Rock", "Scissors"), "Player 1 wins");
		}

		TEST_METHOD(TestPlayer2WinsWithScissors)
		{
			Assert::AreEqual(RPSGame("Paper", "Scissors"), "Player 2 wins");
		}

		TEST_METHOD(TestDraw)
		{
			Assert::AreEqual(RPSGame("Paper", "Paper"), "Draw");
		}

		TEST_METHOD(TestInvalidInput)
		{
			Assert::AreEqual(RPSGame("Rock", "Invalid"), "Invalid");
		}
	};
}
