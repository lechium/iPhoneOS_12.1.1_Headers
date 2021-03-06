/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController {

	SKUIRedeem* _redeem;
	long long _redeemCategory;

}

@property (nonatomic,retain) SKUIRedeem * redeem;                   //@synthesize redeem=_redeem - In the implementation block
@property (assign,nonatomic) long long redeemCategory;              //@synthesize redeemCategory=_redeemCategory - In the implementation block
+(BOOL)canShowResultsForRedeem:(id)arg1 ;
+(id)redeemResultsControllerForRedeem:(id)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(id)initWithRedeem:(id)arg1 ;
-(void)setRedeemCategory:(long long)arg1 ;
-(SKUIRedeem *)redeem;
-(void)setRedeem:(SKUIRedeem *)arg1 ;
-(long long)redeemCategory;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end

