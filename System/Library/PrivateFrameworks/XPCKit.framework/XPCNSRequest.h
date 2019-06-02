/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCoding;
@class NSData, XPCRequest;

@interface XPCNSRequest : NSObject {

	id<NSCoding> _message;
	NSData* _data;
	XPCRequest* _request;

}

@property (nonatomic,retain,readonly) XPCRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) id<NSCoding> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
-(void)sendReply:(id)arg1 ;
-(id)initWithXPCRequest:(id)arg1 ;
-(id<NSCoding>)message;
-(XPCRequest *)request;
-(NSData *)data;
@end
