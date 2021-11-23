#include <iostream>
#include <random>
#include <string>

std::string playerAnswer;

struct classQuestions
{
	//CREATE QUESTIONS
	std::string subject;
	std::string question;
	std::string answers[2];

	//CORRECT
	bool questionAnswered = false;
	bool questionCorrect = false;

	void CheckAnswer(std::string playerAnswer)
	{
		questionAnswered = true;

		if (playerAnswer == answers[0] || playerAnswer == answers[1])
		{
			questionCorrect = true;
		}
	}
};
classQuestions questions[45];
void BuildQuestions();
void ClassSuccess();
void JoinClass(std::string classType);

int main()
{
	JoinClass("english");
	JoinClass("english");
	JoinClass("english");
	JoinClass("english");
	JoinClass("english");
	ClassSuccess();
}

void BuildQuestions()
{
	/*
		"The distinct pronunciation patterns of a group of people is what?\n" ,
		"Which play is Shakespeare’s -swan song-?\n" ,
		"How many Maxims are contained within Grice's Theorem?\n" ,
		"-Because I could not stop for death/He kindly stopped for me- who wrote this first line of famous poetry?\n",
		"Who became the best-selling author in the 2000s in Britain?\n"
		"What language is closest to English?\n" ,
		"-I, Robot- is written by an American who was born in Russia. What is the name of him?\n",
		"What is the name of the novel by George Orwell where we find the character -Napoleon-?\n",
		"The negative counter-part to synonymy is called what?\n"
	*/
}

void ClassSuccess()
{
	int correctAnswers = 0;
	for (int i = 0; i < 5; i++)
	{
		if (questions[i].questionCorrect == true)
		{
			correctAnswers++;
		}
	}

	if (correctAnswers > 2)
	{
		std::cout << "Class Passed!" << std::endl;
	}
}

void JoinClass(std::string classType)
{
	bool buildClass;
	for (int i = 0; i < 5; i++)
	{
		if (questions[i].questionAnswered == false)
		{
			i++;
			buildClass = true;
		}

		else
		{
			buildClass = false;
			break;
		}
	}

	if (buildClass == true)
	{
		if (classType == "english")
		{
			questions[0].subject = "english";
			questions[0].question = "The three witches play a central role in which Shakespearean tragedy?\n";
			questions[0].answers[0] = "Macbeth";
			questions[0].answers[1] = "MacBeth";

			questions[1].subject = "english";
			questions[1].question = "What is the study of (-grammatical-) meaning in language?\n";
			questions[1].answers[0] = "Semantics";
			questions[1].answers[1] = "Semantic";

			questions[2].subject = "english";
			questions[2].question = "What is the correct spelling of:\nMischievious\nMischievous\nMischevous\nMischevious\n";
			questions[2].answers[0] = "nMischievous";
			questions[2].answers[1] = "nMischievous";

			questions[3].subject = "english";
			questions[3].question = "-The War of The World- is a famous work of which author?\n";
			questions[3].answers[0] = "HG Wells";
			questions[3].answers[1] = "H.G Wells";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatic";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatics";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatics";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatics";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatics";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatics";

			questions[4].subject = "english";
			questions[4].question = "What is the study of meaning in context?\n";
			questions[4].answers[0] = "Pragmatics";
			questions[4].answers[1] = "Pragmatics";
		}
	}

	if (classType == "english")
	{
		std::default_random_engine generator;
		std::uniform_int_distribution<int> distribution(0, 4);
		int questionNo = distribution(generator);
		while (questions[questionNo].questionAnswered == true || questions[questionNo].subject != "english")
		{
			questionNo = distribution(generator);
		}

		std::cout << questions[questionNo].question;
		std::getline(std::cin, playerAnswer);
		questions[questionNo].CheckAnswer(playerAnswer);
	}
}