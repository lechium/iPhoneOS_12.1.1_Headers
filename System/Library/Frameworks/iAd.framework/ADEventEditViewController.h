/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditViewController.h>

@class ADAdSpace, ADHomeButtonHandler;

@interface ADEventEditViewController : EKEventEditViewController {

	ADAdSpace* _adSpace;
	ADHomeButtonHandler* _homeButtonHandler;

}

@property (nonatomic,retain) ADHomeButtonHandler * homeButtonHandler;              //@synthesize homeButtonHandler=_homeButtonHandler - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                  //@synthesize adSpace=_adSpace - In the implementation block
-(ADAdSpace *)adSpace;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)cancelAndDismiss;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

