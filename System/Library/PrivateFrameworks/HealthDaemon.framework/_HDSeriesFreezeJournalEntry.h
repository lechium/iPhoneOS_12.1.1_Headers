/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSDictionary;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry {

	NSUUID* _seriesUUID;
	NSDictionary* _metadata;
	Class _seriesClass;

}

@property (nonatomic,copy,readonly) NSUUID * seriesUUID;                  //@synthesize seriesUUID=_seriesUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) Class seriesClass;                         //@synthesize seriesClass=_seriesClass - In the implementation block
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3 ;
-(Class)seriesClass;
-(NSUUID *)seriesUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)metadata;
@end

