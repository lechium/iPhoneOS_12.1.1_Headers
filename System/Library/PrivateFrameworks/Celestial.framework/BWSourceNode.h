/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSourceNode : BWNode

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
-(OpaqueCMClockRef)clock;
-(void)makeOutputsLiveIfNeeded;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)nodeType;
@end

