/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SecureChannelController, NSString, NSURL;

@interface SecureChannelAction : NSObject {

	SecureChannelController* controller;
	NSString* _title;
	NSString* _message;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
-(id)initWithURL:(id)arg1 callToAction:(id)arg2 ;
-(NSString *)title;
-(NSString *)message;
-(NSURL *)url;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
@end

