/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKServerChangeToken, NSDate, NSDictionary;

@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying> {

	BOOL _hasEncounteredGapInCurrentEpoch;
	int _syncProtocolVersion;
	NSString* _ownerIdentifier;
	NSString* _containerIdentifier;
	CKServerChangeToken* _serverChangeToken;
	unsigned long long _baselineEpoch;
	NSDate* _rebaseDeadline;
	NSDate* _lastSyncDate;
	NSDictionary* _emptyZoneDateByZoneID;
	NSDate* _lastCheckDate;

}

@property (nonatomic,readonly) NSString * ownerIdentifier;                           //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long baselineEpoch;                     //@synthesize baselineEpoch=_baselineEpoch - In the implementation block
@property (nonatomic,readonly) NSDate * rebaseDeadline;                              //@synthesize rebaseDeadline=_rebaseDeadline - In the implementation block
@property (nonatomic,readonly) NSDate * lastSyncDate;                                //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * emptyZoneDateByZoneID;                 //@synthesize emptyZoneDateByZoneID=_emptyZoneDateByZoneID - In the implementation block
@property (nonatomic,readonly) NSDate * lastCheckDate;                               //@synthesize lastCheckDate=_lastCheckDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEncounteredGapInCurrentEpoch;                 //@synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch - In the implementation block
@property (nonatomic,readonly) int syncProtocolVersion;                              //@synthesize syncProtocolVersion=_syncProtocolVersion - In the implementation block
-(NSString *)ownerIdentifier;
-(unsigned long long)baselineEpoch;
-(NSString *)containerIdentifier;
-(NSDate *)lastSyncDate;
-(NSDate *)rebaseDeadline;
-(BOOL)hasEncounteredGapInCurrentEpoch;
-(NSDictionary *)emptyZoneDateByZoneID;
-(id)stateByResettingRebaselineDeadline;
-(id)stateByRecordingLastCheckDate:(id)arg1 ;
-(id)initWithServerChangeToken:(id)arg1 baselineEpoch:(unsigned long long)arg2 rebaseDeadline:(id)arg3 lastSyncDate:(id)arg4 emptyZones:(id)arg5 lastCheckDate:(id)arg6 ownerIdentifier:(id)arg7 containerIdentifier:(id)arg8 syncProtocolVersion:(int)arg9 ;
-(id)stateWithGapEncountered:(BOOL)arg1 ;
-(id)stateByRecordingLastSyncDate:(id)arg1 ;
-(NSDate *)lastCheckDate;
-(CKServerChangeToken *)serverChangeToken;
-(int)syncProtocolVersion;
-(id)stateWithServerChangeToken:(id)arg1 ;
-(id)stateWithSyncProtocolVersion:(int)arg1 ;
-(id)stateWithEmptyZones:(id)arg1 ;
-(id)stateWithBaselineEpoch:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
