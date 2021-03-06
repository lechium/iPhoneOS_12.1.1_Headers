/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFPubliclyDescribable.h>

@class NSString;

@interface MFSearchableIndexBudgetConfiguration : NSObject <MFPubliclyDescribable> {

	BOOL _enableActivityBasedScheduling;
	BOOL _autoStartMaintenanceIndexing;
	double _time;
	double _periodDuration;
	long long _numberOfItemsToIndexOnResume;

}

@property (assign,nonatomic) BOOL enableActivityBasedScheduling;                    //@synthesize enableActivityBasedScheduling=_enableActivityBasedScheduling - In the implementation block
@property (assign,nonatomic) BOOL autoStartMaintenanceIndexing;                     //@synthesize autoStartMaintenanceIndexing=_autoStartMaintenanceIndexing - In the implementation block
@property (nonatomic,readonly) double time;                                         //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double periodDuration;                               //@synthesize periodDuration=_periodDuration - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsToIndexOnResume;              //@synthesize numberOfItemsToIndexOnResume=_numberOfItemsToIndexOnResume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * mf_publicDescription; 
+(id)defaultConfiguration;
-(double)time;
-(id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 ;
-(double)periodDuration;
-(long long)numberOfItemsToIndexOnResume;
-(id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(BOOL)arg4 autoStartMaintenanceIndexing:(BOOL)arg5 ;
-(BOOL)enableActivityBasedScheduling;
-(void)setEnableActivityBasedScheduling:(BOOL)arg1 ;
-(BOOL)autoStartMaintenanceIndexing;
-(void)setAutoStartMaintenanceIndexing:(BOOL)arg1 ;
-(NSString *)mf_publicDescription;
-(id)init;
-(NSString *)description;
@end

