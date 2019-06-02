/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject {

	double _bufferSize;
	CGPoint _center;
	PKPhysicsBody* _physicsBody;
	double _radius;

}

@property (assign,nonatomic) double bufferSize;                        //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic) CGPoint center;                           //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * physicsBody;              //@synthesize physicsBody=_physicsBody - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
-(void)setBufferSize:(double)arg1 ;
-(void)setPhysicsBody:(PKPhysicsBody *)arg1 ;
-(PKPhysicsBody *)physicsBody;
-(double)bufferSize;
-(id)description;
-(void)setCenter:(CGPoint)arg1 ;
-(CGPoint)center;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end

