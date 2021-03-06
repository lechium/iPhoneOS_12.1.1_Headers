/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class Project, MiroMemory, MiroAutoEditLogger;


@protocol MiroAutoEditDelegate <NSObject>
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroMemory * activeMemory; 
@property (nonatomic,readonly) MiroAutoEditLogger * logger; 
@property (nonatomic,readonly) BOOL titleIsSupported; 
@optional
-(BOOL)titleIsSupported;
-(id)trimRangeForClip:(id)arg1;

@required
-(Project *)project;
-(MiroAutoEditLogger *)logger;
-(MiroMemory *)activeMemory;

@end

