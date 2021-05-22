#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

#include "Ui.hpp"

void testGivenMain(void)
{
  ISpaceMarine* bob = new TacticalMarine;
  ISpaceMarine* jim = new AssaultTerminator;

  ISquad* vlc = new Squad;
  vlc->push(bob);
  vlc->push(jim);
  for (int i = 0; i < vlc->getCount(); ++i)
  {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;
}

void testSquadCopyConstructor(void)
{
  Squad squad;

  Ui::colorPrint("\nrequired: print TacticalMarine create msg\n");
  squad.push(new TacticalMarine);

  Ui::colorPrint("\nrequired: print TacticalMarine create msg\n");
  Squad squad2(squad);

  Ui::colorPrint("\nrequired: print TacticalMarine battleCry\n");
  squad2.getUnit(0)->battleCry();

  Ui::colorPrint("\nrequired: print TacticalMarine delete msg * 2\n");
}

void testSquadAssignation(void)
{
  Squad squad;

  Ui::colorPrint("\nrequired: print TacticalMarine create msg\n");
  squad.push(new TacticalMarine);

  Squad squad2;
  Ui::colorPrint("\nrequired: print AssaultTerminator create msg\n");
  squad2.push(new AssaultTerminator);

  Ui::colorPrint("\nrequired: print AssaultTerminator battleCry\n");
  squad2.getUnit(0)->battleCry();

  Ui::colorPrint("\nrequired\n"
                 "1. print TacticalMarine create msg\n"
                 "2. print AssaultTerminator delete msg\n");
  squad2 = squad;

  Ui::colorPrint("\nrequired: print TacticalMarine battleCry\n");
  squad2.getUnit(0)->battleCry();

  Ui::colorPrint("\nrequired: print TacticalMarine delete msg * 2\n");
}

void testSquadGetUnit(void)
{
  Squad squad;

  Ui::colorPrint("\nrequired: print TacticalMarine create msg\n");
  squad.push(new TacticalMarine);

  Ui::colorPrint("\nrequired: print TacticalMarine battleCry\n");
  squad.getUnit(0)->battleCry();

  Ui::colorPrint("\nrequired: print '0x0' * 2\n");
  std::cout << squad.getUnit(-1) << "\n";
  std::cout << squad.getUnit(1) << "\n";

  Ui::colorPrint("\nrequired: print TacticalMarine delete msg \n");
}

void testSquadPush(void)
{
  Squad squad;

  Ui::colorPrint("\nrequired: print TacticalMarine create msg\n");
  squad.push(new TacticalMarine);

  Ui::colorPrint("\nrequired: print AssaultTerminator create msg\n");
  squad.push(new AssaultTerminator);

  Ui::colorPrint("\nrequired\n"
                 "1. print TacticalMarine delete msg\n"
                 "2. print AssaultTerminator delete msg\n");
}

int main(int argc, char** argv)
{
  if (argc != 2)
    return 0;

  int testCase = argv[1][0] - '0';
  Ui::setTextColor(Ui::green);
  if (testCase == 0) testGivenMain();
  if (testCase == 1) testSquadCopyConstructor();
  if (testCase == 2) testSquadAssignation();
  if (testCase == 3) testSquadGetUnit();
  if (testCase == 4) testSquadPush();

  std::cout << Ui::blue << "\n";
  system("leaks ex02");
}