/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class AKAppleIDAuthenticationInAppContext, UIViewController, NSString;

@interface SUScriptAppleIdAuthenticationOperation : ISOperation {

	AKAppleIDAuthenticationInAppContext* _authenticationContext;
	UIViewController* _viewController;
	NSString* _status;

}

@property (nonatomic,retain) NSString * status;              //@synthesize status=_status - In the implementation block
-(id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3 ;
-(void)sendCompletionCallback:(id)arg1 ;
-(NSString *)status;
-(void)run;
-(void)setStatus:(NSString *)arg1 ;
@end

