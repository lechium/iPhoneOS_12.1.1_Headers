/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject {

	NSDictionary* _headers;
	NSDictionary* _body;

}

@property (nonatomic,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) NSDictionary * body;                 //@synthesize body=_body - In the implementation block
-(id)initWithHeaders:(id)arg1 body:(id)arg2 ;
-(NSDictionary *)headers;
-(NSDictionary *)body;
@end
