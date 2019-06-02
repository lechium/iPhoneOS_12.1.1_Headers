/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned date : 1;
} SCD_Struct_AS1;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AS2;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AS3;

typedef struct {
	unsigned currentCacheIndex : 1;
	unsigned maximumNumberOfPointsPerDay : 1;
} SCD_Struct_AS4;

typedef struct {
	unsigned day : 1;
	unsigned era : 1;
	unsigned hour : 1;
	unsigned month : 1;
	unsigned year : 1;
} SCD_Struct_AS5;

typedef struct {
	unsigned activeHours : 1;
	unsigned activeHoursGoal : 1;
	unsigned briskMinutes : 1;
	unsigned briskMinutesGoal : 1;
	unsigned energyBurned : 1;
	unsigned energyBurnedGoal : 1;
	unsigned pushCount : 1;
	unsigned snapshotIndex : 1;
	unsigned stepCount : 1;
	unsigned timeZoneOffsetFromUTCForNoon : 1;
	unsigned walkingAndRunningDistance : 1;
	unsigned wheelchairUse : 1;
} SCD_Struct_AS6;

typedef struct {
	unsigned competitionStage : 1;
	unsigned timestamp : 1;
	unsigned type : 1;
} SCD_Struct_AS7;

typedef struct {
	double field1;
	double field2;
	long long field3;
	BOOL field4;
} SCD_Struct_AS8;

typedef struct HDSQLiteRow* HDSQLiteRowRef;

typedef struct {
	unsigned duration : 1;
	unsigned goalInCanonicalUnit : 1;
	unsigned goalType : 1;
	unsigned totalBasalEnergyBurnedInCanonicalUnit : 1;
	unsigned totalDistanceInCanonicalUnit : 1;
	unsigned totalEnergyBurnedInCanonicalUnit : 1;
	unsigned type : 1;
	unsigned isIndoorWorkout : 1;
	unsigned isWatchWorkout : 1;
} SCD_Struct_AS10;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned completedDate : 1;
	unsigned doubleValue : 1;
	unsigned intValue : 1;
	unsigned workoutActivityType : 1;
} SCD_Struct_AS12;

