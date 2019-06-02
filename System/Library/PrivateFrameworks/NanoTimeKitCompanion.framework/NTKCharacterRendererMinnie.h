/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCharacterRenderer.h>

@class _Flower, _Skirt, NSMutableArray;

@interface NTKCharacterRendererMinnie : NTKCharacterRenderer {

	_Flower* _flower;
	_Skirt* _skirt;
	NSMutableArray* _footTexs[2];

}
-(id)initWithLoader:(id)arg1 ;
-(void)setupVAOs;
-(void)setupBodyState;
-(void)loadFootTextures;
-(void)_drawBody;
-(void)_drawTappingFoot;
-(void)_drawHead;
-(void)_drawFlower;
-(void)_drawSkirt;
@end

