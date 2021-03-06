/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardPresentationDelegate <NSObject>
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@optional
-(long long)cardPresentation:(id)arg1 compareCardViewControllerProviderOne:(id)arg2 providerTwo:(id)arg3;
-(long long)cardPresentation:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
-(long long)semanticContentAttributeForCardPresentation:(id)arg1;
-(void)cardPresentation:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;
-(double)boundingWidthForPresentation:(id)arg1;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;

@end

