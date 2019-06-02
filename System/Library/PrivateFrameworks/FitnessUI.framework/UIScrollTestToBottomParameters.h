/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CADisplayLink;

@interface UIScrollTestToBottomParameters : NSObject {

	int _iterations;
	int _delta;
	int _scrollLength;
	float _startOffset;
	NSString* _currentTest;
	int _axis;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) int iterations;                           //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) int delta;                                //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) int scrollLength;                         //@synthesize scrollLength=_scrollLength - In the implementation block
@property (assign,nonatomic) float startOffset;                        //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) float endOffset; 
@property (assign,nonatomic) int axis;                                 //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSString * currentTest;                   //@synthesize currentTest=_currentTest - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)dealloc;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(NSString *)currentTest;
-(float)startOffset;
-(float)endOffset;
-(int)scrollLength;
-(id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6 ;
-(int)iterations;
-(void)setIterations:(int)arg1 ;
-(int)delta;
-(void)setDelta:(int)arg1 ;
-(void)setScrollLength:(int)arg1 ;
-(void)setStartOffset:(float)arg1 ;
-(void)setCurrentTest:(NSString *)arg1 ;
@end

