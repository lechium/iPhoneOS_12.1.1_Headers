/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLKUIScorecardViewDelegate <NSObject>
@optional
-(id)backgroundImageForScorecardViewMaterial:(id)arg1;
-(int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2;

@required
-(double)maximumInteritemSpacingInScorecardView:(id)arg1;
-(double)minimumInteritemSpacingInScorecardView:(id)arg1;
-(double)rowSpacingInScorecardView:(id)arg1;
-(long long)styleForScorecardView:(id)arg1;
-(long long)numberOfRowsInScorecardView:(id)arg1;
-(long long)numberOfElementsForScorecardView:(id)arg1 inRow:(long long)arg2;
-(id)viewElementForScorecard:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
-(double)maximumWidthForScorecardView:(id)arg1;

@end
