/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject {

	NSMutableDictionary* _allTasks;

}

@property (nonatomic,retain) NSMutableDictionary * allTasks;              //@synthesize allTasks=_allTasks - In the implementation block
+(id)sharedInstance;
-(void)registerTask:(id)arg1 ;
-(void)unregisterTask:(id)arg1 ;
-(void)setAllTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allTasks;
-(id)init;
@end

