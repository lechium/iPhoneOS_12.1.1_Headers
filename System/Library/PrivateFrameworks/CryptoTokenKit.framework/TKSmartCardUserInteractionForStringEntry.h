/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction <NSSecureCoding> {

	NSString* _result;
	TKSmartCardSlot* _slot;

}

@property (__weak) TKSmartCardSlot * slot;              //@synthesize slot=_slot - In the implementation block
@property (retain) NSString * result;                   //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(TKSmartCardSlot *)slot;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)setResult:(NSString *)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)result;
@end

