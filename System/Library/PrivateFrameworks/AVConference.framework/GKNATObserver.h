/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKNATObserver : NSObject

@property (assign) NSObject*<GKNATObserverDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(int)currentNATType;
-(void)shouldTryNATCheck;
-(void)setDelegate:(NSObject*<GKNATObserverDelegate>)arg1 ;
-(NSObject*<GKNATObserverDelegate>)delegate;
-(id)initWithOptions:(id)arg1 ;
@end

