/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKRegion;

@interface PKPhysicsField : NSObject {

	shared_ptr<PKCField>* _field;
	PKRegion* _region;
	 _position;
	float _rotation;
	 _scale;
	BOOL _override;

}

@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isOverride,nonatomic) BOOL override;                    //@synthesize override=_override - In the implementation block
@property (nonatomic,retain) id region; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  position; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic)  scale; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
-(void)set_field:(shared_ptr<PKCField>*)arg1 ;
-(BOOL)override;
-(void)setIsOverride:(BOOL)arg1 ;
-(void)setOverride:(BOOL)arg1 ;
-(BOOL)isOverride;
-(id)init;
-(void)dealloc;
-()scale;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setScale:;
-(void)setPosition:;
-()position;
-()direction;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id<NSObject>)representedObject;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(shared_ptr<PKCField>*)_field;
-(void)setDirection:;
-(void)setRegion:(id)arg1 ;
-(void)setStrength:(float)arg1 ;
-(float)strength;
-(void)setFalloff:(float)arg1 ;
-(float)falloff;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(id)region;
@end

