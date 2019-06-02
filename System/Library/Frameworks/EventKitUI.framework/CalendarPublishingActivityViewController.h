/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;
@interface CalendarPublishingActivityViewController : UIActivityViewController {

	id<CalendarPublishingActivityDelegate> _activityDelegate;

}

@property (__weak) id<CalendarPublishingActivityDelegate> activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
-(id<CalendarPublishingActivityDelegate>)activityDelegate;
-(void)setActivityDelegate:(id<CalendarPublishingActivityDelegate>)arg1 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
@end
