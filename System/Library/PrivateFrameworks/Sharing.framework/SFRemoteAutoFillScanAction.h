/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject {

	NSString* _message;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(void)actionForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end

