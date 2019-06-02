/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBTree, UITextInputTraits, NSObject, UIKBRenderConfig, NSString;

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {

	UIKBTree* _keyplane;
	UITextInputTraits* _inputTraits;
	int _visualStyle;
	NSObject* _geometryCacheKey;
	CGRect _splitLeftRect;
	CGRect _splitLeftCacheRect;
	CGRect _splitRightRect;
	CGRect _splitRightCacheRect;
	int _topCorners;
	BOOL _isSplit;
	BOOL _centerFilled;
	BOOL _hasCandidateKeys;
	UIKBRenderConfig* _renderConfig;

}

@property (nonatomic,retain) NSObject * geometryCacheKey;                  //@synthesize geometryCacheKey=_geometryCacheKey - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(BOOL)_canDrawContent;
-(NSString *)cacheKey;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(double)cachedWidth;
-(BOOL)keepNonPersistent;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)setGeometryCacheKey:(NSObject *)arg1 ;
-(void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2 ;
-(NSObject *)geometryCacheKey;
@end

