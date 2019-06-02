/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>

@class NSString;

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)notificationURL;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)notificationIconBundleIdentifier;
-(BOOL)prefersOpenToCreate;
-(id)notificationTitle;
-(id)viewController;
-(id)localizedName;
-(int)interactionType;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
@end

