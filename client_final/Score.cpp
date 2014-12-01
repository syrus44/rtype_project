#include	"Score.h"

Score::Score()
{
  this->name = "";
  this->score = 0;
}

Score::~Score()
{}

void							Score::triScore()
{
  std::string					tmp1;
  int							tmp2;
  std::string					tmp3;
  int							tmp4;
  std::list<Score>::iterator	i;
  
  i = this->lst.begin();
  while (i != this->lst.end() && this->lst.size() >= 2)
    {
      tmp1 = i->name;
      tmp2 = i->score;
      ++i;
      if (i != this->lst.end())
        {
          tmp3 = i->name;
          tmp4 = i->score;
        }
	  i--;
	  if (tmp2 < tmp4)
        {
          i->name = tmp3;
          i->score = tmp4;
          i++;
          i->name = tmp1;
          i->score = tmp2;
          i = this->lst.begin();
        }
	  else
	      ++i;
  }
}

void				Score::addMemberLst(std::string const & name, int score)
{
  if (this->lst.size() == 0)
    {
      this->lst.push_back(Score());
      this->it = lst.begin();
      this->it->name = name;
      this->it->score = score;
    }
  else
    {
      this->lst.push_back(Score());
      this->it++;
      this->it->name = name;
      this->it->score = score;
    }
}

void				Score::addMemberFile(std::string const & name, int score) const
{
  std::ofstream			fd(".scores", std::ofstream::app);

  fd << name << " " << score << std::endl;
}

void				Score::getScores()
{
  std::ifstream			fd(".scores");
  std::ofstream			newfile;
  std::string			line;

  if (fd)
    {
      while (std::getline(fd, line))
        {
			this->name = line.substr(0, line.find(" ", 0));
			std::istringstream(line.substr(line.find(" ", 0),
			(line.size() - line.find(" ", 0)))) >> this->score;
			this->addMemberLst(this->name, this->score);
        }
      this->triScore();
      fd.close();
    }
  else
    {
      std::cerr << "Scores error file." << std::endl;
      newfile.open(".scores");
      newfile.close();
      std::cerr << "One new file has been created." << std::endl;
    }
}

void				Score::cleanScores()
{
  std::ofstream			fd(".scores");

  fd.close();
  this->lst.erase(this->lst.begin(), this->lst.end());
}

std::list<Score>				Score::getList()
{
	return (this->lst);
}

std::list<Score>::iterator		Score::getIter()
{
	return (this->it);
}

int								Score::getScore()
{
	return (this->score);
}

std::string						Score::getName()
{
	return (this->name);
}