/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PVAggregate : NSObject {

	NSString* _primaryDomain;

}

@property (nonatomic,retain) NSString * primaryDomain;              //@synthesize primaryDomain=_primaryDomain - In the implementation block
+(id)sharedAggregate;
-(id)_registeredKeysLookupTable;
-(id)_distributionKeys;
-(id)_scalarToAddKeys;
-(id)_allRegisteredKeys;
-(NSString *)primaryDomain;
-(id)_getSubdomain:(id)arg1 ;
-(id)_needsParsingKeys;
-(id)_stringValueTypeKeys;
-(id)_doubleValueTypeKeys;
-(void)_recordAGGDValue:(id)arg1 forKey:(id)arg2 ;
-(id)_aggdMethodConstructionHintsForKey:(id)arg1 ;
-(id)_aggdMethodConstructionHints;
-(id)_messageTracerMethodConstructionHints;
-(void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2 ;
-(id)_messageTracerMethodConstructionHintsForKey:(id)arg1 ;
-(id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2 ;
-(void)setPrimaryDomain:(NSString *)arg1 ;
-(void)recordValue:(id)arg1 forKey:(id)arg2 ;
-(id)_noOpRegisteredKeysForOSXLibraryDomain;
-(id)_registeredKeysForLibraryDomain;
@end

