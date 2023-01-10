//
/// \file GdScintPrimaryGeneratorAction.hh
/// \brief Definition of the GdScintPrimaryGeneratorAction class

#ifndef GdScintPrimaryGeneratorAction_h
#define GdScintPrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "globals.hh"

class G4ParticleGun;
class G4Event;
class G4Box;

/// The primary generator action class with particle gun.
///
/// The default kinematic is a 10 MeV neutron, randomly distribued
/// in front of the phantom across 80% of the (X,Y) phantom size.

class GdScintPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
  public:
    GdScintPrimaryGeneratorAction();
    virtual ~GdScintPrimaryGeneratorAction();

    // method from the base class
    virtual void GeneratePrimaries(G4Event*);

    // method to access particle gun
    const G4ParticleGun* GetParticleGun() const { return fParticleGun; }

  private:
    G4ParticleGun*  fParticleGun; // pointer a to G4 gun class
    G4Box* fScintillatorBox;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif