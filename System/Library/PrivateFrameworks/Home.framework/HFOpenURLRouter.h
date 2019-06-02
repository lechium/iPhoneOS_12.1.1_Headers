/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFApplicationURLHandling;
@interface HFOpenURLRouter : NSObject {

	id<HFApplicationURLHandling> _applicationURLHandler;

}

@property (assign,nonatomic,__weak) id<HFApplicationURLHandling> applicationURLHandler;              //@synthesize applicationURLHandler=_applicationURLHandler - In the implementation block
+(id)sharedInstance;
-(id<HFApplicationURLHandling>)applicationURLHandler;
-(void)setApplicationURLHandler:(id<HFApplicationURLHandling>)arg1 ;
-(id)openURL:(id)arg1 ;
@end

