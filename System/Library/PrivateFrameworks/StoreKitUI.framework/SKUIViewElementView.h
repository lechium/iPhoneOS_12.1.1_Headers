/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIViewElementView <NSObject>
@optional
+(id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

@required
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+(CGSize*)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+(CGSize*)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
-(id)viewForElementIdentifier:(id)arg1;
-(void)setContentInset:(UIEdgeInsets)arg1;

@end

