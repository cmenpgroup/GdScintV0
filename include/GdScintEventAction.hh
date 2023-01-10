//
/// \file GdScintEventAction.hh
/// \brief Definition of the GdScintEventAction class

#ifndef GdScintEventAction_h
#define GdScintEventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"

class GdScintRunAction;

/// Event action class
///

class GdScintEventAction : public G4UserEventAction
{
  public:
    GdScintEventAction(GdScintRunAction* runAction);
    virtual ~GdScintEventAction();

    virtual void BeginOfEventAction(const G4Event* event);
    virtual void EndOfEventAction(const G4Event* event);

    void AddEdep(G4double edep) { fEdep += edep; }

  private:
    GdScintRunAction* fRunAction;
    G4double     fEdep;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
