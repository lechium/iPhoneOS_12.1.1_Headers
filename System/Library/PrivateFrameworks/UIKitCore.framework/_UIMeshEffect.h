/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class CAMeshTransform;

@interface _UIMeshEffect : UIVisualEffect {

	CAMeshTransform* _meshTransform;
	CAMeshTransform* _identityMeshTransform;
	BOOL _underlayMesh;

}
+(id)meshEffectZoom:(double)arg1 ;
+(id)_underlayMeshEffectZoom:(double)arg1 ;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)_viewEntry;
@end
