/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMSymptomFixSessionDelegate.h>

@class NSMapTable, NSString;

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate> {

	NSMapTable* _symptomToRepairSessionMapTable;

}

@property (nonatomic,retain) NSMapTable * symptomToRepairSessionMapTable;              //@synthesize symptomToRepairSessionMapTable=_symptomToRepairSessionMapTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(BOOL)anySymptomIsBeingFixedForFixableObject:(id)arg1 ;
-(id)fixableObjectForSession:(id)arg1 ;
-(void)fixSession:(id)arg1 didChangeState:(long long)arg2 ;
-(NSMapTable *)symptomToRepairSessionMapTable;
-(id)_mapTableKeyFromSymptom:(id)arg1 fixableObject:(id)arg2 ;
-(BOOL)symptomIsBeingFixed:(id)arg1 forFixableObject:(id)arg2 ;
-(long long)fixStateForSymptom:(id)arg1 forFixableObject:(id)arg2 ;
-(void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3 ;
-(void)setSymptomToRepairSessionMapTable:(NSMapTable *)arg1 ;
-(id)init;
@end

