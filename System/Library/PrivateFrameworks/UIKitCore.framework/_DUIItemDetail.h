/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface _DUIItemDetail : NSObject <NSSecureCoding, NSCopying> {

	BOOL _scalable;
	BOOL _rotatable;
	double _scale;
	double _rotationAngle;
	NSArray* _lastKnownImageComponents;
	CGPoint _anchorPoint;

}

@property (assign,nonatomic) CGPoint anchorPoint;                             //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) BOOL scalable;                                   //@synthesize scalable=_scalable - In the implementation block
@property (assign,nonatomic) BOOL rotatable;                                  //@synthesize rotatable=_rotatable - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotationAngle;                            //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,retain) NSArray * lastKnownImageComponents;              //@synthesize lastKnownImageComponents=_lastKnownImageComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(BOOL)scalable;
-(void)setScalable:(BOOL)arg1 ;
-(BOOL)rotatable;
-(void)setRotatable:(BOOL)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(NSArray *)lastKnownImageComponents;
-(void)setLastKnownImageComponents:(NSArray *)arg1 ;
@end
