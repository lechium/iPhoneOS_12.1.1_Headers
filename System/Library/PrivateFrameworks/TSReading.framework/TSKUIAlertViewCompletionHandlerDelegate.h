/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface TSKUIAlertViewCompletionHandlerDelegate : NSObject <UIAlertViewDelegate> {

	/*^block*/id mCompletionHandler;

}

@property (nonatomic,copy) id completionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

