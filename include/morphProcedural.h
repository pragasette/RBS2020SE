#pragma once

namespace RBS2020
{
	class MorphProcedural
	{
	public:
		static MorphProcedural* GetSingleton();

		void SetFormID(SInt32 formID);

		float GetWeight();
		void SetWeight(float weight);

		float GetMusclepower();
		void SetMusclepower(float musclepower);

		float GetFitness();
		void SetFitness(float musclepower);

		void SetGravityOffset(float gravityOffset);
		float GetGravityOffset();

		void SetSeed(SInt32 seed);
		void SetSeedOffset(SInt32 seedOffset);
		SInt32 GetSeedOffset();

		void SetMorphfactor(float morphfactorMale);

		float GetMorphfactorFemale();
		float GetMorphfactorMale();

		void SetMorphfactorMale(float morphfactorMale);
		void SetMorphfactorFemale(float morphfactorFeMale);

		float GetMorphfactorBreasts();
		void SetMorphfactorBreasts(float morphfactorBreasts);

		float GetMorphfactorMuscles();
		void SetMorphfactorMuscles(float morphfactorMuscles);

		float GetRandomFloat(float min, float max);
		float GetRandomFloatNormalByWeight(float min, float max);
		float GetRandomFloatNormalByMusclePower(float min, float max);

		float GetMorphValueSamSamuel();
		float GetMorphValueSamSamson();
		float GetMorphValueForearmSize();
		float GetMorphValueChubbyArms();
		float GetMorphValueShoulderWidth();
		float GetMorphValueArms();
		float GetMorphValueShoulderSmooth();
		float GetMorphValueShoulderTweak();

		float GetMorphValueBelly();
		float GetMorphValueTummyTuck();
		float GetMorphValueBigBelly();
		float GetMorphValueHipBone();
		float GetMorphValueHips();
		float GetMorphValueHipForward();
		float GetMorphValueHipUpperWidth();

		float GetMorphValueNippleLength();
		float GetMorphValueNipplePerkiness();
		float GetMorphValueNipplePerkManga();
		float GetMorphValueNippleTipManga();
		float GetMorphValueNippleDistance();
		float GetMorphValueNippleSize();
		float GetMorphValueAreolaSize();
		float GetMorphValueNippleDown();

		float GetMorphValueMuscleAbs();
		float GetMorphValueMuscleArms();
		float GetMorphValueMuscleButt();
		float GetMorphValueMuscleLegs();
		float GetMorphValueMusclePecs();

		float GetMorphValueBigButt();
		float GetMorphValueChubbyButt();
		float GetMorphValueButt();
		float GetMorphValueButtClassic();
		float GetMorphValueButtShape2();
		float GetMorphValueButtCrack();
		float GetMorphValueAppleCheeks();
		float GetMorphValueRoundAss();
		float GetMorphValueCrotchBack();
		float GetMorphValueGroin();

		float GetMorphValueChubbyLegs();
		float GetMorphValueLegs();
		float GetMorphValueThighs();
		float GetMorphValueKneeShape();
		float GetMorphValueKneeHeight();
		float GetMorphValueCalfSize();
		float GetMorphValueCalfSmooth();
		float GetMorphValueLegShapeClassic();

		float GetMorphValueBigTorso();
		float GetMorphValueChestDepth();
		float GetMorphValueChestWidth();
		float GetMorphValueChubbyWaist();
		float GetMorphValueWaist();
		float GetMorphValueSternumDepth();
		float GetMorphValueSternumHeight();
		float GetMorphValueWaistHeight();
		float GetMorphValueWaistLine();

		float GetMorphValueBreasts();
		float GetMorphValueBreastsNewSH();
		float GetMorphValueBreastsFantasy();
		float GetMorphValueBreastCenter();
		float GetMorphValueBreastCenterBig();
		float GetMorphValueBreastCleavage();
		float GetMorphValueBreastFlatness2();
		float GetMorphValueBreastFlatness();
		float GetMorphValueBreastGravity2();
		float GetMorphValueBreastHeight();
		float GetMorphValueBreastsTogether();
		float GetMorphValueBreastTopSlope();
		float GetMorphValuePushUp();
		float GetMorphValueBreastPerkiness();
		float GetMorphValueBreastWidth();

	private:
		static MorphProcedural* _instance;
		MorphProcedural(); /* verhindert, dass ein Objekt von au�erhalb von N erzeugt wird. */
		// protected, wenn man von der Klasse noch erben m�chte
		MorphProcedural(const MorphProcedural&); /* verhindert, dass eine weitere Instanz via
		Kopie-Konstruktor erstellt werden kann */
		~MorphProcedural() {}

		SInt32 formID;
		float weight;
		float musclepower;
		float morphfactor;
		float morphfactorFemale;
		float morphfactorMale;
		float morphfactorBreasts;
		float morphfactorMuscles;
		float musclePower;
		float fitness;
		float gravityOffset;
		SInt32 seedOffset;
	};
}  // namespace RBS2020
