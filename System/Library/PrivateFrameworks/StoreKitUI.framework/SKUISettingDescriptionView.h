/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SKUISettingDescriptionView : UIView {

	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) BOOL hasDisclosureChevron; 
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)hasDisclosureChevron;
-(UIEdgeInsets)layoutMargins;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
@end

