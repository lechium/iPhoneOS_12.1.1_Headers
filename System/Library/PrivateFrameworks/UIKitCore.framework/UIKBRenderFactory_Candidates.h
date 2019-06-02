/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBRenderFactory.h>

@interface UIKBRenderFactory_Candidates : UIKBRenderFactory {

	BOOL _shouldUseKeyboardBackground;

}

@property (assign,nonatomic) BOOL shouldUseKeyboardBackground;              //@synthesize shouldUseKeyboardBackground=_shouldUseKeyboardBackground - In the implementation block
-(id)initWithRenderingContext:(id)arg1 ;
-(void)setShouldUseKeyboardBackground:(BOOL)arg1 ;
-(id)traitsForExtendedCellSize:(CGSize)arg1 highlighted:(BOOL)arg2 groupHeader:(BOOL)arg3 edges:(unsigned long long)arg4 ;
-(id)traitsForExtendedView;
-(long long)lightHighQualityEnabledBlendForm;
-(id)controlKeyBackgroundColorName;
-(id)controlKeyForegroundColorName;
-(id)defaultKeyDividerColorName;
-(id)controlKeyDividerColorName;
-(BOOL)shouldUseKeyboardBackground;
-(id)traitsForCellSize:(CGSize)arg1 disambiguation:(BOOL)arg2 highlighted:(BOOL)arg3 edges:(unsigned long long)arg4 ;
-(id)traitsForToggleButtonWithSize:(CGSize)arg1 highlighted:(BOOL)arg2 edges:(unsigned long long)arg3 ;
-(id)traitsForHWRCellSize:(CGSize)arg1 highlighted:(BOOL)arg2 ;
-(id)traitsForEmptyExtendedPane:(CGSize)arg1 rowHeight:(double)arg2 idiomPad:(BOOL)arg3 clipCorners:(BOOL)arg4 ;
-(id)traitsForSortControlBackgroundWithSize:(CGSize)arg1 edges:(unsigned long long)arg2 ;
-(id)traitsForEdgeGradientWithSize:(CGSize)arg1 ;
@end
