/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIFirstTimeExperienceViewController.h>

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController {

	BOOL _hasBeenDisplayed;

}

@property (assign) BOOL hasBeenDisplayed;              //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
+(long long)viewCount;
+(void)updateViewCountToCount:(long long)arg1 ;
+(void)dismissForever;
+(BOOL)needsDisplay;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(void)updateViewCount;
-(BOOL)hasBeenDisplayed;
@end
