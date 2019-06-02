/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGUIBannerViewDelegate <NSObject>
@optional
-(id)documentForSuggestionsBannerView:(id)arg1;
-(void)suggestionsBannerViewWillPresentViewController:(id)arg1;
-(void)suggestionsBannerViewDidPresentViewController:(id)arg1;
-(void)suggestionsBannerViewWillDismissViewController:(id)arg1;
-(void)suggestionsBannerViewDidDismissViewController:(id)arg1;
-(void)suggestionsBannerViewDidDismiss:(id)arg1;
-(void)suggestionsBannerView:(id)arg1 didTapAddForContact:(id)arg2 wantsToPresentContactViewController:(id)arg3;
-(void)suggestionsBannerView:(id)arg1 didTapAddForEvent:(id)arg2 wantsToPresentEventViewController:(id)arg3;
-(void)suggestionsBannerView:(id)arg1 wantsToPushMixedSuggestionsViewController:(id)arg2;

@required
-(void)suggestionsBannerViewDidFinish:(id)arg1;
-(id)viewControllerForPresentingFromSuggestionsBannerView:(id)arg1;

@end

