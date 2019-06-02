/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXBlueprintMarker.h>
@class NSArray;


@protocol SXBlueprintMarker <NSObject>
@property (nonatomic,readonly) id<SXComponent> leadingComponent; 
@property (nonatomic,readonly) id<SXComponent> trailingComponent; 
@property (nonatomic,readonly) CGPoint approximateLocation; 
@property (nonatomic,readonly) NSArray * path; 
@property (nonatomic,retain) id<SXComponentAnchor> componentAnchor; 
@required
-(CGPoint)approximateLocation;
-(id<SXComponentAnchor>)componentAnchor;
-(void)setComponentAnchor:(id)arg1;
-(id<SXComponent>)leadingComponent;
-(id<SXComponent>)trailingComponent;
-(NSArray *)path;

@end


@protocol SXComponent, SXComponentAnchor;
@class NSArray, NSString;

@interface SXBlueprintMarker : NSObject <SXBlueprintMarker> {

	id<SXComponent> _leadingComponent;
	id<SXComponent> _trailingComponent;
	NSArray* _path;
	id<SXComponentAnchor> _componentAnchor;
	CGPoint _approximateLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXComponent> leadingComponent;                 //@synthesize leadingComponent=_leadingComponent - In the implementation block
@property (nonatomic,readonly) id<SXComponent> trailingComponent;                //@synthesize trailingComponent=_trailingComponent - In the implementation block
@property (nonatomic,readonly) CGPoint approximateLocation;                      //@synthesize approximateLocation=_approximateLocation - In the implementation block
@property (nonatomic,readonly) NSArray * path;                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id<SXComponentAnchor> componentAnchor;              //@synthesize componentAnchor=_componentAnchor - In the implementation block
-(CGPoint)approximateLocation;
-(id<SXComponentAnchor>)componentAnchor;
-(id)initWithLeadingComponent:(id)arg1 trailingComponent:(id)arg2 approximateLocation:(CGPoint)arg3 path:(id)arg4 ;
-(void)setComponentAnchor:(id<SXComponentAnchor>)arg1 ;
-(id<SXComponent>)leadingComponent;
-(id<SXComponent>)trailingComponent;
-(NSString *)description;
-(NSArray *)path;
@end

