/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSHTTPURLResponse, NSData;

@interface ILNetworkResponse : NSObject <NSSecureCoding> {

	NSHTTPURLResponse* _urlResponse;
	NSData* _data;

}

@property (nonatomic,copy) NSHTTPURLResponse * urlResponse;              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,copy) NSData * data;                                //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSHTTPURLResponse *)urlResponse;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end
