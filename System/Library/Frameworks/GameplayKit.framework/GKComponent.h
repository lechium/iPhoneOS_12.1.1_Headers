/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKEntity, GKComponentSystem, NSString;

@interface GKComponent : NSObject <NSCopying, NSSecureCoding> {

	GKEntity* _entity;
	int _usesPerComponentUpdateCount;
	GKComponentSystem* _componentSystem;
	NSString* _componentName;

}

@property (assign,nonatomic) BOOL usesPerComponentUpdate; 
@property (assign,nonatomic) GKComponentSystem * componentSystem; 
@property (assign,nonatomic) NSString * componentName; 
@property (nonatomic,__weak,readonly) GKEntity * entity; 
+(BOOL)supportsSecureCoding;
-(GKEntity *)entity;
-(void)setEntity:(GKEntity *)arg1 ;
-(GKComponentSystem *)componentSystem;
-(BOOL)usesPerComponentUpdate;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)didAddToEntity;
-(void)willRemoveFromEntity;
-(void)setUsesPerComponentUpdate:(BOOL)arg1 ;
-(void)setComponentSystem:(GKComponentSystem *)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)componentName;
@end

