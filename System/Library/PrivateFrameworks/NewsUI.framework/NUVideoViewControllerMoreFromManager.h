/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVMoreFromPublisherActionTitleProviding.h>
#import <libobjc.A.dylib/SVMoreFromPublisherLogoProviding.h>

@protocol NUVideoCallToActionURLProviding;
@class NSString;

@interface NUVideoViewControllerMoreFromManager : NSObject <SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding> {

	id<NUVideoCallToActionURLProviding> _callToActionURLProvider;

}

@property (nonatomic,readonly) id<NUVideoCallToActionURLProviding> callToActionURLProvider;              //@synthesize callToActionURLProvider=_callToActionURLProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUVideoCallToActionURLProviding>)callToActionURLProvider;
-(id)actionTitleForVideo:(id)arg1 ;
-(/*^block*/id)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithCallToActionURLProvider:(id)arg1 ;
-(id)_callToActionTitleForVideoItem:(id)arg1 ;
-(id)init;
@end
