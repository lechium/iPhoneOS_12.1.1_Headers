/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction {

	CNUIUserActivityManager* _activityManager;

}

@property (nonatomic,readonly) CNUIUserActivityManager * activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(id)initWithContact:(id)arg1 activityManager:(id)arg2 ;
-(id)title;
@end
