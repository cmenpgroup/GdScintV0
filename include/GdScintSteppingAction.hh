//
/// \file GdScintSteppingAction.hh
/// \brief Definition of the GdScintSteppingAction class

#ifndef GdScintSteppingAction_h
#define GdScintSteppingAction_h 1

#include "G4UserSteppingAction.hh"
#include "globals.hh"

class GdScintEventAction;

class G4LogicalVolume;

/// Stepping action class
///

class GdScintSteppingAction : public G4UserSteppingAction
{
  public:
    GdScintSteppingAction(GdScintEventAction* eventAction);
    virtual ~GdScintSteppingAction();

    // method from the base class
    virtual void UserSteppingAction(const G4Step*);

  private:
    GdScintEventAction*  fEventAction;
    G4LogicalVolume* fScoringVolume;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
