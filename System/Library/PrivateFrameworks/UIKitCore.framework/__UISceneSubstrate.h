/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIContextBinding.h>

@class FBSScene, NSMapTable, NSString;

@interface __UISceneSubstrate : NSObject <_UIContextBinding> {

	FBSScene* _scene;
	NSMapTable* _sceneLayerTable;

}

@property (nonatomic,readonly) FBSScene * scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(FBSScene *)scene;
-(id)initWithScene:(id)arg1 ;
@end
