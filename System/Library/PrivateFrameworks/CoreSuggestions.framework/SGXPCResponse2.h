/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGXPCResponse1.h>

@protocol NSSecureCoding;
@interface SGXPCResponse2 : SGXPCResponse1 {

	id<NSSecureCoding> _response2;

}

@property (nonatomic,readonly) id<NSSecureCoding> response2;              //@synthesize response2=_response2 - In the implementation block
+(id)responseWithError:(id)arg1 ;
+(id)responseWith:(id)arg1 also:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id<NSSecureCoding>)response2;
-(void)setResponse2:(id<NSSecureCoding>)arg1 ;
-(id)response1;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

