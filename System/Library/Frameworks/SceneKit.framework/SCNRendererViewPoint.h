/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject {

	MTLRenderPassDescriptor* passDescriptor;
	SCD_Struct_SC106 viewport;
	SCNMatrix4 viewMatrix;
	SCNMatrix4 projectionMatrix;

}

@property (assign,nonatomic) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic) SCNMatrix4 projectionMatrix; 
@property (nonatomic,retain) MTLRenderPassDescriptor * passDescriptor; 
@property (assign,nonatomic) SCD_Struct_SC106 viewport; 
-(SCNMatrix4)viewMatrix;
-(void)setViewMatrix:(SCNMatrix4)arg1 ;
-(SCNMatrix4)projectionMatrix;
-(void)setProjectionMatrix:(SCNMatrix4)arg1 ;
-(MTLRenderPassDescriptor *)passDescriptor;
-(void)setPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(SCD_Struct_SC106)viewport;
-(void)setViewport:(SCD_Struct_SC106)arg1 ;
-(void)dealloc;
@end
