#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Chaos

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Chaos.EClusterUnionMethod
// NumValues: 0x0006
enum class EClusterUnionMethod : uint8
{
	PointImplicit                            = 0,
	DelaunayTriangulation                    = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None                                     = 4,
	EClusterUnionMethod_MAX                  = 5,
};

// Enum Chaos.EFieldPhysicsDefaultFields
// NumValues: 0x0007
enum class EFieldPhysicsDefaultFields : uint8
{
	Field_RadialIntMask                      = 0,
	Field_RadialFalloff                      = 1,
	Field_UniformVector                      = 2,
	Field_RadialVector                       = 3,
	Field_RadialVectorFalloff                = 4,
	Field_EFieldPhysicsDefaultFields_Max     = 5,
	Field_MAX                                = 6,
};

// Enum Chaos.EFieldPhysicsType
// NumValues: 0x0012
enum class EFieldPhysicsType : uint8
{
	Field_None                               = 0,
	Field_DynamicState                       = 1,
	Field_LinearForce                        = 2,
	Field_ExternalClusterStrain              = 3,
	Field_Kill                               = 4,
	Field_LinearVelocity                     = 5,
	Field_AngularVelociy                     = 6,
	Field_AngularTorque                      = 7,
	Field_InternalClusterStrain              = 8,
	Field_DisableThreshold                   = 9,
	Field_SleepingThreshold                  = 10,
	Field_PositionStatic                     = 11,
	Field_PositionAnimated                   = 12,
	Field_PositionTarget                     = 13,
	Field_DynamicConstraint                  = 14,
	Field_CollisionGroup                     = 15,
	Field_ActivateDisabled                   = 16,
	Field_PhysicsType_Max                    = 17,
};

// Enum Chaos.EFieldFalloffType
// NumValues: 0x0006
enum class EFieldFalloffType : uint8
{
	Field_FallOff_None                       = 0,
	Field_Falloff_Linear                     = 1,
	Field_Falloff_Inverse                    = 2,
	Field_Falloff_Squared                    = 3,
	Field_Falloff_Logarithmic                = 4,
	Field_Falloff_Max                        = 5,
};

// Enum Chaos.EFieldResolutionType
// NumValues: 0x0004
enum class EFieldResolutionType : uint8
{
	Field_Resolution_Minimal                 = 0,
	Field_Resolution_DisabledParents         = 1,
	Field_Resolution_Maximum                 = 2,
	Field_Resolution_Max                     = 3,
};

// Enum Chaos.EFieldCullingOperationType
// NumValues: 0x0004
enum class EFieldCullingOperationType : uint8
{
	Field_Culling_Inside                     = 0,
	Field_Culling_Outside                    = 1,
	Field_Culling_Operation_Max              = 2,
	Field_Culling_MAX                        = 3,
};

// Enum Chaos.EFieldOperationType
// NumValues: 0x0005
enum class EFieldOperationType : uint8
{
	Field_Multiply                           = 0,
	Field_Divide                             = 1,
	Field_Add                                = 2,
	Field_Substract                          = 3,
	Field_Operation_Max                      = 4,
};

// Enum Chaos.ESetMaskConditionType
// NumValues: 0x0004
enum class ESetMaskConditionType : uint8
{
	Field_Set_Always                         = 0,
	Field_Set_IFF_NOT_Interior               = 1,
	Field_Set_IFF_NOT_Exterior               = 2,
	Field_MaskCondition_Max                  = 3,
};

// Enum Chaos.EEmissionPatternTypeEnum
// NumValues: 0x0003
enum class EEmissionPatternTypeEnum : uint8
{
	Chaos_Emission_Pattern_First_Frame       = 0,
	Chaos_Emission_Pattern_On_Demand         = 1,
	Chaos_Max                                = 2,
};

// Enum Chaos.EInitialVelocityTypeEnum
// NumValues: 0x0003
enum class EInitialVelocityTypeEnum : uint8
{
	Chaos_Initial_Velocity_User_Defined      = 0,
	Chaos_Initial_Velocity_None              = 1,
	Chaos_Max                                = 2,
};

// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
// NumValues: 0x0009
enum class EGeometryCollectionPhysicsTypeEnum : uint8
{
	Chaos_AngularVelocity                    = 0,
	Chaos_DynamicState                       = 1,
	Chaos_LinearVelocity                     = 2,
	Chaos_InitialAngularVelocity             = 3,
	Chaos_InitialLinearVelocity              = 4,
	Chaos_CollisionGroup                     = 5,
	Chaos_LinearForce                        = 6,
	Chaos_AngularTorque                      = 7,
	Chaos_Max                                = 8,
};

// Enum Chaos.EObjectStateTypeEnum
// NumValues: 0x0007
enum class EObjectStateTypeEnum : uint8
{
	Chaos_NONE                               = 0,
	Chaos_Object_Sleeping                    = 1,
	Chaos_Object_Kinematic                   = 2,
	Chaos_Object_Static                      = 3,
	Chaos_Object_Dynamic                     = 4,
	Chaos_Object_UserDefined                 = 100,
	Chaos_Max                                = 101,
};

// Enum Chaos.EImplicitTypeEnum
// NumValues: 0x0006
enum class EImplicitTypeEnum : uint8
{
	Chaos_Implicit_Box                       = 0,
	Chaos_Implicit_Sphere                    = 1,
	Chaos_Implicit_Capsule                   = 2,
	Chaos_Implicit_LevelSet                  = 3,
	Chaos_Implicit_None                      = 4,
	Chaos_Max                                = 5,
};

// Enum Chaos.ECollisionTypeEnum
// NumValues: 0x0003
enum class ECollisionTypeEnum : uint8
{
	Chaos_Volumetric                         = 0,
	Chaos_Surface_Volumetric                 = 1,
	Chaos_Max                                = 2,
};

// Enum Chaos.EChaosBufferMode
// NumValues: 0x0005
enum class EChaosBufferMode : uint8
{
	Double                                   = 0,
	Triple                                   = 1,
	Num                                      = 2,
	Invalid                                  = 3,
	EChaosBufferMode_MAX                     = 4,
};

// Enum Chaos.EChaosThreadingMode
// NumValues: 0x0006
enum class EChaosThreadingMode : uint8
{
	DedicatedThread                          = 0,
	TaskGraph                                = 1,
	SingleThread                             = 2,
	Num                                      = 3,
	Invalid                                  = 4,
	EChaosThreadingMode_MAX                  = 5,
};

// Enum Chaos.EChaosSolverTickMode
// NumValues: 0x0005
enum class EChaosSolverTickMode : uint8
{
	Fixed                                    = 0,
	Variable                                 = 1,
	VariableCapped                           = 2,
	VariableCappedWithTarget                 = 3,
	EChaosSolverTickMode_MAX                 = 4,
};

// Enum Chaos.EGeometryCollectionCacheType
// NumValues: 0x0005
enum class EGeometryCollectionCacheType : uint8
{
	None                                     = 0,
	Record                                   = 1,
	Play                                     = 2,
	RecordAndPlay                            = 3,
	EGeometryCollectionCacheType_MAX         = 4,
};

// ScriptStruct Chaos.SolverCollisionFilterSettings
// 0x0010 (0x0010 - 0x0000)
struct FSolverCollisionFilterSettings final
{
public:
	bool                                          FilterEnabled;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinMass;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinSpeed;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinImpulse;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSolverCollisionFilterSettings) == 0x000004, "Wrong alignment on FSolverCollisionFilterSettings");
static_assert(sizeof(FSolverCollisionFilterSettings) == 0x000010, "Wrong size on FSolverCollisionFilterSettings");
static_assert(offsetof(FSolverCollisionFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverCollisionFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverCollisionFilterSettings, MinMass) == 0x000004, "Member 'FSolverCollisionFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverCollisionFilterSettings, MinSpeed) == 0x000008, "Member 'FSolverCollisionFilterSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FSolverCollisionFilterSettings, MinImpulse) == 0x00000C, "Member 'FSolverCollisionFilterSettings::MinImpulse' has a wrong offset!");

// ScriptStruct Chaos.SolverBreakingFilterSettings
// 0x0010 (0x0010 - 0x0000)
struct FSolverBreakingFilterSettings final
{
public:
	bool                                          FilterEnabled;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinMass;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinSpeed;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinVolume;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSolverBreakingFilterSettings) == 0x000004, "Wrong alignment on FSolverBreakingFilterSettings");
static_assert(sizeof(FSolverBreakingFilterSettings) == 0x000010, "Wrong size on FSolverBreakingFilterSettings");
static_assert(offsetof(FSolverBreakingFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverBreakingFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverBreakingFilterSettings, MinMass) == 0x000004, "Member 'FSolverBreakingFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverBreakingFilterSettings, MinSpeed) == 0x000008, "Member 'FSolverBreakingFilterSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FSolverBreakingFilterSettings, MinVolume) == 0x00000C, "Member 'FSolverBreakingFilterSettings::MinVolume' has a wrong offset!");

// ScriptStruct Chaos.SolverTrailingFilterSettings
// 0x0010 (0x0010 - 0x0000)
struct FSolverTrailingFilterSettings final
{
public:
	bool                                          FilterEnabled;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinMass;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinSpeed;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinVolume;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSolverTrailingFilterSettings) == 0x000004, "Wrong alignment on FSolverTrailingFilterSettings");
static_assert(sizeof(FSolverTrailingFilterSettings) == 0x000010, "Wrong size on FSolverTrailingFilterSettings");
static_assert(offsetof(FSolverTrailingFilterSettings, FilterEnabled) == 0x000000, "Member 'FSolverTrailingFilterSettings::FilterEnabled' has a wrong offset!");
static_assert(offsetof(FSolverTrailingFilterSettings, MinMass) == 0x000004, "Member 'FSolverTrailingFilterSettings::MinMass' has a wrong offset!");
static_assert(offsetof(FSolverTrailingFilterSettings, MinSpeed) == 0x000008, "Member 'FSolverTrailingFilterSettings::MinSpeed' has a wrong offset!");
static_assert(offsetof(FSolverTrailingFilterSettings, MinVolume) == 0x00000C, "Member 'FSolverTrailingFilterSettings::MinVolume' has a wrong offset!");

// ScriptStruct Chaos.ChaosSolverConfiguration
// 0x0068 (0x0068 - 0x0000)
struct FChaosSolverConfiguration final
{
public:
	int32                                         Iterations;                                        // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionPairIterations;                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutIterations;                                 // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionPushOutPairIterations;                    // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionMarginFraction;                           // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionMarginMax;                                // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionCullDistance;                             // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         JointPairIterations;                               // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         JointPushOutPairIterations;                        // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClusterConnectionFactor;                           // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClusterUnionMethod                           ClusterUnionConnectionType;                        // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenerateCollisionData;                            // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverCollisionFilterSettings         CollisionFilterSettings;                           // 0x002C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bGenerateBreakData;                                // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverBreakingFilterSettings          BreakingFilterSettings;                            // 0x0040(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bGenerateTrailingData;                             // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverTrailingFilterSettings          TrailingFilterSettings;                            // 0x0054(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bGenerateContactGraph;                             // 0x0064(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FChaosSolverConfiguration) == 0x000004, "Wrong alignment on FChaosSolverConfiguration");
static_assert(sizeof(FChaosSolverConfiguration) == 0x000068, "Wrong size on FChaosSolverConfiguration");
static_assert(offsetof(FChaosSolverConfiguration, Iterations) == 0x000000, "Member 'FChaosSolverConfiguration::Iterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionPairIterations) == 0x000004, "Member 'FChaosSolverConfiguration::CollisionPairIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, PushOutIterations) == 0x000008, "Member 'FChaosSolverConfiguration::PushOutIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionPushOutPairIterations) == 0x00000C, "Member 'FChaosSolverConfiguration::CollisionPushOutPairIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMarginFraction) == 0x000010, "Member 'FChaosSolverConfiguration::CollisionMarginFraction' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMarginMax) == 0x000014, "Member 'FChaosSolverConfiguration::CollisionMarginMax' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionCullDistance) == 0x000018, "Member 'FChaosSolverConfiguration::CollisionCullDistance' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, JointPairIterations) == 0x00001C, "Member 'FChaosSolverConfiguration::JointPairIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, JointPushOutPairIterations) == 0x000020, "Member 'FChaosSolverConfiguration::JointPushOutPairIterations' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, ClusterConnectionFactor) == 0x000024, "Member 'FChaosSolverConfiguration::ClusterConnectionFactor' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, ClusterUnionConnectionType) == 0x000028, "Member 'FChaosSolverConfiguration::ClusterUnionConnectionType' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateCollisionData) == 0x000029, "Member 'FChaosSolverConfiguration::bGenerateCollisionData' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, CollisionFilterSettings) == 0x00002C, "Member 'FChaosSolverConfiguration::CollisionFilterSettings' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateBreakData) == 0x00003C, "Member 'FChaosSolverConfiguration::bGenerateBreakData' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, BreakingFilterSettings) == 0x000040, "Member 'FChaosSolverConfiguration::BreakingFilterSettings' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateTrailingData) == 0x000050, "Member 'FChaosSolverConfiguration::bGenerateTrailingData' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, TrailingFilterSettings) == 0x000054, "Member 'FChaosSolverConfiguration::TrailingFilterSettings' has a wrong offset!");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateContactGraph) == 0x000064, "Member 'FChaosSolverConfiguration::bGenerateContactGraph' has a wrong offset!");

// ScriptStruct Chaos.SolverCollisionData
// 0x006C (0x006C - 0x0000)
struct FSolverCollisionData final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AccumulatedImpulse;                                // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity1;                                         // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity2;                                         // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity1;                                  // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity2;                                  // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass1;                                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass2;                                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleIndex;                                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LevelsetIndex;                                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleIndexMesh;                                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LevelsetIndexMesh;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSolverCollisionData) == 0x000004, "Wrong alignment on FSolverCollisionData");
static_assert(sizeof(FSolverCollisionData) == 0x00006C, "Wrong size on FSolverCollisionData");
static_assert(offsetof(FSolverCollisionData, Location) == 0x000000, "Member 'FSolverCollisionData::Location' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, AccumulatedImpulse) == 0x00000C, "Member 'FSolverCollisionData::AccumulatedImpulse' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Normal) == 0x000018, "Member 'FSolverCollisionData::Normal' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Velocity1) == 0x000024, "Member 'FSolverCollisionData::Velocity1' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Velocity2) == 0x000030, "Member 'FSolverCollisionData::Velocity2' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, AngularVelocity1) == 0x00003C, "Member 'FSolverCollisionData::AngularVelocity1' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, AngularVelocity2) == 0x000048, "Member 'FSolverCollisionData::AngularVelocity2' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Mass1) == 0x000054, "Member 'FSolverCollisionData::Mass1' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, Mass2) == 0x000058, "Member 'FSolverCollisionData::Mass2' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, ParticleIndex) == 0x00005C, "Member 'FSolverCollisionData::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, LevelsetIndex) == 0x000060, "Member 'FSolverCollisionData::LevelsetIndex' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, ParticleIndexMesh) == 0x000064, "Member 'FSolverCollisionData::ParticleIndexMesh' has a wrong offset!");
static_assert(offsetof(FSolverCollisionData, LevelsetIndexMesh) == 0x000068, "Member 'FSolverCollisionData::LevelsetIndexMesh' has a wrong offset!");

// ScriptStruct Chaos.SolverBreakingData
// 0x0030 (0x0030 - 0x0000)
struct FSolverBreakingData final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleIndex;                                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleIndexMesh;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSolverBreakingData) == 0x000004, "Wrong alignment on FSolverBreakingData");
static_assert(sizeof(FSolverBreakingData) == 0x000030, "Wrong size on FSolverBreakingData");
static_assert(offsetof(FSolverBreakingData, Location) == 0x000000, "Member 'FSolverBreakingData::Location' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, Velocity) == 0x00000C, "Member 'FSolverBreakingData::Velocity' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, AngularVelocity) == 0x000018, "Member 'FSolverBreakingData::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, Mass) == 0x000024, "Member 'FSolverBreakingData::Mass' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, ParticleIndex) == 0x000028, "Member 'FSolverBreakingData::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FSolverBreakingData, ParticleIndexMesh) == 0x00002C, "Member 'FSolverBreakingData::ParticleIndexMesh' has a wrong offset!");

// ScriptStruct Chaos.SolverTrailingData
// 0x0030 (0x0030 - 0x0000)
struct FSolverTrailingData final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleIndex;                                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParticleIndexMesh;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSolverTrailingData) == 0x000004, "Wrong alignment on FSolverTrailingData");
static_assert(sizeof(FSolverTrailingData) == 0x000030, "Wrong size on FSolverTrailingData");
static_assert(offsetof(FSolverTrailingData, Location) == 0x000000, "Member 'FSolverTrailingData::Location' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, Velocity) == 0x00000C, "Member 'FSolverTrailingData::Velocity' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, AngularVelocity) == 0x000018, "Member 'FSolverTrailingData::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, Mass) == 0x000024, "Member 'FSolverTrailingData::Mass' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, ParticleIndex) == 0x000028, "Member 'FSolverTrailingData::ParticleIndex' has a wrong offset!");
static_assert(offsetof(FSolverTrailingData, ParticleIndexMesh) == 0x00002C, "Member 'FSolverTrailingData::ParticleIndexMesh' has a wrong offset!");

// ScriptStruct Chaos.RecordedFrame
// 0x00B8 (0x00B8 - 0x0000)
struct FRecordedFrame final
{
public:
	TArray<struct FTransform>                     Transforms;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 TransformIndices;                                  // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 PreviousTransformIndices;                          // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                  DisabledFlags;                                     // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverCollisionData>           Collisions;                                        // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverBreakingData>            Breakings;                                         // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<struct FSolverTrailingData>              Trailings;                                         // 0x0060(0x0050)(NativeAccessSpecifierPublic)
	float                                         Timestamp;                                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRecordedFrame) == 0x000008, "Wrong alignment on FRecordedFrame");
static_assert(sizeof(FRecordedFrame) == 0x0000B8, "Wrong size on FRecordedFrame");
static_assert(offsetof(FRecordedFrame, Transforms) == 0x000000, "Member 'FRecordedFrame::Transforms' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, TransformIndices) == 0x000010, "Member 'FRecordedFrame::TransformIndices' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, PreviousTransformIndices) == 0x000020, "Member 'FRecordedFrame::PreviousTransformIndices' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, DisabledFlags) == 0x000030, "Member 'FRecordedFrame::DisabledFlags' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Collisions) == 0x000040, "Member 'FRecordedFrame::Collisions' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Breakings) == 0x000050, "Member 'FRecordedFrame::Breakings' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Trailings) == 0x000060, "Member 'FRecordedFrame::Trailings' has a wrong offset!");
static_assert(offsetof(FRecordedFrame, Timestamp) == 0x0000B0, "Member 'FRecordedFrame::Timestamp' has a wrong offset!");

// ScriptStruct Chaos.RecordedTransformTrack
// 0x0010 (0x0010 - 0x0000)
struct FRecordedTransformTrack final
{
public:
	TArray<struct FRecordedFrame>                 Records;                                           // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRecordedTransformTrack) == 0x000008, "Wrong alignment on FRecordedTransformTrack");
static_assert(sizeof(FRecordedTransformTrack) == 0x000010, "Wrong size on FRecordedTransformTrack");
static_assert(offsetof(FRecordedTransformTrack, Records) == 0x000000, "Member 'FRecordedTransformTrack::Records' has a wrong offset!");

}
