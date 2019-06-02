/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CHStrokeProviderVersion;
@class NSArray, CHStrokeGroupingResult, NSDictionary, NSString;

@interface CHRecognitionSessionResult : NSObject <NSCopying> {

	long long __transcriptionCapability;
	id<CHStrokeProviderVersion> _strokeProviderVersion;
	NSArray* _locales;
	NSArray* _preferredLocales;
	CHStrokeGroupingResult* _strokeGroupingResult;
	NSDictionary* __recognitionResultsByGroupID;
	SCD_Struct_CH24 _generationDuration;

}

@property (nonatomic,copy,readonly) NSDictionary * _recognitionResultsByGroupID;                      //@synthesize _recognitionResultsByGroupID=__recognitionResultsByGroupID - In the implementation block
@property (nonatomic,readonly) long long _transcriptionCapability; 
@property (nonatomic,retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion;              //@synthesize strokeProviderVersion=_strokeProviderVersion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locales;                                                //@synthesize locales=_locales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preferredLocales;                                       //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeGroupingResult * strokeGroupingResult;                  //@synthesize strokeGroupingResult=_strokeGroupingResult - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CH24 generationDuration;                                    //@synthesize generationDuration=_generationDuration - In the implementation block
@property (nonatomic,readonly) NSString * highConfidenceDebugDescription; 
@property (nonatomic,readonly) NSString * allResultsDebugDescription; 
@property (nonatomic,readonly) NSArray * allResultsDebugDescriptionByGroup; 
-(NSArray *)locales;
-(CHStrokeGroupingResult *)strokeGroupingResult;
-(id)recognitionResultForStrokeGroupIdentifier:(long long)arg1 ;
-(NSDictionary *)_recognitionResultsByGroupID;
-(id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(/*^block*/id)arg2 ;
-(id)initWithStrokeProviderVersion:(id)arg1 locales:(id)arg2 preferredLocales:(id)arg3 strokeGroupingResult:(id)arg4 recognitionResults:(id)arg5 generationDuration:(SCD_Struct_CH24)arg6 ;
-(long long)_transcriptionCapability;
-(NSString *)highConfidenceDebugDescription;
-(NSString *)allResultsDebugDescription;
-(NSArray *)allResultsDebugDescriptionByGroup;
-(id)allResultsDebugDescriptionWithGroupHeaderBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_CH24)generationDuration;
-(NSArray *)preferredLocales;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

