/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder> {

	NSDate* _signingTime;

}

@property (readonly) NSDate * signingTime;              //@synthesize signingTime=_signingTime - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithSigningTime:(id)arg1 ;
-(NSDate *)signingTime;
@end

