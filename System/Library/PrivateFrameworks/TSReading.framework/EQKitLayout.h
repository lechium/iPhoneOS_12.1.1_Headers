/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayout.h>

@protocol EQKitLayout <NSObject>
@required
-(double)depth;
-(BOOL)layoutWithContext:(id)arg1;
-(double)vsize;
-(CGRect*)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2;
-(double)naturalAlignmentOffset;
-(double)width;
-(double)height;

@end


@protocol EQKitRootNode;
@class EQKitBox, EQKitEnvironmentInstance, NSString;

@interface EQKitLayout : NSObject <EQKitLayout> {

	id<EQKitRootNode> mRoot;
	EQKitBox* mBox;
	double mAscent;
	double mDescent;
	double mLeading;
	double mNaturalAlignmentOffset;
	double mScale;
	BOOL mSingleLineHeight;
	EQKitEnvironmentInstance* mEnvironment;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)depth;
-(BOOL)layoutWithContext:(id)arg1 ;
-(double)vsize;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(EQKitBox *)box;
-(id)initWithRoot:(id)arg1 environment:(id)arg2 ;
-(double)naturalAlignmentOffset;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(double)width;
-(double)height;
@end

