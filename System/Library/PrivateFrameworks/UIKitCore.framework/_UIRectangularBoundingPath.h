/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBoundingPath.h>

@interface _UIRectangularBoundingPath : _UIBoundingPath {

	CGRect _boundingRect;

}

@property (nonatomic,readonly) CGRect boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setCoordinateSpace:(id)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 boundingRect:(CGRect)arg2 ;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(BOOL)validateForCoordinateSpace;
-(BOOL)isNonRectangular;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(BOOL)_validateBoundingRect:(CGRect)arg1 forCoordinateSpace:(id)arg2 ;
-(CGRect)boundingRect;
@end

