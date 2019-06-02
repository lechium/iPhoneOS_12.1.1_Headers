/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class NSMutableArray, SKUIHandleRulesSettingsHeaderFooterDescription, UILabel;

@interface SKUIHandleRulesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {

	NSMutableArray* _buttons;
	SKUIHandleRulesSettingsHeaderFooterDescription* _description;
	UILabel* _label;

}
+(CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
+(id)_labelWithDescription:(id)arg1 forWidth:(double)arg2 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
@end

