/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PPNamedEntityRecordLoadingDelegate : NSObject {

	NSString* _name;
	NSDate* _loadEntitiesDetectedSince;
	/*^block*/id _namedEntityRecordsSetup;
	/*^block*/id _namedEntityRecordsHandler;
	/*^block*/id _namedEntityRecordsCompletion;
	/*^block*/id _recentNamedEntityRecordsSetup;
	/*^block*/id _recentNamedEntityRecordsHandler;
	/*^block*/id _recentNamedEntityRecordsCompletion;
	/*^block*/id _resetNamedEntityRecordData;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * loadEntitiesDetectedSince;               //@synthesize loadEntitiesDetectedSince=_loadEntitiesDetectedSince - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsSetup;                         //@synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsHandler;                       //@synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsCompletion;                    //@synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsSetup;                   //@synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsHandler;                 //@synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsCompletion;              //@synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id resetNamedEntityRecordData;                      //@synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData - In the implementation block
-(NSDate *)loadEntitiesDetectedSince;
-(void)setLoadEntitiesDetectedSince:(NSDate *)arg1 ;
-(id)namedEntityRecordsSetup;
-(void)setNamedEntityRecordsSetup:(id)arg1 ;
-(id)namedEntityRecordsHandler;
-(void)setNamedEntityRecordsHandler:(id)arg1 ;
-(id)namedEntityRecordsCompletion;
-(void)setNamedEntityRecordsCompletion:(id)arg1 ;
-(id)recentNamedEntityRecordsSetup;
-(void)setRecentNamedEntityRecordsSetup:(id)arg1 ;
-(id)recentNamedEntityRecordsHandler;
-(void)setRecentNamedEntityRecordsHandler:(id)arg1 ;
-(id)recentNamedEntityRecordsCompletion;
-(void)setRecentNamedEntityRecordsCompletion:(id)arg1 ;
-(id)resetNamedEntityRecordData;
-(void)setResetNamedEntityRecordData:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 ;
@end

