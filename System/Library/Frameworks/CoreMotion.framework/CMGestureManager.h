/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
+(BOOL)isGestureServiceAvailable;
-(void)setGestureHandler:(id)arg1 ;
-(id)gestureHandler;
-(id)initWithPriority:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end
