/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SilexText/SilexText-Structs.h>
@class NSString, STTextExclusionPathWrapper, UIBezierPath;

@interface STTextExclusionPath : NSObject {

	BOOL _fullBleed;
	int _type;
	int _lineVerticalAlignment;
	double _padding;
	double _verticalAlignmentFactor;
	NSString* _componentIdentifier;
	/*^block*/id _startBlock;
	/*^block*/id _minYBlock;
	/*^block*/id _completionBlock;
	STTextExclusionPathWrapper* _wrapper;
	CGPoint _actualPosition;
	CGPoint _position;
	CGPoint _anchorPoint;
	NSRange _range;
	UIEdgeInsets _insets;
	CGRect _exclusionRect;

}

@property (nonatomic,readonly) STTextExclusionPathWrapper * wrapper;              //@synthesize wrapper=_wrapper - In the implementation block
@property (assign,nonatomic) CGPoint actualPosition;                              //@synthesize actualPosition=_actualPosition - In the implementation block
@property (assign,nonatomic) CGRect exclusionRect;                                //@synthesize exclusionRect=_exclusionRect - In the implementation block
@property (nonatomic,readonly) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGPoint position;                                  //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint;                               //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) NSRange range;                                       //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) UIBezierPath * path; 
@property (nonatomic,readonly) id<TSDWrappable> wrappable; 
@property (assign,nonatomic) double padding;                                      //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double verticalAlignmentFactor;                      //@synthesize verticalAlignmentFactor=_verticalAlignmentFactor - In the implementation block
@property (assign,nonatomic) int lineVerticalAlignment;                           //@synthesize lineVerticalAlignment=_lineVerticalAlignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) BOOL fullBleed;                                      //@synthesize fullBleed=_fullBleed - In the implementation block
@property (nonatomic,retain) NSString * componentIdentifier;                      //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,copy) id startBlock;                                         //@synthesize startBlock=_startBlock - In the implementation block
@property (nonatomic,copy) id minYBlock;                                          //@synthesize minYBlock=_minYBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(CGRect)exclusionRect;
-(id)initWithTextRange:(NSRange)arg1 position:(CGPoint)arg2 rect:(CGRect)arg3 withInsets:(UIEdgeInsets)arg4 ;
-(void)setVerticalAlignmentFactor:(double)arg1 ;
-(void)setLineVerticalAlignment:(int)arg1 ;
-(void)setFullBleed:(BOOL)arg1 ;
-(void)setMinYBlock:(id)arg1 ;
-(BOOL)fullBleed;
-(void)setExclusionRect:(CGRect)arg1 ;
-(CGPoint)actualPosition;
-(id)startBlock;
-(void)setStartBlock:(id)arg1 ;
-(void)adjustYPositionWithCurrentPosition:(CGPoint)arg1 ;
-(void)setActualPosition:(CGPoint)arg1 ;
-(STTextExclusionPathWrapper *)wrapper;
-(id)minYBlock;
-(id<TSDWrappable>)wrappable;
-(void)callStartBlock;
-(void)callCompletionBlock;
-(double)verticalAlignmentFactor;
-(int)lineVerticalAlignment;
-(id)description;
-(int)type;
-(CGPoint)position;
-(void)setPadding:(double)arg1 ;
-(double)padding;
-(UIEdgeInsets)insets;
-(UIBezierPath *)path;
-(CGPoint)anchorPoint;
-(void)setCompletionBlock:(id)arg1 ;
-(NSRange)range;
-(id)completionBlock;
-(void)setRange:(NSRange)arg1 ;
@end
