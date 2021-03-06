/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PACountedSampleFrame.h>

@class NSString, NSMutableSet;

@interface PACountedSampleTreeFrame : PACountedSampleFrame {

	unsigned long long _state;
	NSString* _waitInfoString;
	NSMutableSet* _children;

}

@property (__weak,readonly) NSMutableSet * children; 
@property (readonly) BOOL isLeafFrame; 
@property (assign) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (retain) NSString * waitInfoString;                     //@synthesize waitInfoString=_waitInfoString - In the implementation block
-(NSString *)waitInfoString;
-(id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 andWaitInfoString:(id)arg3 ;
-(void)setWaitInfoString:(NSString *)arg1 ;
-(BOOL)isLeafFrame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableSet *)children;
@end

